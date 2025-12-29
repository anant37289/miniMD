#include <Kokkos_Core.hpp>
#include "test.decl.h"

/* readonly */ CProxy_Main mainProxy;

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

//   void done() {
//     CkPrintf("Main: All done, exiting\n");
//     Kokkos::finalize();
//     CkExit();
//   }
};

class KernelRunner {
public:
  void run_kernel(int thisIndex) {
    CkPrintf("KernelRunner: Starting kernel launch for chare %d\n", thisIndex);

    // 1. Create stream with priority (mimicking KokkosManager)
    cudaStream_t stream;
    cudaStreamCreateWithPriority(&stream, cudaStreamDefault, 0);

    // 2. Create Kokkos instance from stream
    auto instance = Kokkos::Cuda(stream);

    // 3. Simple Kernel Launch using the instance
    int n = 1000;
    Kokkos::View<double*> data("data", n);
    
    // Create a pinned host view like miniMD does for comms
    Kokkos::View<double*, Kokkos::CudaHostPinnedSpace> pinned_data("pinned_data", n);
    
    CkPrintf("KernelRunner: Launching kernel with explicit stream and pinned memory...\n");
    Kokkos::parallel_for("test_kernel", 
        Kokkos::RangePolicy<Kokkos::Cuda>(instance, 0, n), 
        KOKKOS_LAMBDA(int i) {
          data(i) = i * 1.5;
        });
    
    // Copy to pinned memory
    Kokkos::deep_copy(instance, pinned_data, data);

    Kokkos::fence();
    cudaStreamSynchronize(stream);
    CkPrintf("KernelRunner: Kernel finished\n");
    
    cudaStreamDestroy(stream);
  }
};

class TestChare : public CBase_TestChare {
public:
  TestChare() {}

  void run() {
    CkPrintf("TestChare[%d]: Starting run (threaded)\n", thisIndex);
    
    KernelRunner runner;
    runner.run_kernel(thisIndex);

    // 2. Trigger reduction to Main to finish
    //contribute(CkCallback(CkReductionTarget(Main, done), mainProxy));
  }
};

#include "test.def.h"
