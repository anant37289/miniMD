#ifndef _DECL_test_H_
#define _DECL_test_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(int cnt);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void done(int cnt);
     */
    // Entry point registration at startup
    
    static int reg_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_done_marshall2() {
      static int epidx = reg_done_marshall2();
      return epidx;
    }

    
    inline static int idx_done(void (Main::*)(int cnt) ) {
      return idx_done_marshall2();
    }


    
    static int done(int cnt) { return idx_done_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_marshall2() {
      static int epidx = reg_redn_wrapper_done_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_marshall2(); }
    
    static void _call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_done_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void done(int cnt);
 */
    
    void done(int cnt, const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array TestChare: ArrayElement{
TestChare();
threaded void run();
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
TestChare(CkMigrateMessage* impl_msg);
};
 */
 class TestChare;
 class CkIndex_TestChare;
 class CProxy_TestChare;
 class CProxyElement_TestChare;
 class CProxySection_TestChare;
/* --------------- index object ------------------ */
class CkIndex_TestChare:public CkIndex_ArrayElement{
  public:
    typedef TestChare local_t;
    typedef CkIndex_TestChare index_t;
    typedef CProxy_TestChare proxy_t;
    typedef CProxyElement_TestChare element_t;
    typedef CProxySection_TestChare section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: TestChare();
     */
    // Entry point registration at startup
    
    static int reg_TestChare_void();
    // Entry point index lookup
    
    inline static int idx_TestChare_void() {
      static int epidx = reg_TestChare_void();
      return epidx;
    }

    
    static int ckNew() { return idx_TestChare_void(); }
    
    static void _call_TestChare_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TestChare_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (TestChare::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_run_void(CkThrCallArg *);
    /* DECLS: void pressure_allreduce(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_pressure_allreduce_marshall3();
    // Entry point index lookup
    
    inline static int idx_pressure_allreduce_marshall3() {
      static int epidx = reg_pressure_allreduce_marshall3();
      return epidx;
    }

    
    inline static int idx_pressure_allreduce(void (TestChare::*)(const CkCallback &cb) ) {
      return idx_pressure_allreduce_marshall3();
    }


    
    static int pressure_allreduce(const CkCallback &cb) { return idx_pressure_allreduce_marshall3(); }
    
    static void _call_pressure_allreduce_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pressure_allreduce_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_pressure_allreduce_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_pressure_allreduce_marshall3(PUP::er &p,void *msg);
    /* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pressure_recv_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_pressure_recv_CkReductionMsg() {
      static int epidx = reg_pressure_recv_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_pressure_recv(void (TestChare::*)(CkReductionMsg* impl_msg) ) {
      return idx_pressure_recv_CkReductionMsg();
    }


    
    static int pressure_recv(CkReductionMsg* impl_msg) { return idx_pressure_recv_CkReductionMsg(); }
    
    static void _call_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: TestChare(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_TestChare_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_TestChare_CkMigrateMessage() {
      static int epidx = reg_TestChare_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_TestChare_CkMigrateMessage(); }
    
    static void _call_TestChare_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_TestChare_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_TestChare : public CProxyElement_ArrayElement{
  public:
    typedef TestChare local_t;
    typedef CkIndex_TestChare index_t;
    typedef CProxy_TestChare proxy_t;
    typedef CProxyElement_TestChare element_t;
    typedef CProxySection_TestChare section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_TestChare(void) {
    }
    CProxyElement_TestChare(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    TestChare *ckLocal(void) const
    { return (TestChare *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_TestChare(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TestChare(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_TestChare(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_TestChare(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: TestChare();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: TestChare(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_TestChare : public CProxy_ArrayElement{
  public:
    typedef TestChare local_t;
    typedef CkIndex_TestChare index_t;
    typedef CProxy_TestChare proxy_t;
    typedef CProxyElement_TestChare element_t;
    typedef CProxySection_TestChare section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_TestChare(void) {
    }
    CProxy_TestChare(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Generalized array indexing:
    CProxyElement_TestChare operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_TestChare(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TestChare operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_TestChare(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_TestChare operator [] (int idx) const 
        {return CProxyElement_TestChare(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_TestChare operator () (int idx) const 
        {return CProxyElement_TestChare(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_TestChare(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_TestChare(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: TestChare();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: TestChare(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_TestChare : public CProxySection_ArrayElement{
  public:
    typedef TestChare local_t;
    typedef CkIndex_TestChare index_t;
    typedef CProxy_TestChare proxy_t;
    typedef CProxyElement_TestChare element_t;
    typedef CProxySection_TestChare section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_TestChare(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_TestChare operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_TestChare(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TestChare operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_TestChare(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_TestChare operator [] (int idx) const 
        {return CProxyElement_TestChare(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_TestChare operator () (int idx) const 
        {return CProxyElement_TestChare(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_TestChare(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TestChare(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_TestChare(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_TestChare(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_TestChare(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_TestChare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_TestChare(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_TestChare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_TestChare(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_TestChare(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_TestChare(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: TestChare();
 */
    

/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: TestChare(CkMigrateMessage* impl_msg);
 */

};
#define TestChare_SDAG_CODE                                                    \
public:                                                                        \
  void pressure_allreduce(CkCallback cb);                                      \
  void _sdag_fnc_pressure_allreduce(CkCallback cb);                            \
  void _sdag_fnc_pressure_allreduce(Closure_TestChare::pressure_allreduce_3_closure* gen0);\
private:                                                                       \
  void pressure_allreduce_end(Closure_TestChare::pressure_allreduce_3_closure* gen0);\
  void _slist_0(Closure_TestChare::pressure_allreduce_3_closure* gen0);        \
  void _slist_0_end(Closure_TestChare::pressure_allreduce_3_closure* gen0);    \
  void _serial_0(Closure_TestChare::pressure_allreduce_3_closure* gen0);       \
  SDAG::Continuation* _when_0(Closure_TestChare::pressure_allreduce_3_closure* gen0);\
  SDAG::Continuation* _when_0(Closure_TestChare::pressure_allreduce_3_closure* gen0, int refnum_0);\
  void _when_0_end(Closure_TestChare::pressure_allreduce_3_closure* gen0, CkReductionMsg* gen1);\
  void _serial_1(Closure_TestChare::pressure_allreduce_3_closure* gen0, CkReductionMsg* gen1);\
  void _serial_2(Closure_TestChare::pressure_allreduce_3_closure* gen0);       \
public:                                                                        \
  void pressure_recv(CkReductionMsg* msg_msg);                                 \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_TestChare_serial_0();                                   \
  static int _sdag_reg_TestChare_serial_0();                                   \
  static int _sdag_idx_TestChare_serial_1();                                   \
  static int _sdag_reg_TestChare_serial_1();                                   \
  static int _sdag_idx_TestChare_serial_2();                                   \
  static int _sdag_reg_TestChare_serial_2();                                   \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_TestChare>CBase_TestChare;


/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct done_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_TestChare {
  public:


    struct run_2_closure;


    struct pressure_allreduce_3_closure;



};

extern void _registertest(void);
extern "C" void CkRegisterMainModule(void);
#endif
