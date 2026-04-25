/* ----------------------------------------------------------------------
   miniMD is a simple, parallel molecular dynamics (MD) code.   miniMD is
   an MD microapplication in the Mantevo project at Sandia National
   Laboratories ( http://www.mantevo.org ). The primary
   authors of miniMD are Steve Plimpton (sjplimp@sandia.gov) , Paul Crozier
   (pscrozi@sandia.gov) and Christian Trott (crtrott@sandia.gov).

   Copyright (2008) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This library is free software; you
   can redistribute it and/or modify it under the terms of the GNU Lesser
   General Public License as published by the Free Software Foundation;
   either version 3 of the License, or (at your option) any later
   version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this software; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
   USA.  See also: http://www.gnu.org/licenses/lgpl.txt .

   For questions, contact Paul S. Crozier (pscrozi@sandia.gov) or
   Christian Trott (crtrott@sandia.gov).

   Please read the accompanying README and LICENSE files.
---------------------------------------------------------------------- */

#include "stdio.h"
#include "stdlib.h"
#include "comm.h"
#include "hapi_nvtx.h"

#define BUFFACTOR 2
#define BUFMIN 10000
#define BUFEXTRA 1000
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define IDX(x,y,z) ((charegrid[0] * charegrid[1] * (z)) + charegrid[0] * (y) + (x))

#include "miniMD.decl.h"
#include "block.decl.h"
#include "block.h"

/* readonly */ extern CProxy_Main main_proxy;
/* readonly */ extern CProxy_Block block_proxy;
/* readonly */ extern CProxy_Comm comm_proxy;
/* readonly */ extern int num_chares;

Comm::Comm()
{
  index = thisIndex;
  maxsend = BUFMIN;
  MMD_float* buf_send_ptr;
  hapiCheck(cudaMalloc(&buf_send_ptr, (maxsend + BUFMIN)*sizeof(MMD_float)));
  cudaDeviceSynchronize();
  buf_send = float_1d_um_view_type(buf_send_ptr,maxsend + BUFMIN);
  maxrecv = BUFMIN;
  MMD_float* buf_recv_ptr;
  hapiCheck(cudaMalloc(&buf_recv_ptr, maxrecv*sizeof(MMD_float)));
  cudaDeviceSynchronize();
  buf_recv = float_1d_um_view_type(buf_recv_ptr,maxrecv);
  check_safeexchange = 0;
  do_safeexchange = 0;
  maxnlocal = 0;
  count = Kokkos::DualView<int*>("comm::count",1);
  count_host = Kokkos::View<int*, Kokkos::CudaHostPinnedSpace>("comm::count_host", 3);
  count_device = Kokkos::View<int*>("comm::count_device", 3);
  hapiCheck(hapiMalloc((void**)&buf_comm_dummy, 4*sizeof(MMD_float)));
  post_exchange_recv_count = new size_t[3];
  nrecvexchange = new size_t[6];
  h_exc_alloc = false;
  h_buf_alloc = false;

  // Save pointer to Block bound array element
  iter = 0;
  comm_time=0.0;
}

Comm::~Comm() {}

