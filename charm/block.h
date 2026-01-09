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
      postInfo[0].hapi_stream = compute_instance.cuda_stream();
      int iswap = ref % comm->nswap;
      data = (char*)(comm->buf_comms_recv[iswap].data());
  }

void borders_recv_2(int ref, size_t size, char*& data, CkDeviceBufferPost* postInfo){
    int recv_iswap = ref % comm->maxswap_static;
    //In case it comes before resizing -- makes me think just do it here
    if (size / sizeof(MMD_float) > comm->maxrecvcomm[recv_iswap]) {
      comm->growcommrecv(recv_iswap, size / sizeof(MMD_float));
    }
    Kokkos::fence();
    postInfo[0].hapi_stream = compute_instance.cuda_stream();
    data = (char*)(comm->buf_comms_recv[recv_iswap].data());
  }

  ~Block() {}
};

#endif // BLOCK_H_
