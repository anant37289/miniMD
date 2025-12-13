class worker;

#include "test.decl.h"
CProxy_worker worker_proxy;

class worker : public CBase_worker {
    public:
    void suspend() {
        CthSuspend();
    }
};

class user : public CBase_user {
    user_SDAG_CODE
};

class main:public CBase_main {
    main_SDAG_CODE
    public:
    main(CkArgMsg* m) {
    CProxy_user user_proxy = CProxy_user::ckNew(4);
    CkArrayOptions opts(4);  
    opts.bindTo(user_proxy);
    worker_proxy = CProxy_worker::ckNew(opts);
    user_proxy.run();
    }
};

#include "test.def.h"