int Comm::setup(MMD_float cutneigh, Atom &atom)
{
  int i;
  MMD_float prd[3];
  int myloc[3];
  MMD_float lo, hi;
  int ineed, idim, nbox;

  prd[0] = atom.box.xprd;
  prd[1] = atom.box.yprd;
  prd[2] = atom.box.zprd;

  /* setup 3-d grid of chares */

  MMD_float area[3];

  area[0] = prd[0] * prd[1];
  area[1] = prd[0] * prd[2];
  area[2] = prd[1] * prd[2];

  MMD_float bestsurf = 2.0 * (area[0] + area[1] + area[2]);

  // loop thru all possible factorizations of num_chares
  // surf = surface area of a chare sub-domain
  // for 2d, insure ipz = 1

  int ipx, ipy, ipz, nremain;
  MMD_float surf;

  ipx = 1;

  while (ipx <= num_chares) {
    if (num_chares % ipx == 0) {
      nremain = num_chares / ipx;
      ipy = 1;

      while (ipy <= nremain) {
        if (nremain % ipy == 0) {
          ipz = nremain / ipy;
          surf = area[0] / ipx / ipy + area[1] / ipx / ipz + area[2] / ipy / ipz;

          if (surf < bestsurf) {
            bestsurf = surf;
            charegrid[0] = ipx;
            charegrid[1] = ipy;
            charegrid[2] = ipz;
          }
        }

        ipy++;
      }
    }

    ipx++;
  }

  if (index == 0) {
    printf("Chare grid: %d x %d x %d\n", charegrid[0], charegrid[1], charegrid[2]);
  }

  if (charegrid[0]*charegrid[1]*charegrid[2] != num_chares) {
    if (index == 0) printf("ERROR: Bad grid of chares\n");

    return 1;
  }

  /* determine where I am and my neighboring procs in 3d grid of chares */
  myloc[0] = index % charegrid[0];
  myloc[1] = (index / charegrid[0]) % charegrid[1];
  myloc[2] = index / (charegrid[0] * charegrid[1]);

  if (myloc[0] == 0)              chareneigh[0][0] = IDX(charegrid[0]-1,myloc[1],myloc[2]);
  else                            chareneigh[0][0] = IDX(myloc[0]-1,myloc[1],myloc[2]);
  if (myloc[0] == charegrid[0]-1) chareneigh[0][1] = IDX(0,myloc[1],myloc[2]);
  else                            chareneigh[0][1] = IDX(myloc[0]+1,myloc[1],myloc[2]);
  if (myloc[1] == 0)              chareneigh[1][0] = IDX(myloc[0],charegrid[1]-1,myloc[2]);
  else                            chareneigh[1][0] = IDX(myloc[0],myloc[1]-1,myloc[2]);
  if (myloc[1] == charegrid[1]-1) chareneigh[1][1] = IDX(myloc[0],0,myloc[2]);
  else                            chareneigh[1][1] = IDX(myloc[0],myloc[1]+1,myloc[2]);
  if (myloc[2] == 0)              chareneigh[2][0] = IDX(myloc[0],myloc[1],charegrid[2]-1);
  else                            chareneigh[2][0] = IDX(myloc[0],myloc[1],myloc[2]-1);
  if (myloc[2] == charegrid[2]-1) chareneigh[2][1] = IDX(myloc[0],myloc[1],0);
  else                            chareneigh[2][1] = IDX(myloc[0],myloc[1],myloc[2]+1);

  /*
  CkPrintf("Chare %d (%d, %d, %d), neighbors: %d, %d, %d, %d, %d, %d\n",
      index, myloc[0], myloc[1], myloc[2], chareneigh[0][0], chareneigh[0][1],
      chareneigh[1][0], chareneigh[1][1], chareneigh[2][0], chareneigh[2][1]);
      */

  /* lo/hi = my local box bounds */

  atom.box.xlo = myloc[0] * prd[0] / charegrid[0];
  atom.box.xhi = (myloc[0] + 1) * prd[0] / charegrid[0];
  atom.box.ylo = myloc[1] * prd[1] / charegrid[1];
  atom.box.yhi = (myloc[1] + 1) * prd[1] / charegrid[1];
  atom.box.zlo = myloc[2] * prd[2] / charegrid[2];
  atom.box.zhi = (myloc[2] + 1) * prd[2] / charegrid[2];

  /* need = # of boxes I need atoms from in each dimension */

  need[0] = static_cast<int>(cutneigh * charegrid[0] / prd[0] + 1);
  need[1] = static_cast<int>(cutneigh * charegrid[1] / prd[1] + 1);
  need[2] = static_cast<int>(cutneigh * charegrid[2] / prd[2] + 1);

  /* alloc comm memory */

  int maxswap = 2 * (need[0] + need[1] + need[2]);
  maxswap_static = maxswap;

  slablo = float_1d_host_view_type("Comm::slablo",maxswap);
  slabhi = float_1d_host_view_type("Comm::slabhi",maxswap);
  pbc_any = int_1d_host_view_type("Comm::pbc_any",maxswap);
  pbc_flagx = int_1d_host_view_type("Comm::pbc_flagx",maxswap);
  pbc_flagy = int_1d_host_view_type("Comm::pbc_flagy",maxswap);
  pbc_flagz = int_1d_host_view_type("Comm::pbc_flagz",maxswap);
  sendchare = int_1d_host_view_type("Comm::sendchare",maxswap);
  recvchare = int_1d_host_view_type("Comm::recvchare",maxswap);
  sendnum = int_1d_host_view_type("Comm::sendnum",maxswap);
  recvnum = int_1d_host_view_type("Comm::recvnum",maxswap);
  comm_send_size = int_1d_host_view_type("Comm::comm_send_size",maxswap);
  comm_recv_size = int_1d_host_view_type("Comm::comm_recv_size",maxswap);
  reverse_send_size = int_1d_host_view_type("Comm::reverse_send_size",maxswap);
  reverse_recv_size = int_1d_host_view_type("Comm::reverse_recv_size",maxswap);
  firstrecv = int_1d_host_view_type("Comm::firstrecv",maxswap);
  maxsendlist = int_1d_host_view_type("Comm::maxsendlist",maxswap);//why is this int?[ig we would need less than 8GB being sent from a chare at all times]
  maxrecvcomm = new int[maxswap];
  nrecvcomm = new int[maxswap];

  for(int i=0; i<3; i++) post_exchange_recv_count[i] = 0;
  for(int i=0; i<6; i++) nrecvexchange[i] = 0;


  // XXX: No equivalents to sendproc_exc and recvproc_exc as they were not used
  // in the original code

  for(i = 0; i < maxswap; i++) {
    maxsendlist[i] = BUFMIN;
    maxrecvcomm[i] = BUFMIN;
  }


  int* sendlist_ptr;
  cudaMalloc(&sendlist_ptr, maxswap*BUFMIN*sizeof(int));
  sendlist = int_2d_um_lr_view_type(sendlist_ptr,maxswap,BUFMIN);

  buf_comms_recv = new float_1d_um_view_type[maxswap];
  
  for (int i = 0; i < maxswap; i++) {
    MMD_float* device_ptr;
    cudaMalloc(&device_ptr, BUFMIN*sizeof(MMD_float));
    buf_comms_recv[i] = float_1d_um_view_type(device_ptr, BUFMIN);
  }

  /* setup 4 parameters for each exchange: (spart,rpart,slablo,slabhi)
     sendchare(nswap) = chare to send to at each swap
     recvchare(nswap) = chare to recv from at each swap
     slablo/slabhi(nswap) = slab boundaries (in correct dimension) of atoms
                            to send at each swap
     1st part of if statement is sending to the west/south/down
     2nd part of if statement is sending to the east/north/up
     nbox = atoms I send originated in this box */

  /* set commflag if atoms are being exchanged across a box boundary
     commflag(idim,nswap) =  0 -> not across a boundary
                          =  1 -> add box-length to position when sending
                          = -1 -> subtract box-length from pos when sending */

  nswap = 0;

  for(idim = 0; idim < 3; idim++) {
    for(ineed = 0; ineed < 2 * need[idim]; ineed++) {
      pbc_any[nswap] = 0;
      pbc_flagx[nswap] = 0;
      pbc_flagy[nswap] = 0;
      pbc_flagz[nswap] = 0;

      if(ineed % 2 == 0) {
        sendchare[nswap] = chareneigh[idim][0];
        recvchare[nswap] = chareneigh[idim][1];
        nbox = myloc[idim] + ineed / 2;
        lo = nbox * prd[idim] / charegrid[idim];

        if(idim == 0) hi = atom.box.xlo + cutneigh;

        if(idim == 1) hi = atom.box.ylo + cutneigh;

        if(idim == 2) hi = atom.box.zlo + cutneigh;

        hi = MIN(hi, (nbox + 1) * prd[idim] / charegrid[idim]);

        if(myloc[idim] == 0) {
          pbc_any[nswap] = 1;

          if(idim == 0) pbc_flagx[nswap] = 1;

          if(idim == 1) pbc_flagy[nswap] = 1;

          if(idim == 2) pbc_flagz[nswap] = 1;
        }
      } else {
        sendchare[nswap] = chareneigh[idim][1];
        recvchare[nswap] = chareneigh[idim][0];
        nbox = myloc[idim] - ineed / 2;
        hi = (nbox + 1) * prd[idim] / charegrid[idim];

        if(idim == 0) lo = atom.box.xhi - cutneigh;

        if(idim == 1) lo = atom.box.yhi - cutneigh;

        if(idim == 2) lo = atom.box.zhi - cutneigh;

        lo = MAX(lo, nbox * prd[idim] / charegrid[idim]);

        if(myloc[idim] == charegrid[idim] - 1) {
          pbc_any[nswap] = 1;

          if(idim == 0) pbc_flagx[nswap] = -1;

          if(idim == 1) pbc_flagy[nswap] = -1;

          if(idim == 2) pbc_flagz[nswap] = -1;
        }
      }

      slablo[nswap] = lo;
      slabhi[nswap] = hi;
      nswap++;
    }
  }


  return 0;
}

