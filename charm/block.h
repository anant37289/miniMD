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

CkpvExtern(int, _lb_obj_index);

// Virtualization of a process in the MPI version
class Block : public CBase_Block {
  Block_SDAG_CODE

public:
  // KokkosManager* kokkos_manager;
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
  double lb_start_time = 0;

  Kokkos::Cuda compute_instance;
  Kokkos::Cuda h2d_instance;
  Kokkos::Cuda d2h_instance;
  Kokkos::Cuda pack_instance;
  Kokkos::Cuda unpack_instance;

  cudaStream_t compute_stream;
  cudaStream_t h2d_stream;
  cudaStream_t d2h_stream;
  cudaStream_t pack_stream;
  cudaStream_t unpack_stream;

  // For thermo communication
  int i;

  // For comms_all
  int my_iswap;
  int my_nswap;
  bool shouldDoLB = true;

  int iter;
  int next_sort;

  double vtot[3];

public:
  Block();

  void pup(PUP::er& p){
    p| atom;
    p| neighbor;
    p| integrate;
    p| thermo;
    p| force;
    p| reductionCount;
    p| reductionSum;
    p| total_time;
    p| start_time;
    p| iter_start_time;
    p| comm_time;
    p| force_time;
    p| neigh_time;
    p| i;
    p| my_iswap;
    p| my_nswap;
    p| iter;
    p| next_sort;
    p| shouldDoLB;
    p| vtot[0];
    p| vtot[1];
    p| vtot[2];
  }

  Block(CkMigrateMessage* msg);
  void ResumeFromSync();
  void iterate();
  void preIterate();
  void postIterate();

  // Returns the total size (bytes) of GPU buffers that will be allocated on the
  // destination PE after migration (atom + neighbor + comm + force).
  size_t getAllocSize() const {
    return atom.getAllocSize() +
           neighbor.getAllocSize() +
           comm->getAllocSize() +
           force->getAllocSize();
  }

  ~Block(){
    //may want to delete instances[?]
    // ckout<<"called ~Block"<<endl;
    compute_instance = Kokkos::Cuda();
    h2d_instance = Kokkos::Cuda();
    d2h_instance = Kokkos::Cuda();
    pack_instance = Kokkos::Cuda();
    unpack_instance = Kokkos::Cuda();
    
    cudaStreamDestroy(compute_stream);
    cudaStreamDestroy(h2d_stream);
    cudaStreamDestroy(d2h_stream);
    cudaStreamDestroy(pack_stream);
    cudaStreamDestroy(unpack_stream);

    delete force;

  }


  void saveBoundArray();
  void init();
  void contCreateVelocity(double vxtot, double vytot, double vztot);
  void run_neighbour_build(CkCallback cb);
  void printConfig();
  void suspend(Kokkos::Cuda instance){
    hapiAddCallback(instance.cuda_stream(), CkCallbackResumeThread());
  }
  void comms_recv(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
      // ckout<<"comms_recv recv_size "<<size<<endl;
      int iswap = ref%comm->maxswap_static;

      postInfo[0].hapi_stream = unpack_instance.cuda_stream();
      data = (char*)((comm->buf_comms_recv[iswap]).data());
  }

  void borders_recv_2(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
    // ckout<<"borders_recv_2 recv_size "<<size<<endl;
    int iswap = ref%comm->maxswap_static;
    comm->nrecvcomm[iswap] = size / (sizeof(MMD_float)*atom.border_size);
    if (size / sizeof(MMD_float) > comm->maxrecvcomm[iswap]) {
      comm->growrecvcomm(iswap, size / sizeof(MMD_float), pack_instance.cuda_stream());
    }
    postInfo[0].hapi_stream = pack_instance.cuda_stream();
    data = (char*)((comm->buf_comms_recv[iswap]).data());
  }

  void exchange_2_recv_1(int ref, size_t size, bool is_dummy, char*& data, CkDeviceBufferPost* postInfo){
    // ckout<<"exchange_2_recv_1 recv size "<<size<<endl;
  int recv_idim = ref % 3;
  if(is_dummy) {
    comm->nrecvexchange[2*recv_idim] = 0;
    postInfo[0].hapi_stream = pack_instance.cuda_stream();
    data = (char*)(comm->buf_comm_dummy);
    return;
  }
  size_t start_idx = comm->post_exchange_recv_count[recv_idim];
  comm->nrecvexchange[2*recv_idim] = size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecvcomm[recv_idim] - comm->post_exchange_recv_count[recv_idim])){
    comm->growrecvcomm(recv_idim, size / sizeof(MMD_float) + comm->post_exchange_recv_count[recv_idim], pack_instance.cuda_stream());
  }
  postInfo[0].hapi_stream = pack_instance.cuda_stream();
  data = (char*)(comm->buf_comms_recv[recv_idim].data()+comm->post_exchange_recv_count[recv_idim]);
  comm->post_exchange_recv_count[recv_idim] += size/sizeof(MMD_float);
}

void exchange_2_recv_2(int ref, size_t size, bool is_dummy, char*& data, CkDeviceBufferPost* postInfo){
  // ckout<<"exchange_2_recv_2 recv size "<<size<<endl;
  int recv_idim = ref % 3;
  if(is_dummy) {
    comm->nrecvexchange[2*recv_idim+1] = 0;
    postInfo[0].hapi_stream = pack_instance.cuda_stream();
    data = (char*)(comm->buf_comm_dummy);
    return;
  }
  size_t start_idx = comm->post_exchange_recv_count[recv_idim];
  comm->nrecvexchange[2*recv_idim+1] = size/sizeof(MMD_float);
  if(size / sizeof(MMD_float) > (comm->maxrecvcomm[recv_idim] - comm->post_exchange_recv_count[recv_idim])){
    comm->growrecvcomm(recv_idim, size / sizeof(MMD_float) + comm->post_exchange_recv_count[recv_idim], pack_instance.cuda_stream());
  }
  postInfo[0].hapi_stream = pack_instance.cuda_stream();
  data = (char*)(comm->buf_comms_recv[recv_idim].data()+comm->post_exchange_recv_count[recv_idim]);
  comm->post_exchange_recv_count[recv_idim] += size/sizeof(MMD_float);
}
};

#endif // BLOCK_H_
