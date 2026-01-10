#ifndef _DECL_miniMD_H_
#define _DECL_miniMD_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "block.decl.h"

#include "types.h"

/* DECLS: readonly CProxy_Main main_proxy;
 */

/* DECLS: readonly CProxy_KokkosManager kokkos_proxy;
 */

/* DECLS: readonly CProxy_Block block_proxy;
 */

/* DECLS: readonly CProxy_Comm comm_proxy;
 */

/* DECLS: readonly int num_chares;
 */

/* DECLS: readonly std::string input_file;
 */

/* DECLS: readonly int num_threads;
 */

/* DECLS: readonly int teams;
 */

/* DECLS: readonly int num_steps;
 */

/* DECLS: readonly int system_size;
 */

/* DECLS: readonly int nx;
 */

/* DECLS: readonly int ny;
 */

/* DECLS: readonly int nz;
 */

/* DECLS: readonly int ntypes;
 */

/* DECLS: readonly int neighbor_size;
 */

/* DECLS: readonly int halfneigh;
 */

/* DECLS: readonly int team_neigh;
 */

/* DECLS: readonly int use_sse;
 */

/* DECLS: readonly int check_safeexchange;
 */

/* DECLS: readonly int do_safeexchange;
 */

/* DECLS: readonly int sort;
 */

/* DECLS: readonly int yaml_output;
 */

/* DECLS: readonly int yaml_screen;
 */

/* DECLS: readonly int ghost_newton;
 */

/* DECLS: readonly int in_nx;
 */

/* DECLS: readonly int in_ny;
 */

/* DECLS: readonly int in_nz;
 */

/* DECLS: readonly MMD_float in_t_request;
 */

/* DECLS: readonly MMD_float in_rho;
 */

/* DECLS: readonly int in_units;
 */

/* DECLS: readonly ForceStyle in_forcetype;
 */

/* DECLS: readonly MMD_float in_epsilon;
 */

/* DECLS: readonly MMD_float in_sigma;
 */

/* DECLS: readonly std::string in_datafile;
 */

/* DECLS: readonly int in_ntimes;
 */

/* DECLS: readonly MMD_float in_dt;
 */

/* DECLS: readonly int in_neigh_every;
 */

/* DECLS: readonly MMD_float in_force_cut;
 */

/* DECLS: readonly MMD_float in_neigh_cut;
 */