/* communication of atom info every timestep */

void Comm::communicate(Atom &atom, bool preprocess)
{
  int iswap;
  int pbc_flags[4];

  //push the pack unpack depencency
  wait(compute_instance, pack_instance);
  // Send and recv one buffer at a time
  for(iswap = 0; iswap < nswap; iswap++) {

    pbc_flags[0] = pbc_any[iswap];
    pbc_flags[1] = pbc_flagx[iswap];
    pbc_flags[2] = pbc_flagy[iswap];
    pbc_flags[3] = pbc_flagz[iswap];

    int_1d_view_type list = Kokkos::subview(sendlist,iswap,Kokkos::ALL());

    // Pack buffer
    if (sendchare[iswap] != index) {
      if(comm_send_size[iswap]>0)
        atom.pack_comm(sendnum[iswap], list, buf_send, pbc_flags);
      
      send1 = buf_send.data();
      send1_size = comm_send_size[iswap] * sizeof(MMD_float);
      // ckout<<"send1_size "<<send1_size<<endl;
      send1_chare = sendchare[iswap];
      
      suspend(pack_instance);
      block_proxy[thisIndex].comms_recv_ready_wait(iswap, CkCallbackResumeThread());

      if(comm_send_size[iswap]>0)
        block_proxy[thisIndex].comms_send(iswap, CkCallbackResumeThread());

      if(comm_recv_size[iswap]>0)
        block_proxy[thisIndex].comms_recv_wait(iswap, CkCallbackResumeThread());

      buf = buf_comms_recv[iswap];
      if(comm_recv_size[iswap]>0)
        atom.unpack_comm(recvnum[iswap], firstrecv[iswap], buf);
      wait(unpack_instance, pack_instance);//add dependency with pack instance
    } else {
      // No need to synchronize for self packing
      atom.pack_comm_self(sendnum[iswap], list, firstrecv[iswap], pbc_flags);
    }
  }
  wait(pack_instance, compute_instance);
}


/* reverse communication of atom info every timestep */

