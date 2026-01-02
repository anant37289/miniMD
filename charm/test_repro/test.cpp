#include <Kokkos_Core.hpp>
#include <cuda_runtime.h>
#include "test.decl.h"
#include "../atom.h"
#include "../neighbor.h"

/* readonly */ CProxy_Main mainProxy;

// // Dummy implementation of hapiAddCallback
// void CUDART_CB myCallback(cudaStream_t stream, cudaError_t status, void *userData) {
//     CkCallback* cb = (CkCallback*)userData;
//     cb->send();
//     delete cb;
// }
//
// extern "C" void hapiAddCallback(cudaStream_t stream, CkCallback* cb) {
//     CkCallback* cb_copy = new CkCallback(*cb);
//     cudaStreamAddCallback(stream, myCallback, cb_copy, 0);
// }

class Main : public CBase_Main {
public:
  Main(CkArgMsg* m) {
    mainProxy = thisProxy;
    
    // Initialize Kokkos
    Kokkos::InitializationSettings args;
    args.set_device_id(0);
    Kokkos::initialize(args);

    int num_chares = 1;
    if (m->argc > 1) num_chares = atoi(m->argv[1]);
    delete m;

    CkPrintf("Main: Running with %d chares\n", num_chares);

    CProxy_TestChare array = CProxy_TestChare::ckNew(num_chares);
    array.run();
  }
};

class TestChare : public CBase_TestChare {
public:
  Atom atom;
  Neighbor neighbor;
  cudaStream_t stream;

  TestChare() : atom(1), neighbor(1) { // 1 type
      // Create stream
      cudaStreamCreateWithPriority(&stream, cudaStreamDefault, 0);
      
      // Setup Kokkos instances
      auto instance = Kokkos::Cuda(stream);
      
      atom.compute_instance = instance;
      atom.h2d_instance = instance;
      atom.d2h_instance = instance;
      atom.pack_instance = instance;
      atom.unpack_instance = instance;

      neighbor.compute_instance = instance;
      neighbor.h2d_instance = instance;
      neighbor.d2h_instance = instance;
      neighbor.pack_instance = instance;
      neighbor.unpack_instance = instance;
      
      // Setup Box
      atom.box.xprd = 10.0;
      atom.box.yprd = 10.0;
      atom.box.zprd = 10.0;
      atom.box.xlo = 0.0;
      atom.box.xhi = 10.0;
      atom.box.ylo = 0.0;
      atom.box.yhi = 10.0;
      atom.box.zlo = 0.0;
      atom.box.zhi = 10.0;
      
      // Setup Neighbor
      neighbor.cutneigh = 2.5;
      neighbor.nbinx = 4;
      neighbor.nbiny = 4;
      neighbor.nbinz = 4;
      
      // Setup Atom
      atom.natoms = 100;
      atom.nlocal = 100;
      atom.nghost = 0;
      atom.nmax = 200;
      
      // Allocate views
      atom.x = x_view_type("atom.x", atom.nmax);
      atom.type = int_1d_view_type("atom.type", atom.nmax);
      
      // Initialize atoms
      auto h_x = Kokkos::create_mirror_view(atom.x);
      auto h_type = Kokkos::create_mirror_view(atom.type);
      
      for(int i=0; i<atom.nlocal; i++) {
          h_x(i,0) = (i % 10) * 1.0;
          h_x(i,1) = ((i / 10) % 10) * 1.0;
          h_x(i,2) = (i / 100) * 1.0;
          h_type(i) = 0;
      }
      Kokkos::deep_copy(atom.x, h_x);
      Kokkos::deep_copy(atom.type, h_type);
      
      neighbor.setup(atom);
  }

  void run() {
    CkPrintf("TestChare[%d]: Starting neighbor build\n", thisIndex);
    
    // Mimic comm->borders kernel launch
    Kokkos::parallel_for("dummy_borders", Kokkos::RangePolicy<Kokkos::Cuda>(atom.compute_instance, 0, 100), KOKKOS_LAMBDA(int i) {
        double x = i * 1.0;
    });
    
    neighbor.build(atom);
    
    // Mimic force->compute kernel launch
    Kokkos::parallel_for("dummy_force", Kokkos::RangePolicy<Kokkos::Cuda>(atom.compute_instance, 0, 100), KOKKOS_LAMBDA(int i) {
        double x = i * 2.0;
    });

    CkPrintf("TestChare[%d]: Neighbor build finished\n", thisIndex);
    
    // Verify results
    int total_neighs = 0;
    // Need to copy numneigh back to host to check
    auto h_numneigh = Kokkos::create_mirror_view(neighbor.numneigh);
    Kokkos::deep_copy(h_numneigh, neighbor.numneigh);
    
    for(int i=0; i<atom.nlocal; i++) {
        total_neighs += h_numneigh(i);
    }
    CkPrintf("TestChare[%d]: Total neighbors found: %d\n", thisIndex, total_neighs);

    CkExit();
  }

  void run_neighbor_build(CkCallback cb){
    CkPrintf("TestChare[%d]: Inside run_neighbor_build\n", thisIndex);
    neighbor.build(atom);
    CkPrintf("TestChare[%d]: neighbor.build returned\n", thisIndex);
    cb.send();
  }
  
  void func(CkCallback cb) {
      cb.send();
  }
};

#include "test.def.h"
