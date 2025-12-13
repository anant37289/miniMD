
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_user::run_2_closure : public SDAG::Closure {
      

      run_2_closure() {
        init();
      }
      run_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_worker::suspend_2_closure : public SDAG::Closure {
      

      suspend_2_closure() {
        init();
      }
      suspend_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~suspend_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(suspend_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_worker worker_proxy;
 */
extern CProxy_worker worker_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_worker_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|worker_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare main: Chare{
main(CkArgMsg* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_main::__idx, CkIndex_main::idx_main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_main::reg_main_CkArgMsg() {
  int epidx = CkRegisterEp("main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_main::_call_main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  main* impl_obj = static_cast<main*>(impl_obj_void);
  new (impl_obj_void) main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: main(CkArgMsg* impl_msg);
  idx_main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_main_CkArgMsg());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array user: ArrayElement{
user();
threaded void run();
user(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_user::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_user::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_user::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_user::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_user::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_user::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_user::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: user();
 */
void CProxyElement_user::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_user::idx_user_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxyElement_user::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_user::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: user(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: user();
 */
CkArrayID CProxy_user::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_user::idx_user_void(), opts);
  return gId;
}
void CProxy_user::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_user::idx_user_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_user::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_user::idx_user_void(), opts);
  return gId;
}
void CProxy_user::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_user::idx_user_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_user::reg_user_void() {
  int epidx = CkRegisterEp("user()",
      reinterpret_cast<CkCallFnPtr>(_call_user_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_user::_call_user_void(void* impl_msg, void* impl_obj_void)
{
  user* impl_obj = static_cast<user*>(impl_obj_void);
  new (impl_obj_void) user();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxy_user::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_user::idx_run_void(),0);
}

// Entry point registration function
int CkIndex_user::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_user::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  user* impl_obj = static_cast<user*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_run_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_user::_callthr_run_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  user *impl_obj = static_cast<user *>(impl_obj_void);
  delete impl_arg;
  impl_obj->run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_user::run_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: user(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_user::reg_user_CkMigrateMessage() {
  int epidx = CkRegisterEp("user(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_user_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_user::_call_user_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<user> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: user();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxySection_user::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_user::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: user(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_user::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: user();
  idx_user_void();
  CkRegisterDefaultCtor(__idx, idx_user_void());

  // REG: threaded void run();
  idx_run_void();

  // REG: user(CkMigrateMessage* impl_msg);
  idx_user_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_user_CkMigrateMessage());

  user::__sdag_register(); // Potentially missing user_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void user::run() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::run_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_slist_0_end() {
  run_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_user_preprocess()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 9 "test.ci"

                worker* local_worker = (worker*)worker_proxy(thisIndex).ckLocal();
                local_worker->suspend();
            
#line 404 "test.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _serial_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_serial_1() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_user_postprocess()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 13 "test.ci"

                worker* local_worker = (worker*)worker_proxy(thisIndex).ckLocal();
            
#line 421 "test.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_sdag_init() { // Potentially missing user_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::__sdag_init() { // Potentially missing user_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void user::_sdag_pup(PUP::er &p) {  // Potentially missing user_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void user::__sdag_register() { // Potentially missing user_SDAG_CODE in your class definition?
  (void)_sdag_idx_user_preprocess();
  (void)_sdag_idx_user_postprocess();
  PUPable_reg(SINGLE_ARG(Closure_user::run_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_user::run_2_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int user::_sdag_idx_user_preprocess() { // Potentially missing user_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_user_preprocess();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int user::_sdag_reg_user_preprocess() { // Potentially missing user_SDAG_CODE in your class definition?
  return CkRegisterEp("user_preprocess", NULL, 0, CkIndex_user::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int user::_sdag_idx_user_postprocess() { // Potentially missing user_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_user_postprocess();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int user::_sdag_reg_user_postprocess() { // Potentially missing user_SDAG_CODE in your class definition?
  return CkRegisterEp("user_postprocess", NULL, 0, CkIndex_user::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array worker: ArrayElement{
worker();
void suspend();
worker(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_worker::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_worker::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_worker::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_worker::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_worker::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_worker::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_worker::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker();
 */
void CProxyElement_worker::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_worker::idx_worker_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void suspend();
 */
void CProxyElement_worker::suspend(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_worker::idx_suspend_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker();
 */
CkArrayID CProxy_worker::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_worker::idx_worker_void(), opts);
  return gId;
}
void CProxy_worker::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_worker::idx_worker_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_worker::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_worker::idx_worker_void(), opts);
  return gId;
}
void CProxy_worker::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_worker::idx_worker_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_worker::reg_worker_void() {
  int epidx = CkRegisterEp("worker()",
      reinterpret_cast<CkCallFnPtr>(_call_worker_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_worker::_call_worker_void(void* impl_msg, void* impl_obj_void)
{
  worker* impl_obj = static_cast<worker*>(impl_obj_void);
  new (impl_obj_void) worker();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void suspend();
 */
void CProxy_worker::suspend(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_worker::idx_suspend_void(),0);
}

// Entry point registration function
int CkIndex_worker::reg_suspend_void() {
  int epidx = CkRegisterEp("suspend()",
      reinterpret_cast<CkCallFnPtr>(_call_suspend_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_worker::_call_suspend_void(void* impl_msg, void* impl_obj_void)
{
  worker* impl_obj = static_cast<worker*>(impl_obj_void);
  impl_obj->suspend();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_worker::suspend_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_worker::reg_worker_CkMigrateMessage() {
  int epidx = CkRegisterEp("worker(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_worker_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_worker::_call_worker_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<worker> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void suspend();
 */
void CProxySection_worker::suspend(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_worker::idx_suspend_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: worker(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_worker::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: worker();
  idx_worker_void();
  CkRegisterDefaultCtor(__idx, idx_worker_void());

  // REG: void suspend();
  idx_suspend_void();

  // REG: worker(CkMigrateMessage* impl_msg);
  idx_worker_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_worker_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registertest(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("worker_proxy","CProxy_worker",sizeof(worker_proxy),(void *) &worker_proxy,__xlater_roPup_worker_proxy);

/* REG: mainchare main: Chare{
main(CkArgMsg* impl_msg);
};
*/
  CkIndex_main::__register("main", sizeof(main));

/* REG: array user: ArrayElement{
user();
threaded void run();
user(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_user::__register("user", sizeof(user));

/* REG: array worker: ArrayElement{
worker();
void suspend();
worker(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_worker::__register("worker", sizeof(worker));

}
extern "C" void CkRegisterMainModule(void) {
  _registertest();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_main::virtual_pup(PUP::er &p) {
    recursive_pup<main>(dynamic_cast<main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_user::virtual_pup(PUP::er &p) {
    recursive_pup<user>(dynamic_cast<user*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_worker::virtual_pup(PUP::er &p) {
    recursive_pup<worker>(dynamic_cast<worker*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