void Comm::reverse_communicate(Atom &atom, bool preprocess)
{
  /*
  std::ostringstream os;
  os << "Comm::reverse_communicate " << index;
  NVTXTracer(os.str(), NVTXColor::PeterRiver);
  */
  // Kokkos::Profiling::pushRegion("Comm::reverse_communicate");

  // Create host mirrors for integrate loop
  if (!preprocess && !h_buf_alloc) {
    h_buf_alloc = true;
    buf_comms_send = new float_1d_view_type[nswap];
    // buf_comms_recv = new float_1d_view_type[nswap];
    h_buf_comms_send = new float_1d_host_view_type[nswap];
    h_buf_comms_recv = new float_1d_host_view_type[nswap];
    for (int i = 0; i < nswap; i++) {
      buf_comms_send[i] = float_1d_view_type("Comm::buf_comms_send", maxsend + BUFEXTRA);
      buf_comms_recv[i] = float_1d_view_type("Comm::buf_comms_recv", maxrecv);
      h_buf_comms_send[i] = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_comms_send[i]);
      h_buf_comms_recv[i] = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_comms_recv[i]);
    }
  }

  int iswap;

  if (preprocess) {
    for(iswap = nswap - 1; iswap >= 0; iswap--) {

      int_1d_view_type list = Kokkos::subview(sendlist,iswap,Kokkos::ALL());

      // Pack buffer
      atom.pack_reverse(recvnum[iswap], firstrecv[iswap], buf_send);
      Kokkos::fence();

      // Exchange with another chare
      // If self, set recv buffer to send buffer
      if(sendchare[iswap] != index) {

        // Move data on device to host for communication
        h_buf_send = Kokkos::create_mirror_view(buf_send);
        h_buf_recv = Kokkos::create_mirror_view(buf_recv);
        Kokkos::deep_copy(h_buf_send, buf_send);

        // Send and suspend
        send1 = h_buf_send.data();
        send1_size = reverse_send_size[iswap] * sizeof(MMD_float);
        send1_chare = recvchare[iswap];
        recv1 = h_buf_recv.data();
        // block_proxy[thisIndex].comms(iswap, CkCallbackResumeThread());

        // Move received data to device
        Kokkos::deep_copy(h2d_instance, buf_recv, h_buf_recv);

        buf = buf_recv;
      } else buf = buf_send;

      // unpack buffer
      atom.unpack_reverse(sendnum[iswap], list, buf);
      Kokkos::fence();
    }
  } else {
#if !defined PACK_UNPACK_COMPUTE
    // Enforce compute -> pack dependency
    cudaEvent_t dep_event_1;
    hapiCheck(cudaEventCreateWithFlags(&dep_event_1, cudaEventDisableTiming));
    hapiCheck(cudaEventRecord(dep_event_1, compute_instance.cuda_stream()));
    hapiCheck(cudaStreamWaitEvent(pack_instance.cuda_stream(), dep_event_1, 0));
#endif

    // XXX: Don't need to iterate backwards?
    for (iswap = nswap-1; iswap >= 0; iswap--) {
      int_1d_view_type list = Kokkos::subview(sendlist,iswap,Kokkos::ALL());

      // Pack and move buffers to host
      atom.pack_reverse(recvnum[iswap], firstrecv[iswap], buf_comms_send[iswap]);
      if(buf_comms_send[iswap].size()<buf_send.size()){
          buf_comms_send[iswap] = float_1d_view_type("Comm::buf_comms_send", buf_send.size());
          h_buf_comms_send[iswap] = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_comms_send[iswap]);
        }
        if(buf_comms_recv[iswap].size()<buf_recv.size()){
          buf_comms_recv[iswap] = float_1d_view_type("Comm::buf_comms_send", buf_recv.size());
          h_buf_comms_recv[iswap] = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_comms_recv[iswap]);
      }

#ifdef PACK_UNPACK_COMPUTE
      // Enforce compute -> d2h dependency
      cudaEvent_t dep_event;
      hapiCheck(cudaEventCreateWithFlags(&dep_event, cudaEventDisableTiming));
      hapiCheck(cudaEventRecord(dep_event, compute_instance.cuda_stream()));
      hapiCheck(cudaStreamWaitEvent(d2h_instance.cuda_stream(), dep_event, 0));
#else
      // Enforce pack -> d2h dependency
      cudaEvent_t dep_event;
      hapiCheck(cudaEventCreateWithFlags(&dep_event, cudaEventDisableTiming));
      hapiCheck(cudaEventRecord(dep_event, pack_instance.cuda_stream()));
      hapiCheck(cudaStreamWaitEvent(d2h_instance.cuda_stream(), dep_event, 0));
#endif

      if (sendchare[iswap] != index) {
        Kokkos::deep_copy(d2h_instance, h_buf_comms_send[iswap], buf_comms_send[iswap]);
      }
    }

#ifdef CUDA_SYNC
    d2h_instance.fence();
#else
    suspend(d2h_instance);
#endif

    // Unpack self
    for (iswap = nswap-1; iswap >= 0; iswap--) {
      int_1d_view_type list = Kokkos::subview(sendlist,iswap,Kokkos::ALL());

      if (sendchare[iswap] == index) {
        atom.unpack_reverse(sendnum[iswap], list, buf_comms_send[iswap]);
      }
    }

    // All buffers copied to host, send to neighbors
    // After receiving, move buffers to device and unpack
    atom_p = &atom;
    block_proxy[thisIndex].comm_rev_all(CkCallbackResumeThread());

