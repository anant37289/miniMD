
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_2_closure : public SDAG::Closure {
            int cnt;


      done_2_closure() {
        init();
      }
      done_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return cnt;}
      void pup(PUP::er& __p) {
        __p | cnt;
        packClosure(__p);
      }
      virtual ~done_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_TestChare::run_2_closure : public SDAG::Closure {
      

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

    struct Closure_TestChare::pressure_allreduce_3_closure : public SDAG::Closure {
            CkCallback cb;


      pressure_allreduce_3_closure() {
        init();
      }
      pressure_allreduce_3_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~pressure_allreduce_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(pressure_allreduce_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(int cnt);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(int cnt);
 */
void CProxy_Main::done(int cnt, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int cnt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|cnt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|cnt;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int cnt*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<int> cnt;
  implP|cnt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done(std::move(cnt.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_done_marshall2() {
  int epidx = CkRegisterEp("done(int cnt)",
      reinterpret_cast<CkCallFnPtr>(_call_done_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_done_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_done_marshall2);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_done_marshall2() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_marshall2), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_done_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int cnt*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> cnt;
  implP|cnt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done(std::move(cnt.t));
}
int CkIndex_Main::_callmarshall_done_marshall2(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int cnt*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> cnt;
  implP|cnt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done(std::move(cnt.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_done_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int cnt*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> cnt;
  implP|cnt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cnt");
  implDestP|cnt;
}
PUPable_def(SINGLE_ARG(Closure_Main::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void done(int cnt);
  idx_done_marshall2();
  idx_redn_wrapper_done_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array TestChare: ArrayElement{
TestChare();
threaded void run();
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
TestChare(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_TestChare::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_TestChare::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_TestChare::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_TestChare::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_TestChare::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_TestChare::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_TestChare::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare();
 */
void CProxyElement_TestChare::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_TestChare::idx_TestChare_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxyElement_TestChare::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxyElement_TestChare::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_pressure_allreduce_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxyElement_TestChare::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_pressure_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare();
 */
CkArrayID CProxy_TestChare::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TestChare::idx_TestChare_void(), opts);
  return gId;
}
void CProxy_TestChare::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TestChare::idx_TestChare_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_TestChare::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_TestChare::idx_TestChare_void(), opts);
  return gId;
}
void CProxy_TestChare::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_TestChare::idx_TestChare_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_TestChare::reg_TestChare_void() {
  int epidx = CkRegisterEp("TestChare()",
      reinterpret_cast<CkCallFnPtr>(_call_TestChare_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TestChare::_call_TestChare_void(void* impl_msg, void* impl_obj_void)
{
  TestChare* impl_obj = static_cast<TestChare*>(impl_obj_void);
  new (impl_obj_void) TestChare();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxy_TestChare::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TestChare::idx_run_void(),0);
}

// Entry point registration function
int CkIndex_TestChare::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_TestChare::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  TestChare* impl_obj = static_cast<TestChare*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_run_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_TestChare::_callthr_run_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  TestChare *impl_obj = static_cast<TestChare *>(impl_obj_void);
  delete impl_arg;
  impl_obj->run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_TestChare::run_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxy_TestChare::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TestChare::idx_pressure_allreduce_marshall3(),0);
}

// Entry point registration function
int CkIndex_TestChare::reg_pressure_allreduce_marshall3() {
  int epidx = CkRegisterEp("pressure_allreduce(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_pressure_allreduce_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_pressure_allreduce_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_pressure_allreduce_marshall3);

  return epidx;
}

void CkIndex_TestChare::_call_pressure_allreduce_marshall3(void* impl_msg, void* impl_obj_void)
{
  TestChare* impl_obj = static_cast<TestChare*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_TestChare::pressure_allreduce_3_closure* genClosure = new Closure_TestChare::pressure_allreduce_3_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
}
int CkIndex_TestChare::_callmarshall_pressure_allreduce_marshall3(char* impl_buf, void* impl_obj_void) {
  TestChare* impl_obj = static_cast<TestChare*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_TestChare::pressure_allreduce_3_closure* genClosure = new Closure_TestChare::pressure_allreduce_3_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_TestChare::_marshallmessagepup_pressure_allreduce_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_TestChare::pressure_allreduce_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxy_TestChare::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_TestChare::idx_pressure_recv_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_TestChare::reg_pressure_recv_CkReductionMsg() {
  int epidx = CkRegisterEp("pressure_recv(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pressure_recv_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_TestChare::_call_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  TestChare* impl_obj = static_cast<TestChare*>(impl_obj_void);
  impl_obj->pressure_recv((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_TestChare::reg_TestChare_CkMigrateMessage() {
  int epidx = CkRegisterEp("TestChare(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_TestChare_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_TestChare::_call_TestChare_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<TestChare> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxySection_TestChare::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxySection_TestChare::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_pressure_allreduce_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxySection_TestChare::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_TestChare::idx_pressure_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: TestChare(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_TestChare::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: TestChare();
  idx_TestChare_void();
  CkRegisterDefaultCtor(__idx, idx_TestChare_void());

  // REG: threaded void run();
  idx_run_void();

  // REG: void pressure_allreduce(const CkCallback &cb);
  idx_pressure_allreduce_marshall3();

  // REG: void pressure_recv(CkReductionMsg* impl_msg);
  idx_pressure_recv_CkReductionMsg();

  // REG: TestChare(CkMigrateMessage* impl_msg);
  idx_TestChare_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_TestChare_CkMigrateMessage());

  TestChare::__sdag_register(); // Potentially missing TestChare_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void TestChare::pressure_allreduce(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "TestChare", "pressure_allreduce(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void TestChare::_sdag_fnc_pressure_allreduce(CkCallback cb){
  Closure_TestChare::pressure_allreduce_3_closure* genClosure = new Closure_TestChare::pressure_allreduce_3_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void TestChare::_sdag_fnc_pressure_allreduce(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::pressure_allreduce_end(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_slist_0(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_slist_0_end(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  pressure_allreduce_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_serial_0(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_TestChare_serial_0()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 11 "test.ci"

        int tag = iter;
        CkCallback allreduce_cb = CkCallback(CkIndex_TestChare::pressure_recv(NULL), thisProxy);
        allreduce_cb.setRefnum(tag);
        contribute(sizeof(double), &(val), CkReduction::sum_double, allreduce_cb);
      
#line 741 "test.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* TestChare::_when_0(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      refnum_0 = iter;
    }
  }
  return _when_0(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* TestChare::_when_0(Closure_TestChare::pressure_allreduce_3_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_1(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->addClosure(gen0);
    c->entries.push_back(0);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_when_0_end(Closure_TestChare::pressure_allreduce_3_closure* gen0, CkReductionMsg* gen1) {
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _serial_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_serial_1(Closure_TestChare::pressure_allreduce_3_closure* gen0, CkReductionMsg* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_TestChare_serial_1()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      { // begin serial block
#line 17 "test.ci"

        res = *(double*)msg->getData();
      
#line 811 "test.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_serial_2(Closure_TestChare::pressure_allreduce_3_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_TestChare_serial_2()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 20 "test.ci"

        cb.send();
      
#line 832 "test.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::pressure_recv(CkReductionMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(0, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<Closure_TestChare::pressure_allreduce_3_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void TestChare::_sdag_init() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(1,1));
  __dep->addDepends(0,0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::__sdag_init() { // Potentially missing TestChare_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void TestChare::_sdag_pup(PUP::er &p) {  // Potentially missing TestChare_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void TestChare::__sdag_register() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  (void)_sdag_idx_TestChare_serial_0();
  (void)_sdag_idx_TestChare_serial_1();
  (void)_sdag_idx_TestChare_serial_2();
  PUPable_reg(SINGLE_ARG(Closure_TestChare::run_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_TestChare::pressure_allreduce_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_TestChare::run_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_TestChare::pressure_allreduce_3_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_idx_TestChare_serial_0() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_TestChare_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_reg_TestChare_serial_0() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  return CkRegisterEp("TestChare_serial_0", NULL, 0, CkIndex_TestChare::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_idx_TestChare_serial_1() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_TestChare_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_reg_TestChare_serial_1() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  return CkRegisterEp("TestChare_serial_1", NULL, 0, CkIndex_TestChare::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_idx_TestChare_serial_2() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_TestChare_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int TestChare::_sdag_reg_TestChare_serial_2() { // Potentially missing TestChare_SDAG_CODE in your class definition?
  return CkRegisterEp("TestChare_serial_2", NULL, 0, CkIndex_TestChare::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registertest(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done(int cnt);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array TestChare: ArrayElement{
TestChare();
threaded void run();
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
TestChare(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_TestChare::__register("TestChare", sizeof(TestChare));

}
extern "C" void CkRegisterMainModule(void) {
  _registertest();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_TestChare::virtual_pup(PUP::er &p) {
    recursive_pup<TestChare>(dynamic_cast<TestChare*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
