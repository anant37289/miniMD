









































/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::kokkosInitialized_2_closure : public SDAG::Closure {
      

      kokkosInitialized_2_closure() {
        init();
      }
      kokkosInitialized_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~kokkosInitialized_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(kokkosInitialized_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::blockInitialized_4_closure : public SDAG::Closure {
      

      blockInitialized_4_closure() {
        init();
      }
      blockInitialized_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~blockInitialized_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(blockInitialized_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::blockDone_5_closure : public SDAG::Closure {
      

      blockDone_5_closure() {
        init();
      }
      blockDone_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~blockDone_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(blockDone_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::kokkosFinalized_6_closure : public SDAG::Closure {
      

      kokkosFinalized_6_closure() {
        init();
      }
      kokkosFinalized_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~kokkosFinalized_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(kokkosFinalized_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::run_7_closure : public SDAG::Closure {
      

      run_7_closure() {
        init();
      }
      run_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KokkosManager::initialize_2_closure : public SDAG::Closure {
      

      initialize_2_closure() {
        init();
      }
      initialize_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initialize_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(initialize_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_KokkosManager::finalize_3_closure : public SDAG::Closure {
      

      finalize_3_closure() {
        init();
      }
      finalize_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finalize_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(finalize_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_blockCommProxy::setblockcomm_2_closure : public SDAG::Closure {
            CProxy_Block block;
            CProxy_Comm comm;


      setblockcomm_2_closure() {
        init();
      }
      setblockcomm_2_closure(CkMigrateMessage*) {
        init();
      }
            CProxy_Block & getP0() { return block;}
            CProxy_Comm & getP1() { return comm;}
      void pup(PUP::er& __p) {
        __p | block;
        __p | comm;
        packClosure(__p);
      }
      virtual ~setblockcomm_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setblockcomm_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_blockCommProxy::setblockcommdone_3_closure : public SDAG::Closure {
      

      setblockcommdone_3_closure() {
        init();
      }
      setblockcommdone_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~setblockcommdone_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setblockcommdone_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: readonly CProxy_Main main_proxy;
 */
extern CProxy_Main main_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_main_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|main_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_KokkosManager kokkos_proxy;
 */
extern CProxy_KokkosManager kokkos_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_kokkos_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|kokkos_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Block block_proxy;
 */
extern CProxy_Block block_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_block_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|block_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Comm comm_proxy;
 */
extern CProxy_Comm comm_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_comm_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|comm_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int num_chares;
 */
extern int num_chares;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_chares(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_chares;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly std::string input_file;
 */
extern std::string input_file;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_input_file(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|input_file;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int num_threads;
 */
extern int num_threads;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_threads(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_threads;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int teams;
 */
extern int teams;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_teams(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|teams;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int num_steps;
 */
extern int num_steps;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_steps(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_steps;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int system_size;
 */
extern int system_size;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_system_size(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|system_size;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int nx;
 */
extern int nx;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_nx(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|nx;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int ny;
 */
extern int ny;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ny(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ny;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int nz;
 */
extern int nz;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_nz(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|nz;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int ntypes;
 */
extern int ntypes;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ntypes(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ntypes;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int neighbor_size;
 */
extern int neighbor_size;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_neighbor_size(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|neighbor_size;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int halfneigh;
 */
extern int halfneigh;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_halfneigh(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|halfneigh;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int team_neigh;
 */
extern int team_neigh;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_team_neigh(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|team_neigh;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int use_sse;
 */
extern int use_sse;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_use_sse(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|use_sse;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int check_safeexchange;
 */
extern int check_safeexchange;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_check_safeexchange(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|check_safeexchange;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int do_safeexchange;
 */
extern int do_safeexchange;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_do_safeexchange(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|do_safeexchange;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int sort;
 */
extern int sort;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_sort(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|sort;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int yaml_output;
 */
extern int yaml_output;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_yaml_output(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|yaml_output;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int yaml_screen;
 */
extern int yaml_screen;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_yaml_screen(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|yaml_screen;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int ghost_newton;
 */
extern int ghost_newton;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_ghost_newton(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|ghost_newton;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_nx;
 */
extern int in_nx;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_nx(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_nx;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_ny;
 */
extern int in_ny;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_ny(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_ny;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_nz;
 */
extern int in_nz;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_nz(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_nz;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_t_request;
 */
extern MMD_float in_t_request;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_t_request(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_t_request;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_rho;
 */
extern MMD_float in_rho;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_rho(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_rho;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_units;
 */
extern int in_units;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_units(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_units;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly ForceStyle in_forcetype;
 */
extern ForceStyle in_forcetype;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_forcetype(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_forcetype;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_epsilon;
 */
extern MMD_float in_epsilon;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_epsilon(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_epsilon;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_sigma;
 */
extern MMD_float in_sigma;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_sigma(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_sigma;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly std::string in_datafile;
 */
extern std::string in_datafile;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_datafile(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_datafile;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_ntimes;
 */
extern int in_ntimes;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_ntimes(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_ntimes;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_dt;
 */
extern MMD_float in_dt;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_dt(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_dt;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_neigh_every;
 */
extern int in_neigh_every;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_neigh_every(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_neigh_every;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_force_cut;
 */
extern MMD_float in_force_cut;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_force_cut(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_force_cut;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly MMD_float in_neigh_cut;
 */
extern MMD_float in_neigh_cut;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_neigh_cut(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_neigh_cut;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int in_thermo_nstat;
 */
extern int in_thermo_nstat;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_in_thermo_nstat(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|in_thermo_nstat;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void kokkosInitialized();
void reduceVelocity(CkReductionMsg* impl_msg);
void blockInitialized();
void blockDone();
void kokkosFinalized();
void run();
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
/* DEFS: void kokkosInitialized();
 */
void CProxy_Main::kokkosInitialized(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_kokkosInitialized_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_kokkosInitialized_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_kokkosInitialized_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_kokkosInitialized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_Main::kokkosInitialized_2_closure* genClosure = new Closure_Main::kokkosInitialized_2_closure();
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->kokkosInitialized(genClosure);
  genClosure->deref();
  
}


// Entry point registration function
int CkIndex_Main::reg_kokkosInitialized_void() {
  int epidx = CkRegisterEp("kokkosInitialized()",
      reinterpret_cast<CkCallFnPtr>(_call_kokkosInitialized_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_kokkosInitialized_void() {
  return CkRegisterEp("redn_wrapper_kokkosInitialized(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_kokkosInitialized_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_kokkosInitialized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->kokkosInitialized();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::kokkosInitialized_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduceVelocity(CkReductionMsg* impl_msg);
 */
void CProxy_Main::reduceVelocity(CkReductionMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_reduceVelocity_CkReductionMsg(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_reduceVelocity_CkReductionMsg(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_reduceVelocity_CkReductionMsg(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_reduceVelocity_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->reduceVelocity((CkReductionMsg*)impl_msg);
  
}


// Entry point registration function
int CkIndex_Main::reg_reduceVelocity_CkReductionMsg() {
  int epidx = CkRegisterEp("reduceVelocity(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_reduceVelocity_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_reduceVelocity_CkReductionMsg() {
  return CkRegisterEp("redn_wrapper_reduceVelocity(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_reduceVelocity_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_reduceVelocity_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->reduceVelocity((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void blockInitialized();
 */
void CProxy_Main::blockInitialized(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_blockInitialized_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_blockInitialized_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_blockInitialized_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_blockInitialized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_Main::blockInitialized_4_closure* genClosure = new Closure_Main::blockInitialized_4_closure();
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->blockInitialized(genClosure);
  genClosure->deref();
  
}


// Entry point registration function
int CkIndex_Main::reg_blockInitialized_void() {
  int epidx = CkRegisterEp("blockInitialized()",
      reinterpret_cast<CkCallFnPtr>(_call_blockInitialized_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_blockInitialized_void() {
  return CkRegisterEp("redn_wrapper_blockInitialized(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_blockInitialized_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_blockInitialized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->blockInitialized();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::blockInitialized_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void blockDone();
 */
void CProxy_Main::blockDone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_blockDone_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_blockDone_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_blockDone_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_blockDone_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_Main::blockDone_5_closure* genClosure = new Closure_Main::blockDone_5_closure();
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->blockDone(genClosure);
  genClosure->deref();
  
}


// Entry point registration function
int CkIndex_Main::reg_blockDone_void() {
  int epidx = CkRegisterEp("blockDone()",
      reinterpret_cast<CkCallFnPtr>(_call_blockDone_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_blockDone_void() {
  return CkRegisterEp("redn_wrapper_blockDone(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_blockDone_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_blockDone_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->blockDone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::blockDone_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void kokkosFinalized();
 */
void CProxy_Main::kokkosFinalized(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_kokkosFinalized_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_kokkosFinalized_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_kokkosFinalized_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_kokkosFinalized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_Main::kokkosFinalized_6_closure* genClosure = new Closure_Main::kokkosFinalized_6_closure();
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->kokkosFinalized(genClosure);
  genClosure->deref();
  
}


// Entry point registration function
int CkIndex_Main::reg_kokkosFinalized_void() {
  int epidx = CkRegisterEp("kokkosFinalized()",
      reinterpret_cast<CkCallFnPtr>(_call_kokkosFinalized_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_kokkosFinalized_void() {
  return CkRegisterEp("redn_wrapper_kokkosFinalized(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_kokkosFinalized_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_kokkosFinalized_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->kokkosFinalized();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::kokkosFinalized_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void run();
 */
void CProxy_Main::run(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_run_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_run_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_run_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->_sdag_fnc_run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::run_7_closure))
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

  // REG: void kokkosInitialized();
  idx_kokkosInitialized_void();
  idx_redn_wrapper_kokkosInitialized_void();

  // REG: void reduceVelocity(CkReductionMsg* impl_msg);
  idx_reduceVelocity_CkReductionMsg();
  idx_redn_wrapper_reduceVelocity_CkReductionMsg();

  // REG: void blockInitialized();
  idx_blockInitialized_void();
  idx_redn_wrapper_blockInitialized_void();

  // REG: void blockDone();
  idx_blockDone_void();
  idx_redn_wrapper_blockDone_void();

  // REG: void kokkosFinalized();
  idx_kokkosFinalized_void();
  idx_redn_wrapper_kokkosFinalized_void();

  // REG: void run();
  idx_run_void();

  Main::__sdag_register(); // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Main::run(){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Main", "run()"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_fnc_run() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::run_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0() {
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0_end() {
  run_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Main::_when_0() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_0();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_when_0_end() {
  _when_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_0()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 52 "/ccs/home/rrao/miniMD/baseline_charm/charm/ljs.ci"

        printf("[Main] Kokkos initialized\n");
        fflush(stdout);
        CProxy_blockCommProxy _blockCommProxy = CProxy_blockCommProxy::ckNew();
        block_proxy = CProxy_Block::ckNew(num_chares);
        CkArrayOptions opts(num_chares);
        opts.bindTo(block_proxy);
        comm_proxy = CProxy_Comm::ckNew(opts);
        _blockCommProxy.setblockcomm(block_proxy, comm_proxy);
      
#line 1084 "miniMD.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Main::_when_1() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_1(static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_when_1_end(CkReductionMsg* gen0) {
  {
    CkReductionMsg*& msg = gen0;
    CmiFree(UsrToEnv(msg));
  }
  _when_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_1(CkReductionMsg* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_1()), CkMyPe(), 0, NULL, this); 
  {
    CkReductionMsg*& msg = gen0;
    { // begin serial block
#line 62 "/ccs/home/rrao/miniMD/baseline_charm/charm/ljs.ci"

        CkPrintf("[Main] Reducing velocities...\n");
        double vxtot = 0;
        double vytot = 0;
        double vztot = 0;
        CkReduction::setElement* current = (CkReduction::setElement*)msg->getData();
        while (current != NULL) {
          double* result = (double*)&current->data;
          vxtot += result[0];
          vytot += result[1];
          vztot += result[2];
          current = current->next();
        }
        block_proxy.contCreateVelocity(vxtot, vytot, vztot);
      
#line 1143 "miniMD.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Main::_when_2() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_2();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->anyEntries.push_back(2);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_when_2_end() {
  _when_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_2() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_2()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 77 "/ccs/home/rrao/miniMD/baseline_charm/charm/ljs.ci"

        CkPrintf("[Main] Blocks initialized\n");
        block_proxy.run();
      
#line 1186 "miniMD.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_2_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Main::_when_3() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(3, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_3();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->anyEntries.push_back(3);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_when_3_end() {
  _when_4();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_3() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_3()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 81 "/ccs/home/rrao/miniMD/baseline_charm/charm/ljs.ci"

        printf("[Main] Blocks complete\n");
        fflush(stdout);
        kokkos_proxy.finalize();
      
#line 1229 "miniMD.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Main::_when_4() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(4, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_4();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->anyEntries.push_back(4);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_when_4_end() {
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_4() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_4()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 86 "/ccs/home/rrao/miniMD/baseline_charm/charm/ljs.ci"

        CkPrintf("[Main] Kokkos finalized\n");
        CkExit();
      
#line 1271 "miniMD.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_4_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::kokkosInitialized(){
  Closure_Main::kokkosInitialized_2_closure* genClosure = new Closure_Main::kokkosInitialized_2_closure();
  kokkosInitialized(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::kokkosInitialized(Closure_Main::kokkosInitialized_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::reduceVelocity(CkReductionMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::blockInitialized(){
  Closure_Main::blockInitialized_4_closure* genClosure = new Closure_Main::blockInitialized_4_closure();
  blockInitialized(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::blockInitialized(Closure_Main::blockInitialized_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(2, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::blockDone(){
  Closure_Main::blockDone_5_closure* genClosure = new Closure_Main::blockDone_5_closure();
  blockDone(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::blockDone(Closure_Main::blockDone_5_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(3, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(3);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_3(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::kokkosFinalized(){
  Closure_Main::kokkosFinalized_6_closure* genClosure = new Closure_Main::kokkosFinalized_6_closure();
  kokkosFinalized(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::kokkosFinalized(Closure_Main::kokkosFinalized_6_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(4, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(4);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_4(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(5,5));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
  __dep->addDepends(2,2);
  __dep->addDepends(3,3);
  __dep->addDepends(4,4);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_pup(PUP::er &p) {  // Potentially missing Main_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_register() { // Potentially missing Main_SDAG_CODE in your class definition?
  (void)_sdag_idx_Main_serial_0();
  (void)_sdag_idx_Main_serial_1();
  (void)_sdag_idx_Main_serial_2();
  (void)_sdag_idx_Main_serial_3();
  (void)_sdag_idx_Main_serial_4();
  PUPable_reg(SINGLE_ARG(Closure_Main::kokkosInitialized_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::blockInitialized_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::blockDone_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::kokkosFinalized_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::run_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::kokkosInitialized_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::blockInitialized_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::blockDone_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::kokkosFinalized_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::run_7_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_0", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_1() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_1() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_1", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_2() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_2() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_2", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_3() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_3() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_3", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_4() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_4() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_4", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: group KokkosManager: IrrGroup{
KokkosManager();
void initialize();
void finalize();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_KokkosManager::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: KokkosManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize();
 */
void CProxyElement_KokkosManager::initialize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxyElement_KokkosManager::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KokkosManager();
 */
CkGroupID CProxy_KokkosManager::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_KokkosManager::__idx, CkIndex_KokkosManager::idx_KokkosManager_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_KokkosManager::reg_KokkosManager_void() {
  int epidx = CkRegisterEp("KokkosManager()",
      reinterpret_cast<CkCallFnPtr>(_call_KokkosManager_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KokkosManager::_call_KokkosManager_void(void* impl_msg, void* impl_obj_void)
{
  KokkosManager* impl_obj = static_cast<KokkosManager*>(impl_obj_void);
  new (impl_obj_void) KokkosManager();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize();
 */
void CProxy_KokkosManager::initialize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KokkosManager::initialize(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KokkosManager::initialize(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KokkosManager::reg_initialize_void() {
  int epidx = CkRegisterEp("initialize()",
      reinterpret_cast<CkCallFnPtr>(_call_initialize_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KokkosManager::_call_initialize_void(void* impl_msg, void* impl_obj_void)
{
  KokkosManager* impl_obj = static_cast<KokkosManager*>(impl_obj_void);
  impl_obj->initialize();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KokkosManager::initialize_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxy_KokkosManager::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_KokkosManager::finalize(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_KokkosManager::finalize(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_KokkosManager::reg_finalize_void() {
  int epidx = CkRegisterEp("finalize()",
      reinterpret_cast<CkCallFnPtr>(_call_finalize_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_KokkosManager::_call_finalize_void(void* impl_msg, void* impl_obj_void)
{
  KokkosManager* impl_obj = static_cast<KokkosManager*>(impl_obj_void);
  impl_obj->finalize();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_KokkosManager::finalize_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: KokkosManager();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initialize();
 */
void CProxySection_KokkosManager::initialize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KokkosManager::idx_initialize_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KokkosManager::idx_initialize_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finalize();
 */
void CProxySection_KokkosManager::finalize(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_KokkosManager::idx_finalize_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_KokkosManager::idx_finalize_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_KokkosManager::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,KokkosManager::isIrreducible());
  // REG: KokkosManager();
  idx_KokkosManager_void();
  CkRegisterDefaultCtor(__idx, idx_KokkosManager_void());

  // REG: void initialize();
  idx_initialize_void();

  // REG: void finalize();
  idx_finalize_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup blockCommProxy: NodeGroup{
blockCommProxy();
void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
void setblockcommdone();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_blockCommProxy::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: blockCommProxy();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
 */
void CProxyElement_blockCommProxy::setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_Block &block, const CProxy_Comm &comm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcommdone();
 */
void CProxyElement_blockCommProxy::setblockcommdone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: blockCommProxy();
 */
CkGroupID CProxy_blockCommProxy::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_blockCommProxy::__idx, CkIndex_blockCommProxy::idx_blockCommProxy_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_blockCommProxy::reg_blockCommProxy_void() {
  int epidx = CkRegisterEp("blockCommProxy()",
      reinterpret_cast<CkCallFnPtr>(_call_blockCommProxy_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_blockCommProxy::_call_blockCommProxy_void(void* impl_msg, void* impl_obj_void)
{
  blockCommProxy* impl_obj = static_cast<blockCommProxy*>(impl_obj_void);
  new (impl_obj_void) blockCommProxy();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
 */
void CProxy_blockCommProxy::setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_Block &block, const CProxy_Comm &comm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_blockCommProxy::reg_setblockcomm_marshall2() {
  int epidx = CkRegisterEp("setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm)",
      reinterpret_cast<CkCallFnPtr>(_call_setblockcomm_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setblockcomm_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setblockcomm_marshall2);

  return epidx;
}

void CkIndex_blockCommProxy::_call_setblockcomm_marshall2(void* impl_msg, void* impl_obj_void)
{
  blockCommProxy* impl_obj = static_cast<blockCommProxy*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Block &block, const CProxy_Comm &comm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Block> block;
  implP|block;
  PUP::detail::TemporaryObjectHolder<CProxy_Comm> comm;
  implP|comm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setblockcomm(std::move(block.t), std::move(comm.t));
}
int CkIndex_blockCommProxy::_callmarshall_setblockcomm_marshall2(char* impl_buf, void* impl_obj_void) {
  blockCommProxy* impl_obj = static_cast<blockCommProxy*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_Block &block, const CProxy_Comm &comm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Block> block;
  implP|block;
  PUP::detail::TemporaryObjectHolder<CProxy_Comm> comm;
  implP|comm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setblockcomm(std::move(block.t), std::move(comm.t));
  return implP.size();
}
void CkIndex_blockCommProxy::_marshallmessagepup_setblockcomm_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Block &block, const CProxy_Comm &comm*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Block> block;
  implP|block;
  PUP::detail::TemporaryObjectHolder<CProxy_Comm> comm;
  implP|comm;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("block");
  implDestP|block;
  if (implDestP.hasComments()) implDestP.comment("comm");
  implDestP|comm;
}
PUPable_def(SINGLE_ARG(Closure_blockCommProxy::setblockcomm_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcommdone();
 */
void CProxy_blockCommProxy::setblockcommdone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_blockCommProxy::reg_setblockcommdone_void() {
  int epidx = CkRegisterEp("setblockcommdone()",
      reinterpret_cast<CkCallFnPtr>(_call_setblockcommdone_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_blockCommProxy::_call_setblockcommdone_void(void* impl_msg, void* impl_obj_void)
{
  blockCommProxy* impl_obj = static_cast<blockCommProxy*>(impl_obj_void);
  impl_obj->setblockcommdone();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_blockCommProxy::setblockcommdone_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: blockCommProxy();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
 */
void CProxySection_blockCommProxy::setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CProxy_Block &block, const CProxy_Comm &comm
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Block>::type>::type &)block;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Comm>::type>::type &)comm;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_blockCommProxy::idx_setblockcomm_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setblockcommdone();
 */
void CProxySection_blockCommProxy::setblockcommdone(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_blockCommProxy::idx_setblockcommdone_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_blockCommProxy::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,blockCommProxy::isIrreducible());
  // REG: blockCommProxy();
  idx_blockCommProxy_void();
  CkRegisterDefaultCtor(__idx, idx_blockCommProxy_void());

  // REG: void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
  idx_setblockcomm_marshall2();

  // REG: void setblockcommdone();
  idx_setblockcommdone_void();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerminiMD(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerblock();


  CkRegisterReadonly("main_proxy","CProxy_Main",sizeof(main_proxy),(void *) &main_proxy,__xlater_roPup_main_proxy);

  CkRegisterReadonly("kokkos_proxy","CProxy_KokkosManager",sizeof(kokkos_proxy),(void *) &kokkos_proxy,__xlater_roPup_kokkos_proxy);

  CkRegisterReadonly("block_proxy","CProxy_Block",sizeof(block_proxy),(void *) &block_proxy,__xlater_roPup_block_proxy);

  CkRegisterReadonly("comm_proxy","CProxy_Comm",sizeof(comm_proxy),(void *) &comm_proxy,__xlater_roPup_comm_proxy);

  CkRegisterReadonly("num_chares","int",sizeof(num_chares),(void *) &num_chares,__xlater_roPup_num_chares);

  CkRegisterReadonly("input_file","std::string",sizeof(input_file),(void *) &input_file,__xlater_roPup_input_file);

  CkRegisterReadonly("num_threads","int",sizeof(num_threads),(void *) &num_threads,__xlater_roPup_num_threads);

  CkRegisterReadonly("teams","int",sizeof(teams),(void *) &teams,__xlater_roPup_teams);

  CkRegisterReadonly("num_steps","int",sizeof(num_steps),(void *) &num_steps,__xlater_roPup_num_steps);

  CkRegisterReadonly("system_size","int",sizeof(system_size),(void *) &system_size,__xlater_roPup_system_size);

  CkRegisterReadonly("nx","int",sizeof(nx),(void *) &nx,__xlater_roPup_nx);

  CkRegisterReadonly("ny","int",sizeof(ny),(void *) &ny,__xlater_roPup_ny);

  CkRegisterReadonly("nz","int",sizeof(nz),(void *) &nz,__xlater_roPup_nz);

  CkRegisterReadonly("ntypes","int",sizeof(ntypes),(void *) &ntypes,__xlater_roPup_ntypes);

  CkRegisterReadonly("neighbor_size","int",sizeof(neighbor_size),(void *) &neighbor_size,__xlater_roPup_neighbor_size);

  CkRegisterReadonly("halfneigh","int",sizeof(halfneigh),(void *) &halfneigh,__xlater_roPup_halfneigh);

  CkRegisterReadonly("team_neigh","int",sizeof(team_neigh),(void *) &team_neigh,__xlater_roPup_team_neigh);

  CkRegisterReadonly("use_sse","int",sizeof(use_sse),(void *) &use_sse,__xlater_roPup_use_sse);

  CkRegisterReadonly("check_safeexchange","int",sizeof(check_safeexchange),(void *) &check_safeexchange,__xlater_roPup_check_safeexchange);

  CkRegisterReadonly("do_safeexchange","int",sizeof(do_safeexchange),(void *) &do_safeexchange,__xlater_roPup_do_safeexchange);

  CkRegisterReadonly("sort","int",sizeof(sort),(void *) &sort,__xlater_roPup_sort);

  CkRegisterReadonly("yaml_output","int",sizeof(yaml_output),(void *) &yaml_output,__xlater_roPup_yaml_output);

  CkRegisterReadonly("yaml_screen","int",sizeof(yaml_screen),(void *) &yaml_screen,__xlater_roPup_yaml_screen);

  CkRegisterReadonly("ghost_newton","int",sizeof(ghost_newton),(void *) &ghost_newton,__xlater_roPup_ghost_newton);

  CkRegisterReadonly("in_nx","int",sizeof(in_nx),(void *) &in_nx,__xlater_roPup_in_nx);

  CkRegisterReadonly("in_ny","int",sizeof(in_ny),(void *) &in_ny,__xlater_roPup_in_ny);

  CkRegisterReadonly("in_nz","int",sizeof(in_nz),(void *) &in_nz,__xlater_roPup_in_nz);

  CkRegisterReadonly("in_t_request","MMD_float",sizeof(in_t_request),(void *) &in_t_request,__xlater_roPup_in_t_request);

  CkRegisterReadonly("in_rho","MMD_float",sizeof(in_rho),(void *) &in_rho,__xlater_roPup_in_rho);

  CkRegisterReadonly("in_units","int",sizeof(in_units),(void *) &in_units,__xlater_roPup_in_units);

  CkRegisterReadonly("in_forcetype","ForceStyle",sizeof(in_forcetype),(void *) &in_forcetype,__xlater_roPup_in_forcetype);

  CkRegisterReadonly("in_epsilon","MMD_float",sizeof(in_epsilon),(void *) &in_epsilon,__xlater_roPup_in_epsilon);

  CkRegisterReadonly("in_sigma","MMD_float",sizeof(in_sigma),(void *) &in_sigma,__xlater_roPup_in_sigma);

  CkRegisterReadonly("in_datafile","std::string",sizeof(in_datafile),(void *) &in_datafile,__xlater_roPup_in_datafile);

  CkRegisterReadonly("in_ntimes","int",sizeof(in_ntimes),(void *) &in_ntimes,__xlater_roPup_in_ntimes);

  CkRegisterReadonly("in_dt","MMD_float",sizeof(in_dt),(void *) &in_dt,__xlater_roPup_in_dt);

  CkRegisterReadonly("in_neigh_every","int",sizeof(in_neigh_every),(void *) &in_neigh_every,__xlater_roPup_in_neigh_every);

  CkRegisterReadonly("in_force_cut","MMD_float",sizeof(in_force_cut),(void *) &in_force_cut,__xlater_roPup_in_force_cut);

  CkRegisterReadonly("in_neigh_cut","MMD_float",sizeof(in_neigh_cut),(void *) &in_neigh_cut,__xlater_roPup_in_neigh_cut);

  CkRegisterReadonly("in_thermo_nstat","int",sizeof(in_thermo_nstat),(void *) &in_thermo_nstat,__xlater_roPup_in_thermo_nstat);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void kokkosInitialized();
void reduceVelocity(CkReductionMsg* impl_msg);
void blockInitialized();
void blockDone();
void kokkosFinalized();
void run();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: group KokkosManager: IrrGroup{
KokkosManager();
void initialize();
void finalize();
};
*/
  CkIndex_KokkosManager::__register("KokkosManager", sizeof(KokkosManager));

/* REG: nodegroup blockCommProxy: NodeGroup{
blockCommProxy();
void setblockcomm(const CProxy_Block &block, const CProxy_Comm &comm);
void setblockcommdone();
};
*/
  CkIndex_blockCommProxy::__register("blockCommProxy", sizeof(blockCommProxy));

}
extern "C" void CkRegisterMainModule(void) {
  _registerminiMD();
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
void CBase_KokkosManager::virtual_pup(PUP::er &p) {
    recursive_pup<KokkosManager>(dynamic_cast<KokkosManager*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_blockCommProxy::virtual_pup(PUP::er &p) {
    recursive_pup<blockCommProxy>(dynamic_cast<blockCommProxy*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