#if !defined PACK_UNPACK_COMPUTE
    // Enforce unpack -> compute dependency
    cudaEvent_t dep_event;
    hapiCheck(cudaEventCreateWithFlags(&dep_event, cudaEventDisableTiming));
    hapiCheck(cudaEventRecord(dep_event, unpack_instance.cuda_stream()));
    hapiCheck(cudaStreamWaitEvent(compute_instance.cuda_stream(), dep_event, 0));
#endif
  }

  // Kokkos::Profiling::popRegion();
}

/* exchange:
   move atoms to correct proc boxes
   send out atoms that have left my box, receive ones entering my box
   this routine called before every reneighboring
   atoms exchanged with all 6 stencil neighbors
*/

void Comm::exchange(Atom &atom_, bool preprocess)
{
  //NVTXTracer("Comm::exchange", NVTXColor::WetAsphalt);
  // Kokkos::Profiling::pushRegion("exchange");
  // ckout<<"comm::exchange"<<endl;
  atom = atom_;

  /* enforce PBC */

  wait(compute_instance, pack_instance);
  atom.pbc();//wrap around atoms going out of boundry

  for(idim = 0; idim < 3; idim++) {
    /* only exchange if more than one proc in this dimension */

    if(charegrid[idim] == 1) continue;

    /* fill buffer with atoms leaving my box
       when atom is deleted, fill it in with last atom */

    nsend = 0;

    if(idim == 0) {
      lo = atom.box.xlo;
      hi = atom.box.xhi;
    } else if(idim == 1) {
      lo = atom.box.ylo;
      hi = atom.box.yhi;
    } else {
      lo = atom.box.zlo;
      hi = atom.box.zhi;
    }

    x = atom.x;

    nlocal = atom.nlocal;

    if (exc_sendflag.extent(0)<nlocal) {
      resize_unmanaged_1d_views(exc_sendflag, nlocal, pack_instance.cuda_stream());
    }
  
    count_host(0) = exc_sendlist.extent(0);//force entry to the loop
    //count the atoms which are leaving, also keep track of position in the lists
    while (count_host(0) >= exc_sendlist.extent(0)) {
      count_host(0) = 0;
      Kokkos::deep_copy(pack_instance, count_device, count_host);

      Kokkos::parallel_for(Kokkos::RangePolicy<TagExchangeSendlist> (pack_instance, 0,nlocal), *this);

      Kokkos::deep_copy(pack_instance, count_host, count_device);
      
      suspend(pack_instance);

      // ckout<<"["<<thisIndex<<", "<<idim<<"] nsend"<<count_host(0)<<endl;
      
      if ((count_host(0)>=exc_sendlist.extent(0)) ||
          (count_host(0)>=exc_copylist.extent(0)) ) {
        
        resize_unmanaged_1d_views(exc_sendlist,(count_host(0)+1)*1.5, pack_instance.cuda_stream());
        resize_unmanaged_1d_views(exc_copylist,(count_host(0)+1)*1.5, pack_instance.cuda_stream());
        resize_unmanaged_1d_views(replacement_indices,(count_host(0)+1)*1.5, pack_instance.cuda_stream());
        count_host(0)=exc_sendlist.extent(0);//this is a failed operation as the sendlist could not have stored everything(segfault?) so redo
      }
      if (count_host(0)*7>=maxsend) {
        growsend(count_host(0)*7, pack_instance.cuda_stream());
      }
    }
    nsend_atoms = count_host(0);
    nlocal_new = nlocal - nsend_atoms;
    
    // Reset counters for the two kernels
    count_host(1) = 0;  // replacement index counter
    count_host(2) = 0;  // copylist assignment counter
    Kokkos::deep_copy(pack_instance, count_device, count_host);
    
    Kokkos::parallel_for(Kokkos::RangePolicy<TagExchangeFillReplacementList>(pack_instance, 0, nsend_atoms), *this);
    
    Kokkos::parallel_for(Kokkos::RangePolicy<TagExchangeFillCopyList>(pack_instance, 0, nsend_atoms), *this);

    Kokkos::parallel_for(Kokkos::RangePolicy<TagExchangePack>(pack_instance, 0,count_host(0)), *this);
    atom.nlocal -= count_host(0);

    nsend = count_host(0) * 7;
    nrecv = 0;
    send1 = static_cast<void*>(buf_send.data());
    send1_size = nsend * sizeof(MMD_float);
    send1_chare = chareneigh[idim][0];
    send2 = static_cast<void*>(buf_send.data());
    send2_size = nsend * sizeof(MMD_float);
    send2_chare = chareneigh[idim][1];
    // ckout<<"["<<thisIndex<<", "<<idim<<"] nsend"<<count_host(0)<<endl;
    /*
    MPI_Sendrecv(&nsend, 1, MPI_INT, chareneigh[idim][0], 0,
                 &nrecv1, 1, MPI_INT, chareneigh[idim][1], 0,
                 MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    nrecv = nrecv1;

    if(charegrid[idim] > 2) {
      MPI_Sendrecv(&nsend, 1, MPI_INT, chareneigh[idim][1], 0,
                   &nrecv2, 1, MPI_INT, chareneigh[idim][0], 0,
                   MPI_COMM_WORLD, MPI_STATUS_IGNORE);
      nrecv += nrecv2;
    }
    */

    suspend(pack_instance);
    block_proxy[thisIndex].exchange_recv_ready_wait(idim, CkCallbackResumeThread());
    // ckout<<"chare "<<thisIndex<<endl;
    // ckout<<"send1_size "<<send1_size<<"\n";
    // ckout<<"send2_size "<<send2_size<<"\n";
    // ckout<<"nrecv1 "<<nrecv1<<"\n";
    // ckout<<"nrecv2 "<<nrecv2<<endl;
    block_proxy[thisIndex].exchange_2_send_1(idim, CkCallbackResumeThread());

    if (charegrid[idim] > 2)
      block_proxy[thisIndex].exchange_2_send_2(idim, CkCallbackResumeThread());

    block_proxy[thisIndex].exchange_2_recv_1_wait(idim, CkCallbackResumeThread());

    if(charegrid[idim] > 2)
      block_proxy[thisIndex].exchange_2_recv_2_wait(idim, CkCallbackResumeThread());

    

    /*
    MPI_Datatype type = (sizeof(MMD_float) == 4) ? MPI_FLOAT : MPI_DOUBLE;
    MPI_Sendrecv(buf_send.data(), nsend, type, chareneigh[idim][0], 0,
                 buf_recv.data(), nrecv1, type, chareneigh[idim][1], 0,
                 MPI_COMM_WORLD, MPI_STATUS_IGNORE);

    if(charegrid[idim] > 2) {
      MPI_Sendrecv(buf_send.data(), nsend, type, chareneigh[idim][1], 0,
                   buf_recv.data()+nrecv1, nrecv2, type, chareneigh[idim][0], 0,
                   MPI_COMM_WORLD, MPI_STATUS_IGNORE);
    }
    */
    nrecv = nrecvexchange[2*idim] + nrecvexchange[2*idim+1];
    cur_buf_recv = buf_comms_recv[idim];

    nrecv_atoms = nrecv / 7;

    /* check incoming atoms to see if they are in my box
       if they are, add to my list, otherwise lost which is fine */

    nrecv = 0;

    Kokkos::parallel_reduce(Kokkos::RangePolicy<TagExchangeCountRecv>(pack_instance, 0,nrecv_atoms), *this, nrecv);

    nlocal = atom.nlocal;

    if(nrecv_atoms>0)
      atom.nlocal += nrecv;

    count_host(0) = nlocal;
    Kokkos::deep_copy(pack_instance, count_device, nlocal);

    if(atom.nlocal>=atom.nmax)
      atom.growarray();

    Kokkos::parallel_for(Kokkos::RangePolicy<TagExchangeUnpack>(pack_instance, 0,nrecv_atoms), *this);
    //wait for send to finish to begin next iteration
    block_proxy[thisIndex].send_done_wait(idim, CkCallbackResumeThread());
  }
  wait(pack_instance, compute_instance);
  atom_ = atom;
}

KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangeSendlist, const int& i) const {
  if (x(i,idim) < lo || x(i,idim) >= hi) {
    const int mysend=Kokkos::atomic_fetch_add(&count_device(0),1);//it's like a ticket and turn lock of sorts
    if(mysend<exc_sendlist.extent(0)) {
      exc_sendlist(mysend) = i;
      exc_sendflag(i) = 1;
    }
  } else
    exc_sendflag(i) = 0;
}
KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangePack, const int& i ) const {
  atom.pack_exchange(exc_sendlist(i),&buf_send[7*i]);

  if(exc_copylist(i) > 0)
    atom.copy(exc_copylist(i),exc_sendlist(i));
}
KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangeCountRecv, const int& i, int& sum) const {
  const MMD_float value = cur_buf_recv[i * 7 + idim];
  if(value >= lo && value < hi)
    sum++;
}
KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangeUnpack, const int& i ) const {
  double value = cur_buf_recv[i * 7 + idim];

  if(value >= lo && value < hi)
    atom.unpack_exchange(Kokkos::atomic_fetch_add(&count_device(0),1), &cur_buf_recv[i * 7]);
}

/* borders:
   make lists of nearby atoms to send to neighboring procs at every timestep
   one list is created for every swap that will be made
   as list is made, actually do swaps
   this does equivalent of a communicate (so don't need to explicitly
     call communicate routine on reneighboring timestep)
   this routine is called before every reneighboring
*/
//notes:
//the ghosts are stored in the same lists as the local atoms(weird)
//this is ordered in dimension so that things travelling along diagonals can do so
//also reuse the send and recv buffers for all swaps growing them whenever needed so the same 