/* DECLS: readonly int in_thermo_nstat;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void kokkosInitialized();
void reduceVelocity(CkReductionMsg* impl_msg);
void blockInitialized();
void blockDone();
void kokkosFinalized();
void run();
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
    /* DECLS: void kokkosInitialized();
     */
    // Entry point registration at startup
    
    static int reg_kokkosInitialized_void();
    // Entry point index lookup
    
    inline static int idx_kokkosInitialized_void() {
      static int epidx = reg_kokkosInitialized_void();
      return epidx;
    }

    
    inline static int idx_kokkosInitialized(void (Main::*)() ) {
      return idx_kokkosInitialized_void();
    }


    
    static int kokkosInitialized() { return idx_kokkosInitialized_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_kokkosInitialized_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_kokkosInitialized_void() {
      static int epidx = reg_redn_wrapper_kokkosInitialized_void();
      return epidx;
    }
    
    static int redn_wrapper_kokkosInitialized(CkReductionMsg* impl_msg) { return idx_redn_wrapper_kokkosInitialized_void(); }
    
    static void _call_redn_wrapper_kokkosInitialized_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_kokkosInitialized_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kokkosInitialized_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reduceVelocity(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_reduceVelocity_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_reduceVelocity_CkReductionMsg() {
      static int epidx = reg_reduceVelocity_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_reduceVelocity(void (Main::*)(CkReductionMsg* impl_msg) ) {
      return idx_reduceVelocity_CkReductionMsg();
    }


    
    static int reduceVelocity(CkReductionMsg* impl_msg) { return idx_reduceVelocity_CkReductionMsg(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reduceVelocity_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reduceVelocity_CkReductionMsg() {
      static int epidx = reg_redn_wrapper_reduceVelocity_CkReductionMsg();
      return epidx;
    }
    
    static int redn_wrapper_reduceVelocity(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reduceVelocity_CkReductionMsg(); }
    
    static void _call_redn_wrapper_reduceVelocity_CkReductionMsg(void* impl_msg, void* impl_obj_void);
    
    static void _call_reduceVelocity_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reduceVelocity_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void blockInitialized();
     */
    // Entry point registration at startup
    
    static int reg_blockInitialized_void();
    // Entry point index lookup
    
    inline static int idx_blockInitialized_void() {
      static int epidx = reg_blockInitialized_void();
      return epidx;
    }

    
    inline static int idx_blockInitialized(void (Main::*)() ) {
      return idx_blockInitialized_void();
    }


    
    static int blockInitialized() { return idx_blockInitialized_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_blockInitialized_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_blockInitialized_void() {
      static int epidx = reg_redn_wrapper_blockInitialized_void();
      return epidx;
    }
    
    static int redn_wrapper_blockInitialized(CkReductionMsg* impl_msg) { return idx_redn_wrapper_blockInitialized_void(); }
    
    static void _call_redn_wrapper_blockInitialized_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_blockInitialized_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_blockInitialized_void(void* impl_msg, void* impl_obj);
    /* DECLS: void blockDone();
     */
    // Entry point registration at startup
    
    static int reg_blockDone_void();
    // Entry point index lookup
    
    inline static int idx_blockDone_void() {
      static int epidx = reg_blockDone_void();
      return epidx;
    }

    
    inline static int idx_blockDone(void (Main::*)() ) {
      return idx_blockDone_void();
    }


    
    static int blockDone() { return idx_blockDone_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_blockDone_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_blockDone_void() {
      static int epidx = reg_redn_wrapper_blockDone_void();
      return epidx;
    }
    
    static int redn_wrapper_blockDone(CkReductionMsg* impl_msg) { return idx_redn_wrapper_blockDone_void(); }
    
    static void _call_redn_wrapper_blockDone_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_blockDone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_blockDone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void kokkosFinalized();
     */
    // Entry point registration at startup
    
    static int reg_kokkosFinalized_void();
    // Entry point index lookup
    
    inline static int idx_kokkosFinalized_void() {
      static int epidx = reg_kokkosFinalized_void();
      return epidx;
    }

    
    inline static int idx_kokkosFinalized(void (Main::*)() ) {
      return idx_kokkosFinalized_void();
    }


    
    static int kokkosFinalized() { return idx_kokkosFinalized_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_kokkosFinalized_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_kokkosFinalized_void() {
      static int epidx = reg_redn_wrapper_kokkosFinalized_void();
      return epidx;
    }
    
    static int redn_wrapper_kokkosFinalized(CkReductionMsg* impl_msg) { return idx_redn_wrapper_kokkosFinalized_void(); }
    
    static void _call_redn_wrapper_kokkosFinalized_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_kokkosFinalized_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_kokkosFinalized_void(void* impl_msg, void* impl_obj);
    /* DECLS: void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (Main::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
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

/* DECLS: void kokkosInitialized();
 */
    
    void kokkosInitialized(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduceVelocity(CkReductionMsg* impl_msg);
 */
    
    void reduceVelocity(CkReductionMsg* impl_msg);

/* DECLS: void blockInitialized();
 */
    
    void blockInitialized(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void blockDone();
 */
    
    void blockDone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void kokkosFinalized();
 */
    
    void kokkosFinalized(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE                                                         \
public:                                                                        \
  void run();                                                                  \
  void _sdag_fnc_run();                                                        \
private:                                                                       \
  void run_end();                                                              \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  SDAG::Continuation* _when_0();                                               \
  void _when_0_end();                                                          \
  void _serial_0();                                                            \
  SDAG::Continuation* _when_1();                                               \
  void _when_1_end(CkReductionMsg* gen0);                                      \
  void _serial_1(CkReductionMsg* gen0);                                        \
  SDAG::Continuation* _when_2();                                               \
  void _when_2_end();                                                          \
  void _serial_2();                                                            \
  SDAG::Continuation* _when_3();                                               \
  void _when_3_end();                                                          \
  void _serial_3();                                                            \
  SDAG::Continuation* _when_4();                                               \
  void _when_4_end();                                                          \
  void _serial_4();                                                            \
public:                                                                        \
  void kokkosInitialized(Closure_Main::kokkosInitialized_2_closure* genClosure);\
  void kokkosInitialized();                                                    \
  void reduceVelocity(CkReductionMsg* msg_msg);                                \
  void blockInitialized(Closure_Main::blockInitialized_4_closure* genClosure); \
  void blockInitialized();                                                     \
  void blockDone(Closure_Main::blockDone_5_closure* genClosure);               \
  void blockDone();                                                            \
  void kokkosFinalized(Closure_Main::kokkosFinalized_6_closure* genClosure);   \
  void kokkosFinalized();                                                      \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Main_serial_0();                                        \
  static int _sdag_reg_Main_serial_0();                                        \
  static int _sdag_idx_Main_serial_1();                                        \
  static int _sdag_reg_Main_serial_1();                                        \
  static int _sdag_idx_Main_serial_2();                                        \
  static int _sdag_reg_Main_serial_2();                                        \
  static int _sdag_idx_Main_serial_3();                                        \
  static int _sdag_reg_Main_serial_3();                                        \
  static int _sdag_idx_Main_serial_4();                                        \
  static int _sdag_reg_Main_serial_4();                                        \

typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: group KokkosManager: IrrGroup{
KokkosManager();
void initialize();
void finalize();
};
 */
 class KokkosManager;
 class CkIndex_KokkosManager;
 class CProxy_KokkosManager;
 class CProxyElement_KokkosManager;
 class CProxySection_KokkosManager;
/* --------------- index object ------------------ */
class CkIndex_KokkosManager:public CkIndex_IrrGroup{
  public:
    typedef KokkosManager local_t;
    typedef CkIndex_KokkosManager index_t;
    typedef CProxy_KokkosManager proxy_t;
    typedef CProxyElement_KokkosManager element_t;
    typedef CProxySection_KokkosManager section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: KokkosManager();
     */
    // Entry point registration at startup
    
    static int reg_KokkosManager_void();
    // Entry point index lookup
    
    inline static int idx_KokkosManager_void() {
      static int epidx = reg_KokkosManager_void();
      return epidx;
    }

    
    static int ckNew() { return idx_KokkosManager_void(); }
    
    static void _call_KokkosManager_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_KokkosManager_void(void* impl_msg, void* impl_obj);
    /* DECLS: void initialize();
     */
    // Entry point registration at startup
    
    static int reg_initialize_void();
    // Entry point index lookup
    
    inline static int idx_initialize_void() {
      static int epidx = reg_initialize_void();
      return epidx;
    }

    
    inline static int idx_initialize(void (KokkosManager::*)() ) {
      return idx_initialize_void();
    }


    
    static int initialize() { return idx_initialize_void(); }
    
    static void _call_initialize_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initialize_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finalize();
     */
    // Entry point registration at startup
    
    static int reg_finalize_void();
    // Entry point index lookup
    
    inline static int idx_finalize_void() {
      static int epidx = reg_finalize_void();
      return epidx;
    }

    
    inline static int idx_finalize(void (KokkosManager::*)() ) {
      return idx_finalize_void();
    }


    
    static int finalize() { return idx_finalize_void(); }
    
    static void _call_finalize_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finalize_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_KokkosManager: public CProxyElement_IrrGroup{
  public:
    typedef KokkosManager local_t;
    typedef CkIndex_KokkosManager index_t;
    typedef CProxy_KokkosManager proxy_t;
    typedef CProxyElement_KokkosManager element_t;
    typedef CProxySection_KokkosManager section_t;


    /* TRAM aggregators */

    CProxyElement_KokkosManager(void) {
    }
    CProxyElement_KokkosManager(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_KokkosManager(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_KokkosManager(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    KokkosManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KokkosManager* ckLocalBranch(CkGroupID gID) {
      return (KokkosManager*)CkLocalBranch(gID);
    }
/* DECLS: KokkosManager();
 */
    

/* DECLS: void initialize();
 */
    
    void initialize(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_KokkosManager: public CProxy_IrrGroup{
  public:
    typedef KokkosManager local_t;
    typedef CkIndex_KokkosManager index_t;
    typedef CProxy_KokkosManager proxy_t;
    typedef CProxyElement_KokkosManager element_t;
    typedef CProxySection_KokkosManager section_t;

    CProxy_KokkosManager(void) {
    }
    CProxy_KokkosManager(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_KokkosManager(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_KokkosManager(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_KokkosManager operator[](int onPE) const
      {return CProxyElement_KokkosManager(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    KokkosManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KokkosManager* ckLocalBranch(CkGroupID gID) {
      return (KokkosManager*)CkLocalBranch(gID);
    }
/* DECLS: KokkosManager();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initialize();
 */
    
    void initialize(const CkEntryOptions *impl_e_opts=NULL);
    
    void initialize(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void initialize(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);
    
    void finalize(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void finalize(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_KokkosManager: public CProxySection_IrrGroup{
  public:
    typedef KokkosManager local_t;
    typedef CkIndex_KokkosManager index_t;
    typedef CProxy_KokkosManager proxy_t;
    typedef CProxyElement_KokkosManager element_t;
    typedef CProxySection_KokkosManager section_t;

    CProxySection_KokkosManager(void) {
    }
    CProxySection_KokkosManager(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_KokkosManager(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_KokkosManager(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_KokkosManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_KokkosManager(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    KokkosManager* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static KokkosManager* ckLocalBranch(CkGroupID gID) {
      return (KokkosManager*)CkLocalBranch(gID);
    }
/* DECLS: KokkosManager();
 */
    

/* DECLS: void initialize();
 */
    
    void initialize(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void finalize();
 */
    
    void finalize(const CkEntryOptions *impl_e_opts=NULL);

};
#define KokkosManager_SDAG_CODE 
typedef CBaseT1<Group, CProxy_KokkosManager>CBase_KokkosManager;

/* DECLS: nodegroup blockCommProxy: NodeGroup{
blockCommProxy();
void setblock(const CProxy_Block &block);
void setblockdone();
void setcomm(const CProxy_Comm &comm);
void setcommdone();
};
 */
 class blockCommProxy;
 class CkIndex_blockCommProxy;
 class CProxy_blockCommProxy;
 class CProxyElement_blockCommProxy;
 class CProxySection_blockCommProxy;
/* --------------- index object ------------------ */
class CkIndex_blockCommProxy:public CkIndex_NodeGroup{
  public:
    typedef blockCommProxy local_t;
    typedef CkIndex_blockCommProxy index_t;
    typedef CProxy_blockCommProxy proxy_t;
    typedef CProxyElement_blockCommProxy element_t;
    typedef CProxySection_blockCommProxy section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: blockCommProxy();
     */
    // Entry point registration at startup
    
    static int reg_blockCommProxy_void();
    // Entry point index lookup
    
    inline static int idx_blockCommProxy_void() {
      static int epidx = reg_blockCommProxy_void();
      return epidx;
    }

    
    static int ckNew() { return idx_blockCommProxy_void(); }
    
    static void _call_blockCommProxy_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_blockCommProxy_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setblock(const CProxy_Block &block);
     */
    // Entry point registration at startup
    
    static int reg_setblock_marshall2();
    // Entry point index lookup
    
    inline static int idx_setblock_marshall2() {
      static int epidx = reg_setblock_marshall2();
      return epidx;
    }

    
    inline static int idx_setblock(void (blockCommProxy::*)(const CProxy_Block &block) ) {
      return idx_setblock_marshall2();
    }


    
    static int setblock(const CProxy_Block &block) { return idx_setblock_marshall2(); }
    
    static void _call_setblock_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setblock_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setblock_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setblock_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setblockdone();
     */
    // Entry point registration at startup
    
    static int reg_setblockdone_void();
    // Entry point index lookup
    
    inline static int idx_setblockdone_void() {
      static int epidx = reg_setblockdone_void();
      return epidx;
    }

    
    inline static int idx_setblockdone(void (blockCommProxy::*)() ) {
      return idx_setblockdone_void();
    }


    
    static int setblockdone() { return idx_setblockdone_void(); }
    
    static void _call_setblockdone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setblockdone_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setcomm(const CProxy_Comm &comm);
     */
    // Entry point registration at startup
    
    static int reg_setcomm_marshall4();
    // Entry point index lookup
    
    inline static int idx_setcomm_marshall4() {
      static int epidx = reg_setcomm_marshall4();
      return epidx;
    }

    
    inline static int idx_setcomm(void (blockCommProxy::*)(const CProxy_Comm &comm) ) {
      return idx_setcomm_marshall4();
    }


    
    static int setcomm(const CProxy_Comm &comm) { return idx_setcomm_marshall4(); }
    
    static void _call_setcomm_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setcomm_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setcomm_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setcomm_marshall4(PUP::er &p,void *msg);
    /* DECLS: void setcommdone();
     */
    // Entry point registration at startup
    
    static int reg_setcommdone_void();
    // Entry point index lookup
    
    inline static int idx_setcommdone_void() {
      static int epidx = reg_setcommdone_void();
      return epidx;
    }

    
    inline static int idx_setcommdone(void (blockCommProxy::*)() ) {
      return idx_setcommdone_void();
    }


    
    static int setcommdone() { return idx_setcommdone_void(); }
    
    static void _call_setcommdone_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setcommdone_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_blockCommProxy: public CProxyElement_NodeGroup{
  public:
    typedef blockCommProxy local_t;
    typedef CkIndex_blockCommProxy index_t;
    typedef CProxy_blockCommProxy proxy_t;
    typedef CProxyElement_blockCommProxy element_t;
    typedef CProxySection_blockCommProxy section_t;


    /* TRAM aggregators */

    CProxyElement_blockCommProxy(void) {
    }
    CProxyElement_blockCommProxy(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_blockCommProxy(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_blockCommProxy(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    blockCommProxy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static blockCommProxy* ckLocalBranch(CkGroupID gID) {
      return (blockCommProxy*)CkLocalNodeBranch(gID);
    }
/* DECLS: blockCommProxy();
 */
    

/* DECLS: void setblock(const CProxy_Block &block);
 */
    
    void setblock(const CProxy_Block &block, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setblockdone();
 */
    
    void setblockdone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcomm(const CProxy_Comm &comm);
 */
    
    void setcomm(const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcommdone();
 */
    
    void setcommdone(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_blockCommProxy: public CProxy_NodeGroup{
  public:
    typedef blockCommProxy local_t;
    typedef CkIndex_blockCommProxy index_t;
    typedef CProxy_blockCommProxy proxy_t;
    typedef CProxyElement_blockCommProxy element_t;
    typedef CProxySection_blockCommProxy section_t;

    CProxy_blockCommProxy(void) {
    }
    CProxy_blockCommProxy(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_blockCommProxy(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_blockCommProxy(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_blockCommProxy operator[](int onPE) const
      {return CProxyElement_blockCommProxy(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    blockCommProxy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static blockCommProxy* ckLocalBranch(CkGroupID gID) {
      return (blockCommProxy*)CkLocalNodeBranch(gID);
    }
/* DECLS: blockCommProxy();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setblock(const CProxy_Block &block);
 */
    
    void setblock(const CProxy_Block &block, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setblockdone();
 */
    
    void setblockdone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcomm(const CProxy_Comm &comm);
 */
    
    void setcomm(const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcommdone();
 */
    
    void setcommdone(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_blockCommProxy: public CProxySection_NodeGroup{
  public:
    typedef blockCommProxy local_t;
    typedef CkIndex_blockCommProxy index_t;
    typedef CProxy_blockCommProxy proxy_t;
    typedef CProxyElement_blockCommProxy element_t;
    typedef CProxySection_blockCommProxy section_t;

    CProxySection_blockCommProxy(void) {
    }
    CProxySection_blockCommProxy(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_blockCommProxy(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_blockCommProxy(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_blockCommProxy(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_blockCommProxy(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    blockCommProxy* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static blockCommProxy* ckLocalBranch(CkGroupID gID) {
      return (blockCommProxy*)CkLocalNodeBranch(gID);
    }
/* DECLS: blockCommProxy();
 */
    

/* DECLS: void setblock(const CProxy_Block &block);
 */
    
    void setblock(const CProxy_Block &block, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setblockdone();
 */
    
    void setblockdone(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcomm(const CProxy_Comm &comm);
 */
    
    void setcomm(const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setcommdone();
 */
    
    void setcommdone(const CkEntryOptions *impl_e_opts=NULL);

};
#define blockCommProxy_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_blockCommProxy>CBase_blockCommProxy;











































/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct kokkosInitialized_2_closure;



    struct blockInitialized_4_closure;


    struct blockDone_5_closure;


    struct kokkosFinalized_6_closure;


    struct run_7_closure;

};

/* ---------------- method closures -------------- */
class Closure_KokkosManager {
  public:


    struct initialize_2_closure;


    struct finalize_3_closure;

};

/* ---------------- method closures -------------- */
class Closure_blockCommProxy {
  public:


    struct setblock_2_closure;


    struct setblockdone_3_closure;


    struct setcomm_4_closure;


    struct setcommdone_5_closure;

};

extern void _registerminiMD(void);
extern "C" void CkRegisterMainModule(void);
#endif
