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
  double start_time=0;
  double iter_start_time;
  double comm_time=0;
  double force_time=0;
  double neigh_time=0;

  Kokkos::DefaultExecutionSpace compute_instance;
  Kokkos::DefaultExecutionSpace h2d_instance;
  Kokkos::DefaultExecutionSpace d2h_instance;
  Kokkos::DefaultExecutionSpace pack_instance;
  Kokkos::DefaultExecutionSpace unpack_instance;

  hapiStream_t compute_stream;
  hapiStream_t h2d_stream;
  hapiStream_t d2h_stream;
  hapiStream_t pack_stream;
  hapiStream_t unpack_stream;

  // For thermo communication
  int i;

  // For comms_all
  int my_iswap;
  int my_nswap;

  double vtot[3];

public:
  Block();

  ~Block(){
    //may want to delete instances[?]
    hapiStreamDestroy(compute_stream);
    hapiStreamDestroy(h2d_stream);
    hapiStreamDestroy(d2h_stream);
    hapiStreamDestroy(pack_stream);
    hapiStreamDestroy(unpack_stream);

    delete force;
  }


  void saveBoundArray();
  void init();
  void contCreateVelocity(double vxtot, double vytot, double vztot);
  void run_neighbour_build(CkCallback cb);
  void run();
  void printConfig();
  void suspend(Kokkos::DefaultExecutionSpace instance){
    hapiAddCallback(kokkos_instance_stream(instance), CkCallbackResumeThread());
  }
  void comms_recv(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
      // ckout<<"comms_recv recv_size "<<size<<endl;
      int iswap = ref%comm->maxswap_static;

      postInfo[0].hapi_stream = kokkos_instance_stream(unpack_instance);
      data = (char*)((comm->buf_comms_recv[iswap]).data());
  }

  void borders_recv_2(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
    // ckout<<"borders_recv_2 recv_size "<<size<<endl;
    int iswap = ref%comm->maxswap_static;
    comm->nrecvcomm[iswap] = size / (sizeof(MMD_float)*atom.border_size);
    if (size / sizeof(MMD_float) > comm->maxrecvcomm[iswap]) {
      comm->growrecvcomm(iswap, size / sizeof(MMD_float), kokkos_instance_stream(pack_instance));
    }
    postInfo[0].hapi_stream = kokkos_instance_stream(pack_instance);
    data = (char*)((comm->buf_comms_recv[iswap]).data());
  }

  void exchange_2_recv_1(int ref, size_t size, bool is_dummy, char*& data, CkDeviceBufferPost* postInfo){
    // ckout<<"exchange_2_recv_1 recv size "<<size<<endl;
  int recv_idim = ref % 3;
  if(is_dummy) {
    comm->nrecvexchange[2*recv_idim] = 0;
    postInfo[0].hapi_stream = kokkos_instance_stream(pack_instance);
    data = (char*)(comm->buf_comm_dummy);
    return;
  }
  size_t start_idx = comm->post_exchange_recv_count[recv_idim];
  comm->nrecvexchange[2*recv_idim] = size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecvcomm[recv_idim] - comm->post_exchange_recv_count[recv_idim])){
    comm->growrecvcomm(recv_idim, size / sizeof(MMD_float) + comm->post_exchange_recv_count[recv_idim], kokkos_instance_stream(pack_instance));
  }
  postInfo[0].hapi_stream = kokkos_instance_stream(pack_instance);
  data = (char*)(comm->buf_comms_recv[recv_idim].data()+comm->post_exchange_recv_count[recv_idim]);
  comm->post_exchange_recv_count[recv_idim] += size/sizeof(MMD_float);
}

void exchange_2_recv_2(int ref, size_t size, bool is_dummy, char*& data, CkDeviceBufferPost* postInfo){
  // ckout<<"exchange_2_recv_2 recv size "<<size<<endl;
  int recv_idim = ref % 3;
  if(is_dummy) {
    comm->nrecvexchange[2*recv_idim+1] = 0;
    postInfo[0].hapi_stream = kokkos_instance_stream(pack_instance);
    data = (char*)(comm->buf_comm_dummy);
    return;
  }
  size_t start_idx = comm->post_exchange_recv_count[recv_idim];
  comm->nrecvexchange[2*recv_idim+1] = size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecvcomm[recv_idim] - comm->post_exchange_recv_count[recv_idim])){
    comm->growrecvcomm(recv_idim, size / sizeof(MMD_float) + comm->post_exchange_recv_count[recv_idim], kokkos_instance_stream(pack_instance));
  }
  postInfo[0].hapi_stream = kokkos_instance_stream(pack_instance);
  data = (char*)(comm->buf_comms_recv[recv_idim].data()+comm->post_exchange_recv_count[recv_idim]);
  comm->post_exchange_recv_count[recv_idim] += size/sizeof(MMD_float);
}
};

#endif // BLOCK_H_