void Comm::borders(Atom &atom_, bool preprocess)
{
  //NVTXTracer("Comm::borders", NVTXColor::Carrot);
  // Kokkos::Profiling::pushRegion("Comm::borders");

  // Create host mirrors for integrate loop
  // if (!preprocess && !h_buf_alloc) {
    // h_buf_alloc = true;
    // h_buf_send = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_send);
    // h_buf_recv = Kokkos::create_mirror_view(Kokkos::CudaHostPinnedSpace(), buf_recv);
  // }

  atom = atom_;
  int ineed, nsend, nrecv, nfirst, nlast;

  /* erase all ghost atoms */

  atom.nghost = 0;

  /* do swaps over all 3 dimensions */

  iswap = 0;

  // if(thisIndex==0)
  // {
  //   printf("ckpt1.1\n");
  //   fflush(stdout);
  // }

  if(atom.nlocal > maxnlocal) {
    send_flag = int_1d_view_type("Comm::sendflag",atom.nlocal);
    maxnlocal = atom.nlocal;
  }

  wait(compute_instance, pack_instance);

  int count_recv = 0;
  for(int iswap_=0;iswap_<maxswap_static;iswap_++){
    if(recvchare[iswap_]!=index){
      count_recv++;
      block_proxy[thisIndex].borders_notify_recv_ready(iswap_, CkCallbackResumeThread());
    }
  }

  // if(thisIndex==0)
  // {
  //   printf("ckpt1.2 and count_recv %d\n", count_recv);
  //   fflush(stdout);
  // }

  for(idim = 0; idim < 3; idim++) {
    nlast = 0;

    for(ineed = 0; ineed < 2 * need[idim]; ineed++) {

      // find atoms within slab boundaries lo/hi using <= and >=
      // check atoms between nfirst and nlast
      //   for first swaps in a dim, check owned and ghost
      //   for later swaps in a dim, only check newly arrived ghosts
      // store sent atom indices in list for use in future timesteps

      lo = slablo[iswap];
      hi = slabhi[iswap];
      pbc_flags[0] = pbc_any[iswap];
      pbc_flags[1] = pbc_flagx[iswap];
      pbc_flags[2] = pbc_flagy[iswap];
      pbc_flags[3] = pbc_flagz[iswap];

      x = atom.x;

      if(ineed % 2 == 0) {
        nfirst = nlast;
        nlast = atom.nlocal + atom.nghost;
      }

      nsend = 0;

      count_host(0) = 0;
      Kokkos::deep_copy(pack_instance, count_device, 0);

      Kokkos::parallel_for(Kokkos::RangePolicy<TagBorderSendlist>(pack_instance, nfirst,nlast),*this);

      Kokkos::deep_copy(pack_instance, count_host, count_device);

      suspend(pack_instance);

      nsend = count_host(0);
      if(nsend > exc_sendlist.extent(0)) {        
        resize_unmanaged_1d_views(exc_sendlist , nsend, pack_instance.cuda_stream());

        growlist(iswap, nsend, pack_instance.cuda_stream());

        Kokkos::deep_copy(pack_instance, count_device, 0);

        Kokkos::parallel_for(Kokkos::RangePolicy<TagBorderSendlist>(pack_instance, nfirst,nlast),*this);

        Kokkos::deep_copy(pack_instance, count_host, count_device);
      }

      if(nsend * 4 > maxsend) {
        
        growsend(nsend * 4, pack_instance.cuda_stream());
      }

      Kokkos::parallel_for(Kokkos::RangePolicy<TagBorderPack>(pack_instance, 0,nsend),*this);
      // swap atoms with other proc
      // put incoming ghosts at end of my atom arrays
      // if swapping with self, simply copy, no messages


        if(sendchare[iswap] != index) {
          suspend(pack_instance);
          send1 = static_cast<void*>(buf_send.data());
          send1_size = nsend * atom.border_size * sizeof(MMD_float);
          send1_chare = sendchare[iswap];
          // if(thisIndex==0)
          // {
          //   printf("ckpt1.3.1.%d\n", sendchare[iswap]);
          //   fflush(stdout);
          // }
          block_proxy[thisIndex].borders_recv_ready_wait(iswap, CkCallbackResumeThread());
          // if(thisIndex==0)
          // {
          //   printf("ckpt1.3.2.%d\n", sendchare[iswap]);
          //   fflush(stdout);
          // }
          
          // if(thisIndex==0)
          // {
          //   printf("ckpt1.3.3.%d\n", sendchare[iswap]);
          //   fflush(stdout);
          // }
          block_proxy[thisIndex].borders_2(iswap, CkCallbackResumeThread());

          // if(thisIndex==0)
          // {
          //   printf("ckpt1.3.4.%d\n", sendchare[iswap]);
          //   fflush(stdout);
          // }
          
          nrecv = this->nrecvcomm[iswap];
          buf = buf_comms_recv[iswap];
        } else {
          nrecv = nsend;
          buf = buf_send;
        }

      // unpack buffer

      n = atom.nlocal + atom.nghost;

      while(n + nrecv > atom.nmax) atom.growarray();

      x = atom.x;
      
      Kokkos::parallel_for(Kokkos::RangePolicy<TagBorderUnpack>(pack_instance, 0,nrecv),*this);
      // set all pointers & counters
        sendnum[iswap] = nsend;
        recvnum[iswap] = nrecv;
        comm_send_size[iswap] = nsend * atom.comm_size;
        comm_recv_size[iswap] = nrecv * atom.comm_size;
        reverse_send_size[iswap] = nrecv * atom.reverse_size;
        reverse_recv_size[iswap] = nsend * atom.reverse_size;
        firstrecv[iswap] = atom.nlocal + atom.nghost;
        atom.nghost += nrecv;

        iswap++;        
    }
  }

  wait(pack_instance, compute_instance);
  /* insure buffers are large enough for reverse comm */

  int max1, max2;
  max1 = max2 = 0;

  for(iswap = 0; iswap < nswap; iswap++) {
    max1 = MAX(max1, reverse_send_size[iswap]);
    max2 = MAX(max2, reverse_recv_size[iswap]);
  }

  if(max1 > maxsend) {
    
    growsend(max1, compute_instance.cuda_stream());
  }

  if(max2 > maxrecv) {
    
    growrecv(max2, compute_instance.cuda_stream());
  }
  atom_ = atom;

}

KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangeFillReplacementList, const int& i) const {
  // Iterate over the "dead zone" [nlocal_new, nlocal_new + nsend_atoms)
  // We scan from the end backwards to match original sendpos-- logic
  int tail_idx = nlocal_new + (nsend_atoms - 1 - i);  // reverse order
  
  // If this atom is NOT being sent, it's a valid replacement
  if (exc_sendflag(tail_idx) == 0) {
    int slot = Kokkos::atomic_fetch_add(&count_device(1), 1);
    if (slot < replacement_indices.extent(0)) {
      replacement_indices(slot) = tail_idx;
    }
  }
}

KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagExchangeFillCopyList, const int& i) const {
  int send_idx = exc_sendlist(i);
  
  if (send_idx < nlocal_new) {
    // This is a "hole" - need to fill it with a replacement atom
    int slot = Kokkos::atomic_fetch_add(&count_device(2), 1);
    if (slot < replacement_indices.extent(0)) {
      exc_copylist(i) = replacement_indices(slot);
    } else {
      exc_copylist(i) = -1;  // Shouldn't happen if logic is correct
    }
  } else {
    // Atom is in the dead zone, no copy needed
    exc_copylist(i) = -1;
  }
}
KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagBorderSendlist, const int& i) const {
  if(x(i,idim) >= lo && x(i,idim) <= hi) {
    const int nsend = Kokkos::atomic_fetch_add(&count_device(0), 1);
    if(nsend < exc_sendlist.extent(0)) {
      exc_sendlist[nsend] = i;
    }
  }
}

KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagBorderPack, const int& k) const {
  atom.pack_border(exc_sendlist(k), &buf_send[k * 4], pbc_flags);
  sendlist(iswap,k) = exc_sendlist(k);
}

KOKKOS_INLINE_FUNCTION
void Comm::operator() (TagBorderUnpack, const int& i) const {
  atom.unpack_border(n + i, &buf[i * 4]);
}

/* realloc the size of the send buffer as needed with BUFFACTOR & BUFEXTRA */

void Comm::growsend(int n, cudaStream_t stream)
{
  resize_unmanaged_1d_views(buf_send,static_cast<int>(BUFFACTOR * n) + BUFEXTRA, stream);
  maxsend = static_cast<int>(BUFFACTOR * n);
}

/* free/malloc the size of the recv buffer as needed with BUFFACTOR */

void Comm::growrecv(int n, cudaStream_t stream)
{
  maxrecv = static_cast<int>(BUFFACTOR * n) + BUFEXTRA;
  resize_unmanaged_1d_views(buf_recv, maxrecv, stream);
}

void Comm::growrecvcomm(int iswap, int n, cudaStream_t stream){
  maxrecvcomm[iswap] = static_cast<int>(BUFFACTOR * n) + BUFEXTRA;
  MMD_float* buf_old = buf_comms_recv[iswap].data();
  MMD_float* buf_new;
  hapiCheck(cudaMalloc((void**)&buf_new, maxrecvcomm[iswap]*sizeof(MMD_float)));
  hapiCheck(cudaMemcpy((void*)buf_new, (void*)buf_old, buf_comms_recv[iswap].size()*sizeof(MMD_float),cudaMemcpyDeviceToDevice));
  hapiCheck(cudaFree((void*)buf_old));
  buf_comms_recv[iswap] = Kokkos::View<MMD_float*, Kokkos::CudaSpace, Kokkos::MemoryTraits<Kokkos::Unmanaged>>(buf_new, maxrecvcomm[iswap]);
}

/* realloc the size of the iswap sendlist as needed with BUFFACTOR */

void Comm::growlist(int iswap, int n, cudaStream_t stream)
{
  if(n<=maxsendlist[iswap]) return;
  int maxswap = sendlist.extent(0);
  resize_unmanaged_2d_views(sendlist,sendlist.extent(0),BUFFACTOR * n + BUFEXTRA, stream);
  for(int iswaps = 0; iswaps < maxswap; iswaps++) {
    maxsendlist[iswaps] = static_cast<int>(BUFFACTOR * n);
  }
}

void Comm::suspend(Kokkos::Cuda instance) {
  resume_cb = new CkCallbackResumeThread();
  hapiAddCallback(instance.cuda_stream(), resume_cb);
  delete resume_cb;
}

//insert a instance1->instance2 event in streams
void Comm::wait(Kokkos::Cuda instance1, Kokkos::Cuda instance2){
    cudaEvent_t dep_event_1;
    hapiCheck(cudaEventCreateWithFlags(&dep_event_1, cudaEventDisableTiming));
    hapiCheck(cudaEventRecord(dep_event_1, instance1.cuda_stream()));
    hapiCheck(cudaStreamWaitEvent(instance2.cuda_stream(), dep_event_1, 0));
}
