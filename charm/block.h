#ifndef BLOCK_H_
#define BLOCK_H_

//#include "block.decl.h"
#include "hapi.h"

#include "ljs_kokkos.h"
#include "atom.h"
#include "neighbor.h"
#include "integrate.h"
#include "thermo.h"
#include "comm.h"
#include "force.h"

// Virtualization of a process in the MPI version
class Block : public CBase_Block {
  Block_SDAG_CODE

public:
  KokkosManager* kokkos_manager;
  Atom atom;
  Neighbor neighbor;
  Integrate integrate;
  Thermo thermo;
  Comm* comm;
  Force* force;
  int reductionCount=0;
  MMD_float reductionSum=0;
  double total_time=0;

  Kokkos::Cuda compute_instance;
  Kokkos::Cuda h2d_instance;
  Kokkos::Cuda d2h_instance;
  Kokkos::Cuda pack_instance;
  Kokkos::Cuda unpack_instance;

  // For thermo communication
  int i;

  // For comms_all
  int my_iswap;
  int my_nswap;

  double vtot[3];

public:
  Block();

  void saveBoundArray();
  void init();
  void contCreateVelocity(double vxtot, double vytot, double vztot);
  void run_neighbour_build(CkCallback cb);
  void run();
  void printConfig();
  void comms_recv(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
      postInfo[0].hapi_stream = pack_instance.cuda_stream();
      data = (char*)(comm->buf_recv.data());
  }

  void borders_recv_2(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
    comm->nrecv = size / (sizeof(MMD_float)*atom.border_size);
    if (size / sizeof(MMD_float) > comm->maxrecv) {
      comm->growrecv( size / sizeof(MMD_float));
      Kokkos::fence();
    }
    postInfo[0].hapi_stream = pack_instance.cuda_stream();
    data = (char*)(comm->buf_recv.data());
  }

  void exchange_2_recv_1(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
  int recv_idim = ref % 3;
  size_t start_idx = comm->post_exchange_recv_count;
  comm->nrecv1 = size/sizeof(MMD_float);
  comm->nrecv+=size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecv - comm->post_exchange_recv_count)){
    comm->growrecv(size / sizeof(MMD_float) + comm->post_exchange_recv_count);
    Kokkos::fence();
  }
  postInfo[0].hapi_stream = pack_instance.cuda_stream();
  data = (char*)(comm->buf_recv.data()+comm->post_exchange_recv_count);
  comm->post_exchange_recv_count += size/sizeof(MMD_float);
}

void exchange_2_recv_2(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
  int recv_idim = ref % 3;
  size_t start_idx = comm->post_exchange_recv_count;
  comm->nrecv2 = size/sizeof(MMD_float);
  comm->nrecv+=size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecv - comm->post_exchange_recv_count)){
    comm->growrecv(size / sizeof(MMD_float) + comm->post_exchange_recv_count);
    Kokkos::fence();
  }
  postInfo[0].hapi_stream = pack_instance.cuda_stream();
  data = (char*)(comm->buf_recv.data()+comm->post_exchange_recv_count);
  comm->post_exchange_recv_count += size/sizeof(MMD_float);
}


  ~Block() {}
};

#endif // BLOCK_H_
