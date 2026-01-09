#include "test.decl.h"

/* readonly */ CProxy_Main mainProxy;

class Main : public CBase_Main {
public:
  Main(CkArgMsg* m) {
    mainProxy = thisProxy;
    int num_chares = 1;
    if (m->argc > 1) num_chares = atoi(m->argv[1]);
    delete m;

    CkPrintf("Main: Running with %d chares\n", num_chares);

    CProxy_TestChare array = CProxy_TestChare::ckNew(num_chares);
    array.run();
  }
  void done(int cnt){
    CkExit();
  }
};

class TestChare : public CBase_TestChare {
    int iter;
    double val;
    double res;
public:
    TestChare_SDAG_CODE
  TestChare() :iter(0){ 

  }

  void run() {
    CkPrintf("TestChare[%d]: Starting run\n", thisIndex);
    for(iter=0;iter<10;iter++){
        val = thisIndex*0.010*iter;
        thisProxy[thisIndex].pressure_allreduce(CkCallbackResumeThread());
        ckout<<"["<<thisIndex<<"] "<<res<<endl;
    }
    CkCallback fin_cb = CkCallback(CkReductionTarget(Main, done), mainProxy);
    contribute(sizeof(int), &iter, CkReduction::sum_int, fin_cb);
    // CmiNodeBarrier();
    
  }
};

#include "test.def.h"
