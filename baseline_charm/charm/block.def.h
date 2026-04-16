
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::init_2_closure : public SDAG::Closure {
      

      init_2_closure() {
        init();
      }
      init_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~init_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(init_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::contCreateVelocity_3_closure : public SDAG::Closure {
            double vxtot;
            double vytot;
            double vztot;


      contCreateVelocity_3_closure() {
        init();
      }
      contCreateVelocity_3_closure(CkMigrateMessage*) {
        init();
      }
            double & getP0() { return vxtot;}
            double & getP1() { return vytot;}
            double & getP2() { return vztot;}
      void pup(PUP::er& __p) {
        __p | vxtot;
        __p | vytot;
        __p | vztot;
        packClosure(__p);
      }
      virtual ~contCreateVelocity_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(contCreateVelocity_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::run_4_closure : public SDAG::Closure {
      

      run_4_closure() {
        init();
      }
      run_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~run_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::run_neighbour_build_5_closure : public SDAG::Closure {
            CkCallback cb;


      run_neighbour_build_5_closure() {
        init();
      }
      run_neighbour_build_5_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~run_neighbour_build_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(run_neighbour_build_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::reducesum_6_closure : public SDAG::Closure {
            int iter;
            MMD_float temp;


      reducesum_6_closure() {
        init();
      }
      reducesum_6_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iter;}
            MMD_float & getP1() { return temp;}
      void pup(PUP::er& __p) {
        __p | iter;
        __p | temp;
        packClosure(__p);
      }
      virtual ~reducesum_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(reducesum_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::temperature_allreduce_7_closure : public SDAG::Closure {
            CkCallback cb;


      temperature_allreduce_7_closure() {
        init();
      }
      temperature_allreduce_7_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~temperature_allreduce_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(temperature_allreduce_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::temperature_recv_8_closure : public SDAG::Closure {
            int iter;
            double t1;


      temperature_recv_8_closure() {
        init();
      }
      temperature_recv_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iter;}
            double & getP1() { return t1;}
      void pup(PUP::er& __p) {
        __p | iter;
        __p | t1;
        packClosure(__p);
      }
      virtual ~temperature_recv_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(temperature_recv_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::energy_allreduce_9_closure : public SDAG::Closure {
            CkCallback cb;


      energy_allreduce_9_closure() {
        init();
      }
      energy_allreduce_9_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~energy_allreduce_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(energy_allreduce_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::pressure_allreduce_11_closure : public SDAG::Closure {
            CkCallback cb;


      pressure_allreduce_11_closure() {
        init();
      }
      pressure_allreduce_11_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~pressure_allreduce_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(pressure_allreduce_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::mark_start_13_closure : public SDAG::Closure {
            CkCallback cb;


      mark_start_13_closure() {
        init();
      }
      mark_start_13_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~mark_start_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(mark_start_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::start_iterations_14_closure : public SDAG::Closure {
      

      start_iterations_14_closure() {
        init();
      }
      start_iterations_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_iterations_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_iterations_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::markstart_recv_15_closure : public SDAG::Closure {
      

      markstart_recv_15_closure() {
        init();
      }
      markstart_recv_15_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~markstart_recv_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(markstart_recv_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::mark_done_16_closure : public SDAG::Closure {
            CkCallback cb;


      mark_done_16_closure() {
        init();
      }
      mark_done_16_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~mark_done_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(mark_done_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::end_iterations_17_closure : public SDAG::Closure {
      

      end_iterations_17_closure() {
        init();
      }
      end_iterations_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~end_iterations_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(end_iterations_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::markdone_recv_18_closure : public SDAG::Closure {
      

      markdone_recv_18_closure() {
        init();
      }
      markdone_recv_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~markdone_recv_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(markdone_recv_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_notify_recv_ready_19_closure : public SDAG::Closure {
            int iter;
            int idim;
            CkCallback cb;


      exchange_notify_recv_ready_19_closure() {
        init();
      }
      exchange_notify_recv_ready_19_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iter;}
            int & getP1() { return idim;}
            CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | iter;
        __p | idim;
        __p | cb;
        packClosure(__p);
      }
      virtual ~exchange_notify_recv_ready_19_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_notify_recv_ready_19_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_recv_ready_wait_20_closure : public SDAG::Closure {
            int idim;
            CkCallback cb;


      exchange_recv_ready_wait_20_closure() {
        init();
      }
      exchange_recv_ready_wait_20_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb;
        packClosure(__p);
      }
      virtual ~exchange_recv_ready_wait_20_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_recv_ready_wait_20_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_send_1_21_closure : public SDAG::Closure {
            int idim;
            CkCallback cb_thread;


      exchange_2_send_1_21_closure() {
        init();
      }
      exchange_2_send_1_21_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb_thread;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb_thread;
        packClosure(__p);
      }
      virtual ~exchange_2_send_1_21_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_2_send_1_21_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_send_2_22_closure : public SDAG::Closure {
            int idim;
            CkCallback cb_thread;


      exchange_2_send_2_22_closure() {
        init();
      }
      exchange_2_send_2_22_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb_thread;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb_thread;
        packClosure(__p);
      }
      virtual ~exchange_2_send_2_22_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_2_send_2_22_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_recv_1_wait_23_closure : public SDAG::Closure {
            int idim;
            CkCallback cb;


      exchange_2_recv_1_wait_23_closure() {
        init();
      }
      exchange_2_recv_1_wait_23_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb;
        packClosure(__p);
      }
      virtual ~exchange_2_recv_1_wait_23_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_2_recv_1_wait_23_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_recv_2_wait_24_closure : public SDAG::Closure {
            int idim;
            CkCallback cb;


      exchange_2_recv_2_wait_24_closure() {
        init();
      }
      exchange_2_recv_2_wait_24_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb;
        packClosure(__p);
      }
      virtual ~exchange_2_recv_2_wait_24_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_2_recv_2_wait_24_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::send_done_wait_25_closure : public SDAG::Closure {
            int idim;
            CkCallback cb;


      send_done_wait_25_closure() {
        init();
      }
      send_done_wait_25_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return idim;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | idim;
        __p | cb;
        packClosure(__p);
      }
      virtual ~send_done_wait_25_closure() {
      }
      PUPable_decl(SINGLE_ARG(send_done_wait_25_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_1_recv_1_26_closure : public SDAG::Closure {
            int ref;


      exchange_1_recv_1_26_closure() {
        init();
      }
      exchange_1_recv_1_26_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ref;}
      void pup(PUP::er& __p) {
        __p | ref;
        packClosure(__p);
      }
      virtual ~exchange_1_recv_1_26_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_1_recv_1_26_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_1_recv_2_27_closure : public SDAG::Closure {
            int ref;


      exchange_1_recv_2_27_closure() {
        init();
      }
      exchange_1_recv_2_27_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ref;}
      void pup(PUP::er& __p) {
        __p | ref;
        packClosure(__p);
      }
      virtual ~exchange_1_recv_2_27_closure() {
      }
      PUPable_decl(SINGLE_ARG(exchange_1_recv_2_27_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_recv_1_28_closure : public SDAG::Closure {
            int ref;
            size_t size;
            bool is_dummy;
      int num_device_rdma_fields;
      CkDeviceBuffer deviceBuffer_data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      exchange_2_recv_1_28_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      exchange_2_recv_1_28_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            size_t & getP1() { return size;}
            bool & getP2() { return is_dummy;}
      int & getP3() { return num_device_rdma_fields; }
      CkDeviceBuffer & getP4() { return deviceBuffer_data; }
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        __p | is_dummy;
        char *impl_buf_device = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_device_rdma_fields;
        if (__p.isPacking()) {
          deviceBuffer_data.ptr = (void *)((char *)(deviceBuffer_data.ptr) - impl_buf_device);
        }
        __p | deviceBuffer_data;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  deviceBuffer_data.ptr = (void *)(impl_buf + (size_t)(deviceBuffer_data.ptr));
  implP|num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<bool> is_dummy;
  implP|is_dummy;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~exchange_2_recv_1_28_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(exchange_2_recv_1_28_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::exchange_2_recv_2_29_closure : public SDAG::Closure {
            int ref;
            size_t size;
            bool is_dummy;
      int num_device_rdma_fields;
      CkDeviceBuffer deviceBuffer_data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      exchange_2_recv_2_29_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      exchange_2_recv_2_29_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            size_t & getP1() { return size;}
            bool & getP2() { return is_dummy;}
      int & getP3() { return num_device_rdma_fields; }
      CkDeviceBuffer & getP4() { return deviceBuffer_data; }
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        __p | is_dummy;
        char *impl_buf_device = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_device_rdma_fields;
        if (__p.isPacking()) {
          deviceBuffer_data.ptr = (void *)((char *)(deviceBuffer_data.ptr) - impl_buf_device);
        }
        __p | deviceBuffer_data;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  deviceBuffer_data.ptr = (void *)(impl_buf + (size_t)(deviceBuffer_data.ptr));
  implP|num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<bool> is_dummy;
  implP|is_dummy;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~exchange_2_recv_2_29_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(exchange_2_recv_2_29_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::borders_notify_recv_ready_30_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      borders_notify_recv_ready_30_closure() {
        init();
      }
      borders_notify_recv_ready_30_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~borders_notify_recv_ready_30_closure() {
      }
      PUPable_decl(SINGLE_ARG(borders_notify_recv_ready_30_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::borders_recv_ready_wait_31_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      borders_recv_ready_wait_31_closure() {
        init();
      }
      borders_recv_ready_wait_31_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~borders_recv_ready_wait_31_closure() {
      }
      PUPable_decl(SINGLE_ARG(borders_recv_ready_wait_31_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::borders_2_32_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      borders_2_32_closure() {
        init();
      }
      borders_2_32_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~borders_2_32_closure() {
      }
      PUPable_decl(SINGLE_ARG(borders_2_32_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::borders_recv_1_33_closure : public SDAG::Closure {
            int ref;


      borders_recv_1_33_closure() {
        init();
      }
      borders_recv_1_33_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ref;}
      void pup(PUP::er& __p) {
        __p | ref;
        packClosure(__p);
      }
      virtual ~borders_recv_1_33_closure() {
      }
      PUPable_decl(SINGLE_ARG(borders_recv_1_33_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::borders_recv_2_34_closure : public SDAG::Closure {
            int ref;
            size_t size;
      int num_device_rdma_fields;
      CkDeviceBuffer deviceBuffer_data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      borders_recv_2_34_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      borders_recv_2_34_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            size_t & getP1() { return size;}
      int & getP2() { return num_device_rdma_fields; }
      CkDeviceBuffer & getP3() { return deviceBuffer_data; }
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        char *impl_buf_device = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_device_rdma_fields;
        if (__p.isPacking()) {
          deviceBuffer_data.ptr = (void *)((char *)(deviceBuffer_data.ptr) - impl_buf_device);
        }
        __p | deviceBuffer_data;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  deviceBuffer_data.ptr = (void *)(impl_buf + (size_t)(deviceBuffer_data.ptr));
  implP|num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~borders_recv_2_34_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(borders_recv_2_34_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_notify_recv_ready_35_closure : public SDAG::Closure {
            int iter;
            int iswap;
            CkCallback cb;


      comms_notify_recv_ready_35_closure() {
        init();
      }
      comms_notify_recv_ready_35_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iter;}
            int & getP1() { return iswap;}
            CkCallback & getP2() { return cb;}
      void pup(PUP::er& __p) {
        __p | iter;
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~comms_notify_recv_ready_35_closure() {
      }
      PUPable_decl(SINGLE_ARG(comms_notify_recv_ready_35_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_recv_ready_wait_36_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      comms_recv_ready_wait_36_closure() {
        init();
      }
      comms_recv_ready_wait_36_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~comms_recv_ready_wait_36_closure() {
      }
      PUPable_decl(SINGLE_ARG(comms_recv_ready_wait_36_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_recv_1_37_closure : public SDAG::Closure {
            int ref;


      comms_recv_1_37_closure() {
        init();
      }
      comms_recv_1_37_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return ref;}
      void pup(PUP::er& __p) {
        __p | ref;
        packClosure(__p);
      }
      virtual ~comms_recv_1_37_closure() {
      }
      PUPable_decl(SINGLE_ARG(comms_recv_1_37_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_send_38_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      comms_send_38_closure() {
        init();
      }
      comms_send_38_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~comms_send_38_closure() {
      }
      PUPable_decl(SINGLE_ARG(comms_send_38_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_recv_wait_39_closure : public SDAG::Closure {
            int iswap;
            CkCallback cb;


      comms_recv_wait_39_closure() {
        init();
      }
      comms_recv_wait_39_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return iswap;}
            CkCallback & getP1() { return cb;}
      void pup(PUP::er& __p) {
        __p | iswap;
        __p | cb;
        packClosure(__p);
      }
      virtual ~comms_recv_wait_39_closure() {
      }
      PUPable_decl(SINGLE_ARG(comms_recv_wait_39_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comms_recv_40_closure : public SDAG::Closure {
            int ref;
            size_t size;
      int num_device_rdma_fields;
      CkDeviceBuffer deviceBuffer_data;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      comms_recv_40_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      comms_recv_40_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            size_t & getP1() { return size;}
      int & getP2() { return num_device_rdma_fields; }
      CkDeviceBuffer & getP3() { return deviceBuffer_data; }
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        char *impl_buf_device = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
        __p | num_device_rdma_fields;
        if (__p.isPacking()) {
          deviceBuffer_data.ptr = (void *)((char *)(deviceBuffer_data.ptr) - impl_buf_device);
        }
        __p | deviceBuffer_data;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  deviceBuffer_data.ptr = (void *)(impl_buf + (size_t)(deviceBuffer_data.ptr));
  implP|num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
          impl_buf+=CK_ALIGN(implP.size(),16);
        }
      }
      virtual ~comms_recv_40_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(comms_recv_40_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::send_done_41_closure : public SDAG::Closure {
      

      send_done_41_closure() {
        init();
      }
      send_done_41_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~send_done_41_closure() {
      }
      PUPable_decl(SINGLE_ARG(send_done_41_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comm_all_42_closure : public SDAG::Closure {
            CkCallback cb;


      comm_all_42_closure() {
        init();
      }
      comm_all_42_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~comm_all_42_closure() {
      }
      PUPable_decl(SINGLE_ARG(comm_all_42_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comm_all_recv_43_closure : public SDAG::Closure {
            int ref;
            char *data;
            size_t size;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      comm_all_recv_43_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      comm_all_recv_43_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            char *& getP1() { return data;}
            size_t & getP2() { return size;}
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (char *)(impl_buf+impl_off_data);
        }
      }
      virtual ~comm_all_recv_43_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(comm_all_recv_43_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comm_rev_all_44_closure : public SDAG::Closure {
            CkCallback cb;


      comm_rev_all_44_closure() {
        init();
      }
      comm_rev_all_44_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~comm_rev_all_44_closure() {
      }
      PUPable_decl(SINGLE_ARG(comm_rev_all_44_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::comm_rev_all_recv_45_closure : public SDAG::Closure {
            int ref;
            char *data;
            size_t size;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      comm_rev_all_recv_45_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      comm_rev_all_recv_45_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return ref;}
            char *& getP1() { return data;}
            size_t & getP2() { return size;}
      void pup(PUP::er& __p) {
        __p | ref;
        __p | size;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
          impl_buf+=CK_ALIGN(implP.size(),16);
          data = (char *)(impl_buf+impl_off_data);
        }
      }
      virtual ~comm_rev_all_recv_45_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(comm_rev_all_recv_45_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Block: ArrayElement{
Block();
void init();
threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
threaded void run();
threaded void run_neighbour_build(const CkCallback &cb);
void reducesum(int iter, const MMD_float &temp);
void temperature_allreduce(const CkCallback &cb);
void temperature_recv(int iter, double t1);
void energy_allreduce(const CkCallback &cb);
void energy_recv(CkReductionMsg* impl_msg);
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
void mark_start(const CkCallback &cb);
void start_iterations();
void markstart_recv();
void mark_done(const CkCallback &cb);
void end_iterations();
void markdone_recv();
void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
void exchange_recv_ready_wait(int idim, const CkCallback &cb);
void exchange_2_send_1(int idim, const CkCallback &cb_thread);
void exchange_2_send_2(int idim, const CkCallback &cb_thread);
void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
void send_done_wait(int idim, const CkCallback &cb);
void exchange_1_recv_1(int ref);
void exchange_1_recv_2(int ref);
void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
void borders_notify_recv_ready(int iswap, const CkCallback &cb);
void borders_recv_ready_wait(int iswap, const CkCallback &cb);
void borders_2(int iswap, const CkCallback &cb);
void borders_recv_1(int ref);
void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
void comms_recv_ready_wait(int iswap, const CkCallback &cb);
void comms_recv_1(int ref);
void comms_send(int iswap, const CkCallback &cb);
void comms_recv_wait(int iswap, const CkCallback &cb);
void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
void send_done();
void comm_all(const CkCallback &cb);
void comm_all_recv(int ref, const char *data, const size_t &size);
void comm_rev_all(const CkCallback &cb);
void comm_rev_all_recv(int ref, const char *data, const size_t &size);
Block(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Block::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Block::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Block::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Block::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Block::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Block::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Block::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block();
 */
void CProxyElement_Block::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Block::idx_Block_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxyElement_Block::init(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_init_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
void CProxyElement_Block::contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double vxtot, double vytot, double vztot
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|vxtot;
    implP|vytot;
    implP|vztot;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|vxtot;
    implP|vytot;
    implP|vztot;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_contCreateVelocity_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxyElement_Block::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run_neighbour_build(const CkCallback &cb);
 */
void CProxyElement_Block::run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_run_neighbour_build_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reducesum(int iter, const MMD_float &temp);
 */
void CProxyElement_Block::reducesum(int iter, const MMD_float &temp, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, const MMD_float &temp
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_reducesum_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_allreduce(const CkCallback &cb);
 */
void CProxyElement_Block::temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_temperature_allreduce_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_recv(int iter, double t1);
 */
void CProxyElement_Block::temperature_recv(int iter, double t1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, double t1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|t1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|t1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_temperature_recv_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_allreduce(const CkCallback &cb);
 */
void CProxyElement_Block::energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_energy_allreduce_marshall9(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_recv(CkReductionMsg* impl_msg);
 */
void CProxyElement_Block::energy_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_energy_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxyElement_Block::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_pressure_allreduce_marshall11(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxyElement_Block::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pressure_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_start(const CkCallback &cb);
 */
void CProxyElement_Block::mark_start(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_mark_start_marshall13(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_iterations();
 */
void CProxyElement_Block::start_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_start_iterations_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markstart_recv();
 */
void CProxyElement_Block::markstart_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_markstart_recv_void(),0);
}
void CkIndex_Block::_call_redn_wrapper_markstart_recv_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->markstart_recv();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_done(const CkCallback &cb);
 */
void CProxyElement_Block::mark_done(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_mark_done_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void end_iterations();
 */
void CProxyElement_Block::end_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_end_iterations_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markdone_recv();
 */
void CProxyElement_Block::markdone_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_markdone_recv_void(),0);
}
void CkIndex_Block::_call_redn_wrapper_markdone_recv_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->markdone_recv();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
 */
void CProxyElement_Block::exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_notify_recv_ready_marshall19(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_recv_ready_wait(int idim, const CkCallback &cb);
 */
void CProxyElement_Block::exchange_recv_ready_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_recv_ready_wait_marshall20(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_1(int idim, const CkCallback &cb_thread);
 */
void CProxyElement_Block::exchange_2_send_1(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_send_1_marshall21(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_2(int idim, const CkCallback &cb_thread);
 */
void CProxyElement_Block::exchange_2_send_2(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_send_2_marshall22(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
 */
void CProxyElement_Block::exchange_2_recv_1_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_wait_marshall23(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
 */
void CProxyElement_Block::exchange_2_recv_2_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_wait_marshall24(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done_wait(int idim, const CkCallback &cb);
 */
void CProxyElement_Block::send_done_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_send_done_wait_marshall25(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_1(int ref);
 */
void CProxyElement_Block::exchange_1_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_1_recv_1_marshall26(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_2(int ref);
 */
void CProxyElement_Block::exchange_1_recv_2(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_1_recv_2_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxyElement_Block::exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  int impl_num_device_rdma_fields = 1;
  int dest_pe;
  dest_pe = ckLocalBranch()->lastKnown(ckGetIndex());
  CkDeviceBuffer* device_buffers[1];
  deviceBuffer_data.cnt = sizeof(char)*(size);
  device_buffers[0] = &deviceBuffer_data;
  CkRdmaDeviceOnSender(dest_pe, impl_num_device_rdma_fields, device_buffers);
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_DEVICE_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_marshall28(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxyElement_Block::exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  int impl_num_device_rdma_fields = 1;
  int dest_pe;
  dest_pe = ckLocalBranch()->lastKnown(ckGetIndex());
  CkDeviceBuffer* device_buffers[1];
  deviceBuffer_data.cnt = sizeof(char)*(size);
  device_buffers[0] = &deviceBuffer_data;
  CkRdmaDeviceOnSender(dest_pe, impl_num_device_rdma_fields, device_buffers);
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_DEVICE_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_marshall29(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_notify_recv_ready(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::borders_notify_recv_ready(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_notify_recv_ready_marshall30(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::borders_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_ready_wait_marshall31(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_2(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_2_marshall32(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_1(int ref);
 */
void CProxyElement_Block::borders_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_1_marshall33(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxyElement_Block::borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  int impl_num_device_rdma_fields = 1;
  int dest_pe;
  dest_pe = ckLocalBranch()->lastKnown(ckGetIndex());
  CkDeviceBuffer* device_buffers[1];
  deviceBuffer_data.cnt = sizeof(char)*(size);
  device_buffers[0] = &deviceBuffer_data;
  CkRdmaDeviceOnSender(dest_pe, impl_num_device_rdma_fields, device_buffers);
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_DEVICE_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_2_marshall34(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_notify_recv_ready_marshall35(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::comms_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_ready_wait_marshall36(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_1(int ref);
 */
void CProxyElement_Block::comms_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_1_marshall37(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_send(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::comms_send(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_send_marshall38(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_wait(int iswap, const CkCallback &cb);
 */
void CProxyElement_Block::comms_recv_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_wait_marshall39(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxyElement_Block::comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  int impl_num_device_rdma_fields = 1;
  int dest_pe;
  dest_pe = ckLocalBranch()->lastKnown(ckGetIndex());
  CkDeviceBuffer* device_buffers[1];
  deviceBuffer_data.cnt = sizeof(char)*(size);
  device_buffers[0] = &deviceBuffer_data;
  CkRdmaDeviceOnSender(dest_pe, impl_num_device_rdma_fields, device_buffers);
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_num_device_rdma_fields;
    implP|deviceBuffer_data;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  CMI_ZC_MSGTYPE((char *)UsrToEnv(impl_msg)) = CMK_ZC_DEVICE_MSG;
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_marshall40(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done();
 */
void CProxyElement_Block::send_done(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_send_done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all(const CkCallback &cb);
 */
void CProxyElement_Block::comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_comm_all_marshall42(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxyElement_Block::comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comm_all_recv_marshall43(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all(const CkCallback &cb);
 */
void CProxyElement_Block::comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_comm_rev_all_marshall44(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxyElement_Block::comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comm_rev_all_recv_marshall45(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block();
 */
CkArrayID CProxy_Block::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_void(), opts);
  return gId;
}
void CProxy_Block::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Block::idx_Block_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Block::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_void(), opts);
  return gId;
}
void CProxy_Block::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Block::idx_Block_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Block::reg_Block_void() {
  int epidx = CkRegisterEp("Block()",
      reinterpret_cast<CkCallFnPtr>(_call_Block_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_Block_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  new (impl_obj_void) Block();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxy_Block::init(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_init_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_init_void() {
  int epidx = CkRegisterEp("init()",
      reinterpret_cast<CkCallFnPtr>(_call_init_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_init_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->init();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::init_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
void CProxy_Block::contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double vxtot, double vytot, double vztot
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|vxtot;
    implP|vytot;
    implP|vztot;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|vxtot;
    implP|vytot;
    implP|vztot;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_contCreateVelocity_marshall3(),0);
}

// Entry point registration function
int CkIndex_Block::reg_contCreateVelocity_marshall3() {
  int epidx = CkRegisterEp("contCreateVelocity(double vxtot, double vytot, double vztot)",
      reinterpret_cast<CkCallFnPtr>(_call_contCreateVelocity_marshall3), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_contCreateVelocity_marshall3);

  return epidx;
}

void CkIndex_Block::_call_contCreateVelocity_marshall3(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_contCreateVelocity_marshall3, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Block::_callthr_contCreateVelocity_marshall3(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Block *impl_obj = static_cast<Block *>(impl_obj_void);
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double vxtot, double vytot, double vztot*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> vxtot;
  implP|vxtot;
  PUP::detail::TemporaryObjectHolder<double> vytot;
  implP|vytot;
  PUP::detail::TemporaryObjectHolder<double> vztot;
  implP|vztot;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->contCreateVelocity(std::move(vxtot.t), std::move(vytot.t), std::move(vztot.t));
  delete impl_msg_typed;
}
void CkIndex_Block::_marshallmessagepup_contCreateVelocity_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: double vxtot, double vytot, double vztot*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<double> vxtot;
  implP|vxtot;
  PUP::detail::TemporaryObjectHolder<double> vytot;
  implP|vytot;
  PUP::detail::TemporaryObjectHolder<double> vztot;
  implP|vztot;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("vxtot");
  implDestP|vxtot;
  if (implDestP.hasComments()) implDestP.comment("vytot");
  implDestP|vytot;
  if (implDestP.hasComments()) implDestP.comment("vztot");
  implDestP|vztot;
}
PUPable_def(SINGLE_ARG(Closure_Block::contCreateVelocity_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxy_Block::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_run_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_run_void() {
  int epidx = CkRegisterEp("run()",
      reinterpret_cast<CkCallFnPtr>(_call_run_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_run_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_run_void, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Block::_callthr_run_void(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Block *impl_obj = static_cast<Block *>(impl_obj_void);
  delete impl_arg;
  impl_obj->run();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::run_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run_neighbour_build(const CkCallback &cb);
 */
void CProxy_Block::run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_run_neighbour_build_marshall5(),0);
}

// Entry point registration function
int CkIndex_Block::reg_run_neighbour_build_marshall5() {
  int epidx = CkRegisterEp("run_neighbour_build(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_run_neighbour_build_marshall5), CkMarshallMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_run_neighbour_build_marshall5);

  return epidx;
}

void CkIndex_Block::_call_run_neighbour_build_marshall5(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_run_neighbour_build_marshall5, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Block::_callthr_run_neighbour_build_marshall5(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Block *impl_obj = static_cast<Block *>(impl_obj_void);
  delete impl_arg;
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->run_neighbour_build(std::move(cb.t));
  delete impl_msg_typed;
}
void CkIndex_Block::_marshallmessagepup_run_neighbour_build_marshall5(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::run_neighbour_build_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reducesum(int iter, const MMD_float &temp);
 */
void CProxy_Block::reducesum(int iter, const MMD_float &temp, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, const MMD_float &temp
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_reducesum_marshall6(),0);
}

// Entry point registration function
int CkIndex_Block::reg_reducesum_marshall6() {
  int epidx = CkRegisterEp("reducesum(int iter, const MMD_float &temp)",
      reinterpret_cast<CkCallFnPtr>(_call_reducesum_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reducesum_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reducesum_marshall6);

  return epidx;
}

void CkIndex_Block::_call_reducesum_marshall6(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::reducesum_6_closure* genClosure = new Closure_Block::reducesum_6_closure();
  implP|genClosure->iter;
  implP|genClosure->temp;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->reducesum(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_reducesum_marshall6(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::reducesum_6_closure* genClosure = new Closure_Block::reducesum_6_closure();
  implP|genClosure->iter;
  implP|genClosure->temp;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->reducesum(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_reducesum_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iter, const MMD_float &temp*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iter;
  implP|iter;
  PUP::detail::TemporaryObjectHolder<MMD_float> temp;
  implP|temp;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iter");
  implDestP|iter;
  if (implDestP.hasComments()) implDestP.comment("temp");
  implDestP|temp;
}
PUPable_def(SINGLE_ARG(Closure_Block::reducesum_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_allreduce(const CkCallback &cb);
 */
void CProxy_Block::temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_temperature_allreduce_marshall7(),0);
}

// Entry point registration function
int CkIndex_Block::reg_temperature_allreduce_marshall7() {
  int epidx = CkRegisterEp("temperature_allreduce(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_temperature_allreduce_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_temperature_allreduce_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_temperature_allreduce_marshall7);

  return epidx;
}

void CkIndex_Block::_call_temperature_allreduce_marshall7(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::temperature_allreduce_7_closure* genClosure = new Closure_Block::temperature_allreduce_7_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_temperature_allreduce(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_temperature_allreduce_marshall7(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::temperature_allreduce_7_closure* genClosure = new Closure_Block::temperature_allreduce_7_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_temperature_allreduce(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_temperature_allreduce_marshall7(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::temperature_allreduce_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_recv(int iter, double t1);
 */
void CProxy_Block::temperature_recv(int iter, double t1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, double t1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|t1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|t1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_temperature_recv_marshall8(),0);
}

// Entry point registration function
int CkIndex_Block::reg_temperature_recv_marshall8() {
  int epidx = CkRegisterEp("temperature_recv(int iter, double t1)",
      reinterpret_cast<CkCallFnPtr>(_call_temperature_recv_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_temperature_recv_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_temperature_recv_marshall8);

  return epidx;
}

void CkIndex_Block::_call_temperature_recv_marshall8(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::temperature_recv_8_closure* genClosure = new Closure_Block::temperature_recv_8_closure();
  implP|genClosure->iter;
  implP|genClosure->t1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->temperature_recv(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_temperature_recv_marshall8(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::temperature_recv_8_closure* genClosure = new Closure_Block::temperature_recv_8_closure();
  implP|genClosure->iter;
  implP|genClosure->t1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->temperature_recv(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_temperature_recv_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iter, double t1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iter;
  implP|iter;
  PUP::detail::TemporaryObjectHolder<double> t1;
  implP|t1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iter");
  implDestP|iter;
  if (implDestP.hasComments()) implDestP.comment("t1");
  implDestP|t1;
}
PUPable_def(SINGLE_ARG(Closure_Block::temperature_recv_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_allreduce(const CkCallback &cb);
 */
void CProxy_Block::energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_energy_allreduce_marshall9(),0);
}

// Entry point registration function
int CkIndex_Block::reg_energy_allreduce_marshall9() {
  int epidx = CkRegisterEp("energy_allreduce(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_energy_allreduce_marshall9), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_energy_allreduce_marshall9);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_energy_allreduce_marshall9);

  return epidx;
}

void CkIndex_Block::_call_energy_allreduce_marshall9(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::energy_allreduce_9_closure* genClosure = new Closure_Block::energy_allreduce_9_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_energy_allreduce(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_energy_allreduce_marshall9(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::energy_allreduce_9_closure* genClosure = new Closure_Block::energy_allreduce_9_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_energy_allreduce(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_energy_allreduce_marshall9(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::energy_allreduce_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_recv(CkReductionMsg* impl_msg);
 */
void CProxy_Block::energy_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_energy_recv_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_Block::reg_energy_recv_CkReductionMsg() {
  int epidx = CkRegisterEp("energy_recv(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_energy_recv_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Block::_call_energy_recv_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->energy_recv((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxy_Block::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_pressure_allreduce_marshall11(),0);
}

// Entry point registration function
int CkIndex_Block::reg_pressure_allreduce_marshall11() {
  int epidx = CkRegisterEp("pressure_allreduce(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_pressure_allreduce_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_pressure_allreduce_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_pressure_allreduce_marshall11);

  return epidx;
}

void CkIndex_Block::_call_pressure_allreduce_marshall11(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pressure_allreduce_11_closure* genClosure = new Closure_Block::pressure_allreduce_11_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_pressure_allreduce_marshall11(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::pressure_allreduce_11_closure* genClosure = new Closure_Block::pressure_allreduce_11_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_pressure_allreduce_marshall11(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::pressure_allreduce_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxy_Block::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_pressure_recv_CkReductionMsg(),0);
}

// Entry point registration function
int CkIndex_Block::reg_pressure_recv_CkReductionMsg() {
  int epidx = CkRegisterEp("pressure_recv(CkReductionMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_pressure_recv_CkReductionMsg), CMessage_CkReductionMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkReductionMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Block::_call_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->pressure_recv((CkReductionMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_start(const CkCallback &cb);
 */
void CProxy_Block::mark_start(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_mark_start_marshall13(),0);
}

// Entry point registration function
int CkIndex_Block::reg_mark_start_marshall13() {
  int epidx = CkRegisterEp("mark_start(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_mark_start_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_mark_start_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_mark_start_marshall13);

  return epidx;
}

void CkIndex_Block::_call_mark_start_marshall13(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::mark_start_13_closure* genClosure = new Closure_Block::mark_start_13_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_mark_start(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_mark_start_marshall13(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::mark_start_13_closure* genClosure = new Closure_Block::mark_start_13_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_mark_start(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_mark_start_marshall13(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::mark_start_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_iterations();
 */
void CProxy_Block::start_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_start_iterations_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_start_iterations_void() {
  int epidx = CkRegisterEp("start_iterations()",
      reinterpret_cast<CkCallFnPtr>(_call_start_iterations_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_start_iterations_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->start_iterations();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::start_iterations_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markstart_recv();
 */
void CProxy_Block::markstart_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_markstart_recv_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_markstart_recv_void() {
  int epidx = CkRegisterEp("markstart_recv()",
      reinterpret_cast<CkCallFnPtr>(_call_markstart_recv_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Block::reg_redn_wrapper_markstart_recv_void() {
  return CkRegisterEp("redn_wrapper_markstart_recv(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_markstart_recv_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Block::_call_markstart_recv_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->markstart_recv();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::markstart_recv_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_done(const CkCallback &cb);
 */
void CProxy_Block::mark_done(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_mark_done_marshall16(),0);
}

// Entry point registration function
int CkIndex_Block::reg_mark_done_marshall16() {
  int epidx = CkRegisterEp("mark_done(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_mark_done_marshall16), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_mark_done_marshall16);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_mark_done_marshall16);

  return epidx;
}

void CkIndex_Block::_call_mark_done_marshall16(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::mark_done_16_closure* genClosure = new Closure_Block::mark_done_16_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_mark_done(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_mark_done_marshall16(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::mark_done_16_closure* genClosure = new Closure_Block::mark_done_16_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_mark_done(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_mark_done_marshall16(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::mark_done_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void end_iterations();
 */
void CProxy_Block::end_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_end_iterations_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_end_iterations_void() {
  int epidx = CkRegisterEp("end_iterations()",
      reinterpret_cast<CkCallFnPtr>(_call_end_iterations_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_end_iterations_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->end_iterations();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::end_iterations_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markdone_recv();
 */
void CProxy_Block::markdone_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_markdone_recv_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_markdone_recv_void() {
  int epidx = CkRegisterEp("markdone_recv()",
      reinterpret_cast<CkCallFnPtr>(_call_markdone_recv_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Block::reg_redn_wrapper_markdone_recv_void() {
  return CkRegisterEp("redn_wrapper_markdone_recv(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_markdone_recv_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Block::_call_markdone_recv_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->markdone_recv();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::markdone_recv_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
 */
void CProxy_Block::exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_notify_recv_ready_marshall19(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_notify_recv_ready_marshall19() {
  int epidx = CkRegisterEp("exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_notify_recv_ready_marshall19), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_notify_recv_ready_marshall19);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_notify_recv_ready_marshall19);

  return epidx;
}

void CkIndex_Block::_call_exchange_notify_recv_ready_marshall19(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_notify_recv_ready_19_closure* genClosure = new Closure_Block::exchange_notify_recv_ready_19_closure();
  implP|genClosure->iter;
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_notify_recv_ready(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_notify_recv_ready_marshall19(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_notify_recv_ready_19_closure* genClosure = new Closure_Block::exchange_notify_recv_ready_19_closure();
  implP|genClosure->iter;
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_notify_recv_ready(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_notify_recv_ready_marshall19(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iter, int idim, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iter;
  implP|iter;
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iter");
  implDestP|iter;
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_notify_recv_ready_19_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_recv_ready_wait(int idim, const CkCallback &cb);
 */
void CProxy_Block::exchange_recv_ready_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_recv_ready_wait_marshall20(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_recv_ready_wait_marshall20() {
  int epidx = CkRegisterEp("exchange_recv_ready_wait(int idim, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_recv_ready_wait_marshall20), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_recv_ready_wait_marshall20);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_recv_ready_wait_marshall20);

  return epidx;
}

void CkIndex_Block::_call_exchange_recv_ready_wait_marshall20(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_recv_ready_wait_20_closure* genClosure = new Closure_Block::exchange_recv_ready_wait_20_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_recv_ready_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_recv_ready_wait_marshall20(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_recv_ready_wait_20_closure* genClosure = new Closure_Block::exchange_recv_ready_wait_20_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_recv_ready_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_recv_ready_wait_marshall20(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_recv_ready_wait_20_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_1(int idim, const CkCallback &cb_thread);
 */
void CProxy_Block::exchange_2_send_1(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_send_1_marshall21(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_send_1_marshall21() {
  int epidx = CkRegisterEp("exchange_2_send_1(int idim, const CkCallback &cb_thread)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_send_1_marshall21), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_send_1_marshall21);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_send_1_marshall21);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_send_1_marshall21(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_send_1_21_closure* genClosure = new Closure_Block::exchange_2_send_1_21_closure();
  implP|genClosure->idim;
  implP|genClosure->cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_2_send_1(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_2_send_1_marshall21(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_send_1_21_closure* genClosure = new Closure_Block::exchange_2_send_1_21_closure();
  implP|genClosure->idim;
  implP|genClosure->cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_2_send_1(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_send_1_marshall21(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb_thread*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb_thread;
  implP|cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb_thread");
  implDestP|cb_thread;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_send_1_21_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_2(int idim, const CkCallback &cb_thread);
 */
void CProxy_Block::exchange_2_send_2(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_send_2_marshall22(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_send_2_marshall22() {
  int epidx = CkRegisterEp("exchange_2_send_2(int idim, const CkCallback &cb_thread)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_send_2_marshall22), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_send_2_marshall22);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_send_2_marshall22);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_send_2_marshall22(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_send_2_22_closure* genClosure = new Closure_Block::exchange_2_send_2_22_closure();
  implP|genClosure->idim;
  implP|genClosure->cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_2_send_2(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_2_send_2_marshall22(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_send_2_22_closure* genClosure = new Closure_Block::exchange_2_send_2_22_closure();
  implP|genClosure->idim;
  implP|genClosure->cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_2_send_2(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_send_2_marshall22(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb_thread*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb_thread;
  implP|cb_thread;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb_thread");
  implDestP|cb_thread;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_send_2_22_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
 */
void CProxy_Block::exchange_2_recv_1_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_wait_marshall23(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_recv_1_wait_marshall23() {
  int epidx = CkRegisterEp("exchange_2_recv_1_wait(int idim, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_recv_1_wait_marshall23), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_recv_1_wait_marshall23);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_recv_1_wait_marshall23);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_recv_1_wait_marshall23(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_1_wait_23_closure* genClosure = new Closure_Block::exchange_2_recv_1_wait_23_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_2_recv_1_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_2_recv_1_wait_marshall23(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_1_wait_23_closure* genClosure = new Closure_Block::exchange_2_recv_1_wait_23_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_2_recv_1_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_recv_1_wait_marshall23(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_recv_1_wait_23_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
 */
void CProxy_Block::exchange_2_recv_2_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_wait_marshall24(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_recv_2_wait_marshall24() {
  int epidx = CkRegisterEp("exchange_2_recv_2_wait(int idim, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_recv_2_wait_marshall24), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_recv_2_wait_marshall24);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_recv_2_wait_marshall24);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_recv_2_wait_marshall24(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_2_wait_24_closure* genClosure = new Closure_Block::exchange_2_recv_2_wait_24_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_2_recv_2_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_2_recv_2_wait_marshall24(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_2_wait_24_closure* genClosure = new Closure_Block::exchange_2_recv_2_wait_24_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_exchange_2_recv_2_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_recv_2_wait_marshall24(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_recv_2_wait_24_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done_wait(int idim, const CkCallback &cb);
 */
void CProxy_Block::send_done_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_send_done_wait_marshall25(),0);
}

// Entry point registration function
int CkIndex_Block::reg_send_done_wait_marshall25() {
  int epidx = CkRegisterEp("send_done_wait(int idim, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_send_done_wait_marshall25), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_send_done_wait_marshall25);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_send_done_wait_marshall25);

  return epidx;
}

void CkIndex_Block::_call_send_done_wait_marshall25(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::send_done_wait_25_closure* genClosure = new Closure_Block::send_done_wait_25_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_send_done_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_send_done_wait_marshall25(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::send_done_wait_25_closure* genClosure = new Closure_Block::send_done_wait_25_closure();
  implP|genClosure->idim;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_send_done_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_send_done_wait_marshall25(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int idim, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> idim;
  implP|idim;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("idim");
  implDestP|idim;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::send_done_wait_25_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_1(int ref);
 */
void CProxy_Block::exchange_1_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_1_recv_1_marshall26(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_1_recv_1_marshall26() {
  int epidx = CkRegisterEp("exchange_1_recv_1(int ref)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_1_recv_1_marshall26), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_1_recv_1_marshall26);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_1_recv_1_marshall26);

  return epidx;
}

void CkIndex_Block::_call_exchange_1_recv_1_marshall26(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_1_recv_1_26_closure* genClosure = new Closure_Block::exchange_1_recv_1_26_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_1_recv_1(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_1_recv_1_marshall26(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_1_recv_1_26_closure* genClosure = new Closure_Block::exchange_1_recv_1_26_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_1_recv_1(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_1_recv_1_marshall26(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_1_recv_1_26_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_2(int ref);
 */
void CProxy_Block::exchange_1_recv_2(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_1_recv_2_marshall27(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_1_recv_2_marshall27() {
  int epidx = CkRegisterEp("exchange_1_recv_2(int ref)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_1_recv_2_marshall27), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_1_recv_2_marshall27);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_1_recv_2_marshall27);

  return epidx;
}

void CkIndex_Block::_call_exchange_1_recv_2_marshall27(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_1_recv_2_27_closure* genClosure = new Closure_Block::exchange_1_recv_2_27_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_1_recv_2(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_exchange_1_recv_2_marshall27(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_1_recv_2_27_closure* genClosure = new Closure_Block::exchange_1_recv_2_27_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->exchange_1_recv_2(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_1_recv_2_marshall27(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_1_recv_2_27_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxy_Block::exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_marshall28(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_recv_1_marshall28() {
  int epidx = CkRegisterEp("exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_recv_1_marshall28), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_recv_1_marshall28);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_recv_1_marshall28);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_recv_1_marshall28(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_1_28_closure* genClosure = new Closure_Block::exchange_2_recv_1_28_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  implP|genClosure->is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->exchange_2_recv_1(genClosure->ref, genClosure->size, genClosure->is_dummy, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->exchange_2_recv_1(genClosure);
  genClosure->deref();
  }
}
int CkIndex_Block::_callmarshall_exchange_2_recv_1_marshall28(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_1_28_closure* genClosure = new Closure_Block::exchange_2_recv_1_28_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  implP|genClosure->is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->exchange_2_recv_1(genClosure->ref, genClosure->size, genClosure->is_dummy, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->exchange_2_recv_1(genClosure);
  genClosure->deref();
  }
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_recv_1_marshall28(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data*/
  PUP::fromMem implP(impl_buf);
  int impl_num_device_rdma_fields; implP|impl_num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  CkDeviceBufferPost devicePost[1];
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<bool> is_dummy;
  implP|is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("is_dummy");
  implDestP|is_dummy;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|deviceBuffer_data;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_recv_1_28_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxy_Block::exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_marshall29(),0);
}

// Entry point registration function
int CkIndex_Block::reg_exchange_2_recv_2_marshall29() {
  int epidx = CkRegisterEp("exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data)",
      reinterpret_cast<CkCallFnPtr>(_call_exchange_2_recv_2_marshall29), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_exchange_2_recv_2_marshall29);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_exchange_2_recv_2_marshall29);

  return epidx;
}

void CkIndex_Block::_call_exchange_2_recv_2_marshall29(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_2_29_closure* genClosure = new Closure_Block::exchange_2_recv_2_29_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  implP|genClosure->is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->exchange_2_recv_2(genClosure->ref, genClosure->size, genClosure->is_dummy, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->exchange_2_recv_2(genClosure);
  genClosure->deref();
  }
}
int CkIndex_Block::_callmarshall_exchange_2_recv_2_marshall29(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::exchange_2_recv_2_29_closure* genClosure = new Closure_Block::exchange_2_recv_2_29_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  implP|genClosure->is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->exchange_2_recv_2(genClosure->ref, genClosure->size, genClosure->is_dummy, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->exchange_2_recv_2(genClosure);
  genClosure->deref();
  }
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_exchange_2_recv_2_marshall29(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data*/
  PUP::fromMem implP(impl_buf);
  int impl_num_device_rdma_fields; implP|impl_num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  CkDeviceBufferPost devicePost[1];
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  PUP::detail::TemporaryObjectHolder<bool> is_dummy;
  implP|is_dummy;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("is_dummy");
  implDestP|is_dummy;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|deviceBuffer_data;
}
PUPable_def(SINGLE_ARG(Closure_Block::exchange_2_recv_2_29_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_notify_recv_ready(int iswap, const CkCallback &cb);
 */
void CProxy_Block::borders_notify_recv_ready(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_borders_notify_recv_ready_marshall30(),0);
}

// Entry point registration function
int CkIndex_Block::reg_borders_notify_recv_ready_marshall30() {
  int epidx = CkRegisterEp("borders_notify_recv_ready(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_borders_notify_recv_ready_marshall30), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_borders_notify_recv_ready_marshall30);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_borders_notify_recv_ready_marshall30);

  return epidx;
}

void CkIndex_Block::_call_borders_notify_recv_ready_marshall30(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_notify_recv_ready_30_closure* genClosure = new Closure_Block::borders_notify_recv_ready_30_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->borders_notify_recv_ready(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_borders_notify_recv_ready_marshall30(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_notify_recv_ready_30_closure* genClosure = new Closure_Block::borders_notify_recv_ready_30_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->borders_notify_recv_ready(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_borders_notify_recv_ready_marshall30(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::borders_notify_recv_ready_30_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxy_Block::borders_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_borders_recv_ready_wait_marshall31(),0);
}

// Entry point registration function
int CkIndex_Block::reg_borders_recv_ready_wait_marshall31() {
  int epidx = CkRegisterEp("borders_recv_ready_wait(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_borders_recv_ready_wait_marshall31), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_borders_recv_ready_wait_marshall31);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_borders_recv_ready_wait_marshall31);

  return epidx;
}

void CkIndex_Block::_call_borders_recv_ready_wait_marshall31(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_ready_wait_31_closure* genClosure = new Closure_Block::borders_recv_ready_wait_31_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_borders_recv_ready_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_borders_recv_ready_wait_marshall31(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_ready_wait_31_closure* genClosure = new Closure_Block::borders_recv_ready_wait_31_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_borders_recv_ready_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_borders_recv_ready_wait_marshall31(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::borders_recv_ready_wait_31_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_2(int iswap, const CkCallback &cb);
 */
void CProxy_Block::borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_borders_2_marshall32(),0);
}

// Entry point registration function
int CkIndex_Block::reg_borders_2_marshall32() {
  int epidx = CkRegisterEp("borders_2(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_borders_2_marshall32), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_borders_2_marshall32);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_borders_2_marshall32);

  return epidx;
}

void CkIndex_Block::_call_borders_2_marshall32(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_2_32_closure* genClosure = new Closure_Block::borders_2_32_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_borders_2(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_borders_2_marshall32(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_2_32_closure* genClosure = new Closure_Block::borders_2_32_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_borders_2(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_borders_2_marshall32(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::borders_2_32_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_1(int ref);
 */
void CProxy_Block::borders_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_borders_recv_1_marshall33(),0);
}

// Entry point registration function
int CkIndex_Block::reg_borders_recv_1_marshall33() {
  int epidx = CkRegisterEp("borders_recv_1(int ref)",
      reinterpret_cast<CkCallFnPtr>(_call_borders_recv_1_marshall33), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_borders_recv_1_marshall33);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_borders_recv_1_marshall33);

  return epidx;
}

void CkIndex_Block::_call_borders_recv_1_marshall33(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_1_33_closure* genClosure = new Closure_Block::borders_recv_1_33_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->borders_recv_1(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_borders_recv_1_marshall33(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_1_33_closure* genClosure = new Closure_Block::borders_recv_1_33_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->borders_recv_1(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_borders_recv_1_marshall33(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
}
PUPable_def(SINGLE_ARG(Closure_Block::borders_recv_1_33_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxy_Block::borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_borders_recv_2_marshall34(),0);
}

// Entry point registration function
int CkIndex_Block::reg_borders_recv_2_marshall34() {
  int epidx = CkRegisterEp("borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data)",
      reinterpret_cast<CkCallFnPtr>(_call_borders_recv_2_marshall34), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_borders_recv_2_marshall34);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_borders_recv_2_marshall34);

  return epidx;
}

void CkIndex_Block::_call_borders_recv_2_marshall34(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_2_34_closure* genClosure = new Closure_Block::borders_recv_2_34_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->borders_recv_2(genClosure->ref, genClosure->size, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->borders_recv_2(genClosure);
  genClosure->deref();
  }
}
int CkIndex_Block::_callmarshall_borders_recv_2_marshall34(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::borders_recv_2_34_closure* genClosure = new Closure_Block::borders_recv_2_34_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->borders_recv_2(genClosure->ref, genClosure->size, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->borders_recv_2(genClosure);
  genClosure->deref();
  }
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_borders_recv_2_marshall34(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data*/
  PUP::fromMem implP(impl_buf);
  int impl_num_device_rdma_fields; implP|impl_num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  CkDeviceBufferPost devicePost[1];
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|deviceBuffer_data;
}
PUPable_def(SINGLE_ARG(Closure_Block::borders_recv_2_34_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
 */
void CProxy_Block::comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_notify_recv_ready_marshall35(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_notify_recv_ready_marshall35() {
  int epidx = CkRegisterEp("comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_notify_recv_ready_marshall35), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_notify_recv_ready_marshall35);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_notify_recv_ready_marshall35);

  return epidx;
}

void CkIndex_Block::_call_comms_notify_recv_ready_marshall35(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_notify_recv_ready_35_closure* genClosure = new Closure_Block::comms_notify_recv_ready_35_closure();
  implP|genClosure->iter;
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->comms_notify_recv_ready(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comms_notify_recv_ready_marshall35(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_notify_recv_ready_35_closure* genClosure = new Closure_Block::comms_notify_recv_ready_35_closure();
  implP|genClosure->iter;
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->comms_notify_recv_ready(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_notify_recv_ready_marshall35(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iter, int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iter;
  implP|iter;
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iter");
  implDestP|iter;
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_notify_recv_ready_35_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxy_Block::comms_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_recv_ready_wait_marshall36(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_recv_ready_wait_marshall36() {
  int epidx = CkRegisterEp("comms_recv_ready_wait(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_recv_ready_wait_marshall36), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_recv_ready_wait_marshall36);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_recv_ready_wait_marshall36);

  return epidx;
}

void CkIndex_Block::_call_comms_recv_ready_wait_marshall36(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_ready_wait_36_closure* genClosure = new Closure_Block::comms_recv_ready_wait_36_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_recv_ready_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comms_recv_ready_wait_marshall36(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_ready_wait_36_closure* genClosure = new Closure_Block::comms_recv_ready_wait_36_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_recv_ready_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_recv_ready_wait_marshall36(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_recv_ready_wait_36_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_1(int ref);
 */
void CProxy_Block::comms_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_recv_1_marshall37(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_recv_1_marshall37() {
  int epidx = CkRegisterEp("comms_recv_1(int ref)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_recv_1_marshall37), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_recv_1_marshall37);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_recv_1_marshall37);

  return epidx;
}

void CkIndex_Block::_call_comms_recv_1_marshall37(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_1_37_closure* genClosure = new Closure_Block::comms_recv_1_37_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->comms_recv_1(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comms_recv_1_marshall37(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_1_37_closure* genClosure = new Closure_Block::comms_recv_1_37_closure();
  implP|genClosure->ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->comms_recv_1(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_recv_1_marshall37(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_recv_1_37_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_send(int iswap, const CkCallback &cb);
 */
void CProxy_Block::comms_send(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_send_marshall38(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_send_marshall38() {
  int epidx = CkRegisterEp("comms_send(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_send_marshall38), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_send_marshall38);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_send_marshall38);

  return epidx;
}

void CkIndex_Block::_call_comms_send_marshall38(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_send_38_closure* genClosure = new Closure_Block::comms_send_38_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_send(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comms_send_marshall38(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_send_38_closure* genClosure = new Closure_Block::comms_send_38_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_send(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_send_marshall38(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_send_38_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_wait(int iswap, const CkCallback &cb);
 */
void CProxy_Block::comms_recv_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_recv_wait_marshall39(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_recv_wait_marshall39() {
  int epidx = CkRegisterEp("comms_recv_wait(int iswap, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_recv_wait_marshall39), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_recv_wait_marshall39);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_recv_wait_marshall39);

  return epidx;
}

void CkIndex_Block::_call_comms_recv_wait_marshall39(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_wait_39_closure* genClosure = new Closure_Block::comms_recv_wait_39_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_recv_wait(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comms_recv_wait_marshall39(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_wait_39_closure* genClosure = new Closure_Block::comms_recv_wait_39_closure();
  implP|genClosure->iswap;
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comms_recv_wait(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_recv_wait_marshall39(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int iswap, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> iswap;
  implP|iswap;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("iswap");
  implDestP|iswap;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_recv_wait_39_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxy_Block::comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comms_recv_marshall40(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comms_recv_marshall40() {
  int epidx = CkRegisterEp("comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data)",
      reinterpret_cast<CkCallFnPtr>(_call_comms_recv_marshall40), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comms_recv_marshall40);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comms_recv_marshall40);

  return epidx;
}

void CkIndex_Block::_call_comms_recv_marshall40(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_40_closure* genClosure = new Closure_Block::comms_recv_40_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->comms_recv(genClosure->ref, genClosure->size, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->comms_recv(genClosure);
  genClosure->deref();
  }
}
int CkIndex_Block::_callmarshall_comms_recv_marshall40(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comms_recv_40_closure* genClosure = new Closure_Block::comms_recv_40_closure();
  CkDeviceBufferPost devicePost[1];
  implP|genClosure->num_device_rdma_fields;
  implP|genClosure->deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  implP|genClosure->ref;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  if (CMI_IS_ZC_DEVICE(env)) {
  impl_obj->comms_recv(genClosure->ref, genClosure->size, deviceBuffer_data_ptr, devicePost);
    void *buffPtrs[1];
    int buffSizes[1];
      if(deviceBuffer_data_ptr == nullptr)
        CkAbort("Post Entry Method doesn't post the buffer by initializing the reference to the pointer for data ");
    buffPtrs[0] = (void *)deviceBuffer_data_ptr;
    buffSizes[0] = sizeof(char) * genClosure->size;
    CkRdmaDeviceIssueRgets(env, genClosure->num_device_rdma_fields, buffPtrs, buffSizes, devicePost);
      deviceBuffer_data_ptr = (char *)genClosure->deviceBuffer_data.ptr;
  } else {
  impl_obj->comms_recv(genClosure);
  genClosure->deref();
  }
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comms_recv_marshall40(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data*/
  PUP::fromMem implP(impl_buf);
  int impl_num_device_rdma_fields; implP|impl_num_device_rdma_fields;
  CkDeviceBuffer deviceBuffer_data;
  implP|deviceBuffer_data;
  char *deviceBuffer_data_ptr = nullptr;
  CkDeviceBufferPost devicePost[1];
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP|deviceBuffer_data;
}
PUPable_def(SINGLE_ARG(Closure_Block::comms_recv_40_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done();
 */
void CProxy_Block::send_done(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_send_done_void(),0);
}

// Entry point registration function
int CkIndex_Block::reg_send_done_void() {
  int epidx = CkRegisterEp("send_done()",
      reinterpret_cast<CkCallFnPtr>(_call_send_done_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_send_done_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  impl_obj->send_done();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Block::send_done_41_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all(const CkCallback &cb);
 */
void CProxy_Block::comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comm_all_marshall42(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comm_all_marshall42() {
  int epidx = CkRegisterEp("comm_all(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comm_all_marshall42), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comm_all_marshall42);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comm_all_marshall42);

  return epidx;
}

void CkIndex_Block::_call_comm_all_marshall42(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_all_42_closure* genClosure = new Closure_Block::comm_all_42_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comm_all(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comm_all_marshall42(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_all_42_closure* genClosure = new Closure_Block::comm_all_42_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comm_all(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comm_all_marshall42(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::comm_all_42_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxy_Block::comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comm_all_recv_marshall43(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comm_all_recv_marshall43() {
  int epidx = CkRegisterEp("comm_all_recv(int ref, const char *data, const size_t &size)",
      reinterpret_cast<CkCallFnPtr>(_call_comm_all_recv_marshall43), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comm_all_recv_marshall43);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comm_all_recv_marshall43);

  return epidx;
}

void CkIndex_Block::_call_comm_all_recv_marshall43(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_all_recv_43_closure* genClosure = new Closure_Block::comm_all_recv_43_closure();
  implP|genClosure->ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->data = (char *)(impl_buf+impl_off_data);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  impl_obj->comm_all_recv(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comm_all_recv_marshall43(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_all_recv_43_closure* genClosure = new Closure_Block::comm_all_recv_43_closure();
  implP|genClosure->ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->data = (char *)(impl_buf+impl_off_data);
  impl_obj->comm_all_recv(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comm_all_recv_marshall43(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const char *data, const size_t &size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
}
PUPable_def(SINGLE_ARG(Closure_Block::comm_all_recv_43_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all(const CkCallback &cb);
 */
void CProxy_Block::comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comm_rev_all_marshall44(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comm_rev_all_marshall44() {
  int epidx = CkRegisterEp("comm_rev_all(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_comm_rev_all_marshall44), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comm_rev_all_marshall44);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comm_rev_all_marshall44);

  return epidx;
}

void CkIndex_Block::_call_comm_rev_all_marshall44(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_rev_all_44_closure* genClosure = new Closure_Block::comm_rev_all_44_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comm_rev_all(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comm_rev_all_marshall44(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_rev_all_44_closure* genClosure = new Closure_Block::comm_rev_all_44_closure();
  implP|genClosure->cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->_sdag_fnc_comm_rev_all(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comm_rev_all_marshall44(PUP::er &implDestP,void *impl_msg) {
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
PUPable_def(SINGLE_ARG(Closure_Block::comm_rev_all_44_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxy_Block::comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_comm_rev_all_recv_marshall45(),0);
}

// Entry point registration function
int CkIndex_Block::reg_comm_rev_all_recv_marshall45() {
  int epidx = CkRegisterEp("comm_rev_all_recv(int ref, const char *data, const size_t &size)",
      reinterpret_cast<CkCallFnPtr>(_call_comm_rev_all_recv_marshall45), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_comm_rev_all_recv_marshall45);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_comm_rev_all_recv_marshall45);

  return epidx;
}

void CkIndex_Block::_call_comm_rev_all_recv_marshall45(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_rev_all_recv_45_closure* genClosure = new Closure_Block::comm_rev_all_recv_45_closure();
  implP|genClosure->ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->data = (char *)(impl_buf+impl_off_data);
  genClosure->_impl_marshall = impl_msg_typed;
  CkReferenceMsg(genClosure->_impl_marshall);
  impl_obj->comm_rev_all_recv(genClosure);
  genClosure->deref();
}
int CkIndex_Block::_callmarshall_comm_rev_all_recv_marshall45(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast<Block*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Block::comm_rev_all_recv_45_closure* genClosure = new Closure_Block::comm_rev_all_recv_45_closure();
  implP|genClosure->ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  implP|genClosure->size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  genClosure->data = (char *)(impl_buf+impl_off_data);
  impl_obj->comm_rev_all_recv(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Block::_marshallmessagepup_comm_rev_all_recv_marshall45(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int ref, const char *data, const size_t &size*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> ref;
  implP|ref;
  int impl_off_data, impl_cnt_data;
  implP|impl_off_data;
  implP|impl_cnt_data;
  PUP::detail::TemporaryObjectHolder<size_t> size;
  implP|size;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  char *data=(char *)(impl_buf+impl_off_data);
  if (implDestP.hasComments()) implDestP.comment("ref");
  implDestP|ref;
  if (implDestP.hasComments()) implDestP.comment("data");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*data))<impl_cnt_data;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|data[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("size");
  implDestP|size;
}
PUPable_def(SINGLE_ARG(Closure_Block::comm_rev_all_recv_45_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Block::reg_Block_CkMigrateMessage() {
  int epidx = CkRegisterEp("Block(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Block_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Block::_call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Block> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void init();
 */
void CProxySection_Block::init(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_init_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
void CProxySection_Block::contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double vxtot, double vytot, double vztot
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|vxtot;
    implP|vytot;
    implP|vztot;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|vxtot;
    implP|vytot;
    implP|vztot;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_contCreateVelocity_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run();
 */
void CProxySection_Block::run(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_run_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void run_neighbour_build(const CkCallback &cb);
 */
void CProxySection_Block::run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_run_neighbour_build_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reducesum(int iter, const MMD_float &temp);
 */
void CProxySection_Block::reducesum(int iter, const MMD_float &temp, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, const MMD_float &temp
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<MMD_float>::type>::type &)temp;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_reducesum_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_allreduce(const CkCallback &cb);
 */
void CProxySection_Block::temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_temperature_allreduce_marshall7(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void temperature_recv(int iter, double t1);
 */
void CProxySection_Block::temperature_recv(int iter, double t1, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, double t1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|t1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|t1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_temperature_recv_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_allreduce(const CkCallback &cb);
 */
void CProxySection_Block::energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_energy_allreduce_marshall9(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void energy_recv(CkReductionMsg* impl_msg);
 */
void CProxySection_Block::energy_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_energy_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_allreduce(const CkCallback &cb);
 */
void CProxySection_Block::pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_pressure_allreduce_marshall11(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void pressure_recv(CkReductionMsg* impl_msg);
 */
void CProxySection_Block::pressure_recv(CkReductionMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_pressure_recv_CkReductionMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_start(const CkCallback &cb);
 */
void CProxySection_Block::mark_start(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_mark_start_marshall13(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_iterations();
 */
void CProxySection_Block::start_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_start_iterations_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markstart_recv();
 */
void CProxySection_Block::markstart_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_markstart_recv_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void mark_done(const CkCallback &cb);
 */
void CProxySection_Block::mark_done(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_mark_done_marshall16(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void end_iterations();
 */
void CProxySection_Block::end_iterations(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_end_iterations_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void markdone_recv();
 */
void CProxySection_Block::markdone_recv(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_markdone_recv_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
 */
void CProxySection_Block::exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_notify_recv_ready_marshall19(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_recv_ready_wait(int idim, const CkCallback &cb);
 */
void CProxySection_Block::exchange_recv_ready_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_recv_ready_wait_marshall20(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_1(int idim, const CkCallback &cb_thread);
 */
void CProxySection_Block::exchange_2_send_1(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_send_1_marshall21(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_send_2(int idim, const CkCallback &cb_thread);
 */
void CProxySection_Block::exchange_2_send_2(int idim, const CkCallback &cb_thread, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb_thread
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb_thread;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_send_2_marshall22(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
 */
void CProxySection_Block::exchange_2_recv_1_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_wait_marshall23(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
 */
void CProxySection_Block::exchange_2_recv_2_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_wait_marshall24(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done_wait(int idim, const CkCallback &cb);
 */
void CProxySection_Block::send_done_wait(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int idim, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|idim;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_send_done_wait_marshall25(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_1(int ref);
 */
void CProxySection_Block::exchange_1_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_1_recv_1_marshall26(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_1_recv_2(int ref);
 */
void CProxySection_Block::exchange_1_recv_2(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_1_recv_2_marshall27(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxySection_Block::exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_1_marshall28(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
 */
void CProxySection_Block::exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)is_dummy;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_exchange_2_recv_2_marshall29(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_notify_recv_ready(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::borders_notify_recv_ready(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_notify_recv_ready_marshall30(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::borders_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_ready_wait_marshall31(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_2(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_2_marshall32(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_1(int ref);
 */
void CProxySection_Block::borders_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_1_marshall33(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxySection_Block::borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_borders_recv_2_marshall34(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
 */
void CProxySection_Block::comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iter, int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iter;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_notify_recv_ready_marshall35(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_ready_wait(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::comms_recv_ready_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_ready_wait_marshall36(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_1(int ref);
 */
void CProxySection_Block::comms_recv_1(int ref, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_1_marshall37(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_send(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::comms_send(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_send_marshall38(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv_wait(int iswap, const CkCallback &cb);
 */
void CProxySection_Block::comms_recv_wait(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int iswap, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|iswap;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_wait_marshall39(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
void CProxySection_Block::comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data
  int impl_off=0;
  CkAbort("Broadcast not supported with device buffers");
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comms_recv_marshall40(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void send_done();
 */
void CProxySection_Block::send_done(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_send_done_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all(const CkCallback &cb);
 */
void CProxySection_Block::comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_comm_all_marshall42(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxySection_Block::comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comm_all_recv_marshall43(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all(const CkCallback &cb);
 */
void CProxySection_Block::comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts) 
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
  ckSend(impl_amsg, CkIndex_Block::idx_comm_rev_all_marshall44(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
void CProxySection_Block::comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int ref, const char *data, const size_t &size
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_data, impl_cnt_data;
  impl_off_data=impl_off=CK_ALIGN(impl_off,sizeof(char));
  impl_off+=(impl_cnt_data=sizeof(char)*(size));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ref;
    implP|impl_off_data;
    implP|impl_cnt_data;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<size_t>::type>::type &)size;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_data,data,impl_cnt_data);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_comm_rev_all_recv_marshall45(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Block::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Block();
  idx_Block_void();
  CkRegisterDefaultCtor(__idx, idx_Block_void());

  // REG: void init();
  idx_init_void();

  // REG: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
  idx_contCreateVelocity_marshall3();

  // REG: threaded void run();
  idx_run_void();

  // REG: threaded void run_neighbour_build(const CkCallback &cb);
  idx_run_neighbour_build_marshall5();

  // REG: void reducesum(int iter, const MMD_float &temp);
  idx_reducesum_marshall6();

  // REG: void temperature_allreduce(const CkCallback &cb);
  idx_temperature_allreduce_marshall7();

  // REG: void temperature_recv(int iter, double t1);
  idx_temperature_recv_marshall8();

  // REG: void energy_allreduce(const CkCallback &cb);
  idx_energy_allreduce_marshall9();

  // REG: void energy_recv(CkReductionMsg* impl_msg);
  idx_energy_recv_CkReductionMsg();

  // REG: void pressure_allreduce(const CkCallback &cb);
  idx_pressure_allreduce_marshall11();

  // REG: void pressure_recv(CkReductionMsg* impl_msg);
  idx_pressure_recv_CkReductionMsg();

  // REG: void mark_start(const CkCallback &cb);
  idx_mark_start_marshall13();

  // REG: void start_iterations();
  idx_start_iterations_void();

  // REG: void markstart_recv();
  idx_markstart_recv_void();
  idx_redn_wrapper_markstart_recv_void();

  // REG: void mark_done(const CkCallback &cb);
  idx_mark_done_marshall16();

  // REG: void end_iterations();
  idx_end_iterations_void();

  // REG: void markdone_recv();
  idx_markdone_recv_void();
  idx_redn_wrapper_markdone_recv_void();

  // REG: void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
  idx_exchange_notify_recv_ready_marshall19();

  // REG: void exchange_recv_ready_wait(int idim, const CkCallback &cb);
  idx_exchange_recv_ready_wait_marshall20();

  // REG: void exchange_2_send_1(int idim, const CkCallback &cb_thread);
  idx_exchange_2_send_1_marshall21();

  // REG: void exchange_2_send_2(int idim, const CkCallback &cb_thread);
  idx_exchange_2_send_2_marshall22();

  // REG: void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
  idx_exchange_2_recv_1_wait_marshall23();

  // REG: void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
  idx_exchange_2_recv_2_wait_marshall24();

  // REG: void send_done_wait(int idim, const CkCallback &cb);
  idx_send_done_wait_marshall25();

  // REG: void exchange_1_recv_1(int ref);
  idx_exchange_1_recv_1_marshall26();

  // REG: void exchange_1_recv_2(int ref);
  idx_exchange_1_recv_2_marshall27();

  // REG: void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
  idx_exchange_2_recv_1_marshall28();

  // REG: void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
  idx_exchange_2_recv_2_marshall29();

  // REG: void borders_notify_recv_ready(int iswap, const CkCallback &cb);
  idx_borders_notify_recv_ready_marshall30();

  // REG: void borders_recv_ready_wait(int iswap, const CkCallback &cb);
  idx_borders_recv_ready_wait_marshall31();

  // REG: void borders_2(int iswap, const CkCallback &cb);
  idx_borders_2_marshall32();

  // REG: void borders_recv_1(int ref);
  idx_borders_recv_1_marshall33();

  // REG: void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
  idx_borders_recv_2_marshall34();

  // REG: void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
  idx_comms_notify_recv_ready_marshall35();

  // REG: void comms_recv_ready_wait(int iswap, const CkCallback &cb);
  idx_comms_recv_ready_wait_marshall36();

  // REG: void comms_recv_1(int ref);
  idx_comms_recv_1_marshall37();

  // REG: void comms_send(int iswap, const CkCallback &cb);
  idx_comms_send_marshall38();

  // REG: void comms_recv_wait(int iswap, const CkCallback &cb);
  idx_comms_recv_wait_marshall39();

  // REG: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
  idx_comms_recv_marshall40();

  // REG: void send_done();
  idx_send_done_void();

  // REG: void comm_all(const CkCallback &cb);
  idx_comm_all_marshall42();

  // REG: void comm_all_recv(int ref, const char *data, const size_t &size);
  idx_comm_all_recv_marshall43();

  // REG: void comm_rev_all(const CkCallback &cb);
  idx_comm_rev_all_marshall44();

  // REG: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
  idx_comm_rev_all_recv_marshall45();

  // REG: Block(CkMigrateMessage* impl_msg);
  idx_Block_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Block_CkMigrateMessage());

  Block::__sdag_register(); // Potentially missing Block_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Block::reducesum(int iter, MMD_float temp){
  Closure_Block::reducesum_6_closure* genClosure = new Closure_Block::reducesum_6_closure();
  genClosure->getP0() = iter;
  genClosure->getP1() = temp;
  reducesum(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::reducesum(Closure_Block::reducesum_6_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::reducesum_end(Closure_Block::reducesum_6_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0(Closure_Block::reducesum_6_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0_end(Closure_Block::reducesum_6_closure* gen0) {
  reducesum_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_0(Closure_Block::reducesum_6_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_0()), CkMyPe(), 0, &projID, this); 
  {
    int& iter = gen0->getP0();
    MMD_float& temp = gen0->getP1();
    { // begin serial block
#line 112 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        reductionSum+=temp;
        if(++reductionCount==num_chares){
          thisProxy.temperature_recv(iter, reductionSum);
          reductionCount = 0;
          reductionSum = 0;
        }
      
#line 7415 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::temperature_allreduce(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "temperature_allreduce(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_temperature_allreduce(CkCallback cb){
  Closure_Block::temperature_allreduce_7_closure* genClosure = new Closure_Block::temperature_allreduce_7_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_temperature_allreduce(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_temperature_allreduce(Closure_Block::temperature_allreduce_7_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::temperature_allreduce_end(Closure_Block::temperature_allreduce_7_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1(Closure_Block::temperature_allreduce_7_closure* gen0) {
  _serial_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1_end(Closure_Block::temperature_allreduce_7_closure* gen0) {
  temperature_allreduce_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_1(Closure_Block::temperature_allreduce_7_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_1()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 122 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->iter;
        thisProxy[0].reducesum(tag, thermo.t_act);
      
#line 7483 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_0(Closure_Block::temperature_allreduce_7_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      refnum_0 = comm->iter;
    }
  }
  return _when_0(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_0(Closure_Block::temperature_allreduce_7_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_2(gen0, static_cast<Closure_Block::temperature_recv_8_closure*>(buf0->cl));
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
void Block::_when_0_end(Closure_Block::temperature_allreduce_7_closure* gen0, Closure_Block::temperature_recv_8_closure* gen1) {
  _serial_3(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_2(Closure_Block::temperature_allreduce_7_closure* gen0, Closure_Block::temperature_recv_8_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_2()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      int& iter = gen1->getP0();
      double& t1 = gen1->getP1();
      { // begin serial block
#line 126 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        thermo.t1 = t1;
      
#line 7547 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_0_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_3(Closure_Block::temperature_allreduce_7_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_3()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 129 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 7568 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::energy_allreduce(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "energy_allreduce(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_energy_allreduce(CkCallback cb){
  Closure_Block::energy_allreduce_9_closure* genClosure = new Closure_Block::energy_allreduce_9_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_energy_allreduce(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_energy_allreduce(Closure_Block::energy_allreduce_9_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_2(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::energy_allreduce_end(Closure_Block::energy_allreduce_9_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2(Closure_Block::energy_allreduce_9_closure* gen0) {
  _serial_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2_end(Closure_Block::energy_allreduce_9_closure* gen0) {
  energy_allreduce_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_4(Closure_Block::energy_allreduce_9_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_4()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 135 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->iter;
        CkCallback allreduce_cb = CkCallback(CkIndex_Block::energy_recv(NULL), thisProxy);
        allreduce_cb.setRefnum(tag);
        contribute(sizeof(MMD_float), &(thermo.e_act), (sizeof(MMD_float) == sizeof(float)) ? CkReduction::sum_float : CkReduction::sum_double, allreduce_cb);
      
#line 7638 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_1(Closure_Block::energy_allreduce_9_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      refnum_0 = comm->iter;
    }
  }
  return _when_1(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_1(Closure_Block::energy_allreduce_9_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_5(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->entries.push_back(1);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_1_end(Closure_Block::energy_allreduce_9_closure* gen0, CkReductionMsg* gen1) {
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _serial_6(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_5(Closure_Block::energy_allreduce_9_closure* gen0, CkReductionMsg* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_5()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      { // begin serial block
#line 141 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        thermo.eng = *(MMD_float*)msg->getData();
      
#line 7708 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_6(Closure_Block::energy_allreduce_9_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_6()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 144 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 7729 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::pressure_allreduce(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "pressure_allreduce(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_pressure_allreduce(CkCallback cb){
  Closure_Block::pressure_allreduce_11_closure* genClosure = new Closure_Block::pressure_allreduce_11_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_pressure_allreduce(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_pressure_allreduce(Closure_Block::pressure_allreduce_11_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_3(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::pressure_allreduce_end(Closure_Block::pressure_allreduce_11_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_3(Closure_Block::pressure_allreduce_11_closure* gen0) {
  _serial_7(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_3_end(Closure_Block::pressure_allreduce_11_closure* gen0) {
  pressure_allreduce_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_7(Closure_Block::pressure_allreduce_11_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_7()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 150 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->iter;
        CkCallback allreduce_cb = CkCallback(CkIndex_Block::pressure_recv(NULL), thisProxy);
        allreduce_cb.setRefnum(tag);
        contribute(sizeof(MMD_float), &(thermo.p_act), (sizeof(MMD_float) == sizeof(float)) ? CkReduction::sum_float : CkReduction::sum_double, allreduce_cb);
      
#line 7799 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_2(Closure_Block::pressure_allreduce_11_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      refnum_0 = comm->iter;
    }
  }
  return _when_2(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_2(Closure_Block::pressure_allreduce_11_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_8(gen0, static_cast<CkReductionMsg*>(static_cast<SDAG::MsgClosure*>(buf0->cl)->msg));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(gen0);
    c->entries.push_back(2);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_2_end(Closure_Block::pressure_allreduce_11_closure* gen0, CkReductionMsg* gen1) {
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      CmiFree(UsrToEnv(msg));
    }
  }
  _serial_9(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_8(Closure_Block::pressure_allreduce_11_closure* gen0, CkReductionMsg* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_8()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      CkReductionMsg*& msg = gen1;
      { // begin serial block
#line 156 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        thermo.virial = *(MMD_float*)msg->getData();
      
#line 7869 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_9(Closure_Block::pressure_allreduce_11_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_9()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 159 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 7890 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::mark_start(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "mark_start(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_mark_start(CkCallback cb){
  Closure_Block::mark_start_13_closure* genClosure = new Closure_Block::mark_start_13_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_mark_start(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_mark_start(Closure_Block::mark_start_13_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_4(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::mark_start_end(Closure_Block::mark_start_13_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_4(Closure_Block::mark_start_13_closure* gen0) {
  _serial_10(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_4_end(Closure_Block::mark_start_13_closure* gen0) {
  mark_start_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_10(Closure_Block::mark_start_13_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_10()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 165 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        CkCallback cb_start(CkReductionTarget(Block, markstart_recv), thisProxy[0]);
        contribute(cb_start);
      
#line 7958 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_3(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_3(Closure_Block::mark_start_13_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(3, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_11(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->addClosure(gen0);
    c->anyEntries.push_back(3);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_3_end(Closure_Block::mark_start_13_closure* gen0) {
  _slist_4_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_11(Closure_Block::mark_start_13_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_11()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 169 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 8004 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::markstart_recv() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_5();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::markstart_recv_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_5() {
  _serial_12();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_5_end() {
  markstart_recv_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_12() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_12()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 175 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        start_time = CkWallTimer();
        thisProxy.start_iterations();
      
#line 8054 "block.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_5_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::mark_done(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "mark_done(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_mark_done(CkCallback cb){
  Closure_Block::mark_done_16_closure* genClosure = new Closure_Block::mark_done_16_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_mark_done(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_mark_done(Closure_Block::mark_done_16_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_6(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::mark_done_end(Closure_Block::mark_done_16_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_6(Closure_Block::mark_done_16_closure* gen0) {
  _serial_13(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_6_end(Closure_Block::mark_done_16_closure* gen0) {
  mark_done_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_13(Closure_Block::mark_done_16_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_13()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 181 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        CkCallback cb_done(CkReductionTarget(Block, markdone_recv), thisProxy[0]);
        contribute(cb_done);
      
#line 8121 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_4(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_4(Closure_Block::mark_done_16_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(4, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_14(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->addClosure(gen0);
    c->anyEntries.push_back(4);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_4_end(Closure_Block::mark_done_16_closure* gen0) {
  _slist_6_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_14(Closure_Block::mark_done_16_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_14()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 185 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 8167 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_4_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::markdone_recv() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_7();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::markdone_recv_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_7() {
  _serial_15();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_7_end() {
  markdone_recv_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_15() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_15()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 191 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        total_time = CkWallTimer() - start_time;
        CkPrintf("[Block %d] Total time (exclude 1st iteration): %.6lf s\n", thisIndex, total_time);
        CkPrintf("[Block %d] Average time per iteration: %.6lf s\n", thisIndex, total_time / (integrate.ntimes-1));
        thisProxy.end_iterations();
      
#line 8219 "block.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_7_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_notify_recv_ready(int iter, int idim, CkCallback cb){
  Closure_Block::exchange_notify_recv_ready_19_closure* genClosure = new Closure_Block::exchange_notify_recv_ready_19_closure();
  genClosure->getP0() = iter;
  genClosure->getP1() = idim;
  genClosure->getP2() = cb;
  exchange_notify_recv_ready(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_notify_recv_ready(Closure_Block::exchange_notify_recv_ready_19_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_8(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_notify_recv_ready_end(Closure_Block::exchange_notify_recv_ready_19_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_8(Closure_Block::exchange_notify_recv_ready_19_closure* gen0) {
  _serial_16(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_8_end(Closure_Block::exchange_notify_recv_ready_19_closure* gen0) {
  exchange_notify_recv_ready_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_16(Closure_Block::exchange_notify_recv_ready_19_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_16()), CkMyPe(), 0, &projID, this); 
  {
    int& iter = gen0->getP0();
    int& idim = gen0->getP1();
    CkCallback& cb = gen0->getP2();
    { // begin serial block
#line 199 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = 3*iter + idim;
        thisProxy[comm->chareneigh[idim][0]].exchange_1_recv_1(tag);
        if (comm->charegrid[idim] > 2) {
          thisProxy[comm->chareneigh[idim][1]].exchange_1_recv_2(tag);
        }
        cb.send();
      
#line 8287 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_8_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_recv_ready_wait(int idim, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "exchange_recv_ready_wait(int idim, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_recv_ready_wait(int idim, CkCallback cb){
  Closure_Block::exchange_recv_ready_wait_20_closure* genClosure = new Closure_Block::exchange_recv_ready_wait_20_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb;
  _sdag_fnc_exchange_recv_ready_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_recv_ready_wait(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_9(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_recv_ready_wait_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_9(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  _when_5(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_9_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  exchange_recv_ready_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_5(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = 3*comm->iter+idim;
    }
  }
  return _when_5(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_5(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(5, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_17(gen0, static_cast<Closure_Block::exchange_1_recv_1_26_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->addClosure(gen0);
    c->entries.push_back(5);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_5_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, Closure_Block::exchange_1_recv_1_26_closure* gen1) {
  _if_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_17(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, Closure_Block::exchange_1_recv_1_26_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_17()), CkMyPe(), 0, &projID, this); 
  _TRACE_END_EXECUTE(); 
  _when_5_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_0(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    if (comm->charegrid[idim] > 2) {
      _slist_10(gen0);
    } else {
      _if_0_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_0_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  _serial_19(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_10(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  _when_6(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_10_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  _if_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_6(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = 3*comm->iter+idim;
    }
  }
  return _when_6(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_6(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(6, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_18(gen0, static_cast<Closure_Block::exchange_1_recv_2_27_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(6);
    c->addClosure(gen0);
    c->entries.push_back(6);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_6_end(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, Closure_Block::exchange_1_recv_2_27_closure* gen1) {
  _slist_10_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_18(Closure_Block::exchange_recv_ready_wait_20_closure* gen0, Closure_Block::exchange_1_recv_2_27_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_18()), CkMyPe(), 0, &projID, this); 
  _TRACE_END_EXECUTE(); 
  _when_6_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_19(Closure_Block::exchange_recv_ready_wait_20_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_19()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 215 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 8496 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_9_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_1(int idim, CkCallback cb_thread){
  Closure_Block::exchange_2_send_1_21_closure* genClosure = new Closure_Block::exchange_2_send_1_21_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb_thread;
  exchange_2_send_1(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_1(Closure_Block::exchange_2_send_1_21_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_11(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_1_end(Closure_Block::exchange_2_send_1_21_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_11(Closure_Block::exchange_2_send_1_21_closure* gen0) {
  _serial_20(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_11_end(Closure_Block::exchange_2_send_1_21_closure* gen0) {
  exchange_2_send_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_20(Closure_Block::exchange_2_send_1_21_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_20()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb_thread = gen0->getP1();
    { // begin serial block
#line 220 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = 3*comm->iter + idim;
        CkArrayIndex1D myIndex = CkArrayIndex1D(thisIndex);
        CkCallback cb(CkIndex_Block::send_done(), myIndex, thisArrayID);
        if(comm->send1_size==0)
          thisProxy[comm->send1_chare].exchange_2_recv_1(tag, sizeof(MMD_float)*4, true, CkDeviceBuffer((char*)comm->buf_comm_dummy, pack_instance.cuda_stream()));
        else
          thisProxy[comm->send1_chare].exchange_2_recv_1(tag, comm->send1_size, false, CkDeviceBuffer((char*)comm->send1, cb, pack_instance.cuda_stream()));
        cb_thread.send();
      
#line 8565 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_11_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_2(int idim, CkCallback cb_thread){
  Closure_Block::exchange_2_send_2_22_closure* genClosure = new Closure_Block::exchange_2_send_2_22_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb_thread;
  exchange_2_send_2(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_2(Closure_Block::exchange_2_send_2_22_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_12(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_send_2_end(Closure_Block::exchange_2_send_2_22_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_12(Closure_Block::exchange_2_send_2_22_closure* gen0) {
  _serial_21(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_12_end(Closure_Block::exchange_2_send_2_22_closure* gen0) {
  exchange_2_send_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_21(Closure_Block::exchange_2_send_2_22_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_21()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb_thread = gen0->getP1();
    { // begin serial block
#line 232 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

          int tag = 3*comm->iter + idim;
          CkArrayIndex1D myIndex = CkArrayIndex1D(thisIndex);
          CkCallback cb(CkIndex_Block::send_done(), myIndex, thisArrayID);
          if(comm->send2_size==0)
            thisProxy[comm->send2_chare].exchange_2_recv_2(tag, sizeof(MMD_float)*4, true, CkDeviceBuffer((char*)comm->buf_comm_dummy, pack_instance.cuda_stream()));
          else
            thisProxy[comm->send2_chare].exchange_2_recv_2(tag, comm->send2_size, false, CkDeviceBuffer((char*)comm->send2, cb, pack_instance.cuda_stream()));
          cb_thread.send();
      
#line 8634 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_12_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_1_wait(int idim, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "exchange_2_recv_1_wait(int idim, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_2_recv_1_wait(int idim, CkCallback cb){
  Closure_Block::exchange_2_recv_1_wait_23_closure* genClosure = new Closure_Block::exchange_2_recv_1_wait_23_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb;
  _sdag_fnc_exchange_2_recv_1_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_2_recv_1_wait(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_13(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_1_wait_end(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_13(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0) {
  _when_7(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_13_end(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0) {
  exchange_2_recv_1_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_7(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = 3*comm->iter+idim;
    }
  }
  return _when_7(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_7(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(7, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_22(gen0, static_cast<Closure_Block::exchange_2_recv_1_28_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(7);
    c->addClosure(gen0);
    c->entries.push_back(7);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_7_end(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0, Closure_Block::exchange_2_recv_1_28_closure* gen1) {
  _slist_13_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_22(Closure_Block::exchange_2_recv_1_wait_23_closure* gen0, Closure_Block::exchange_2_recv_1_28_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_22()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      size_t& size = gen1->getP1();
      bool& is_dummy = gen1->getP2();
      int & num_device_rdma_fields = gen1->getP3();
      CkDeviceBuffer & deviceBuffer_data = gen1->getP4();
      char* data = (char*) (deviceBuffer_data.ptr);
      { // begin serial block
#line 244 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 8752 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_7_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_2_wait(int idim, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "exchange_2_recv_2_wait(int idim, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_2_recv_2_wait(int idim, CkCallback cb){
  Closure_Block::exchange_2_recv_2_wait_24_closure* genClosure = new Closure_Block::exchange_2_recv_2_wait_24_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb;
  _sdag_fnc_exchange_2_recv_2_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_exchange_2_recv_2_wait(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_14(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_2_wait_end(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_14(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0) {
  _when_8(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_14_end(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0) {
  exchange_2_recv_2_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_8(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = 3*comm->iter+idim;
    }
  }
  return _when_8(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_8(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(8, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_23(gen0, static_cast<Closure_Block::exchange_2_recv_2_29_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(8);
    c->addClosure(gen0);
    c->entries.push_back(8);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_8_end(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0, Closure_Block::exchange_2_recv_2_29_closure* gen1) {
  _slist_14_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_23(Closure_Block::exchange_2_recv_2_wait_24_closure* gen0, Closure_Block::exchange_2_recv_2_29_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_23()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      size_t& size = gen1->getP1();
      bool& is_dummy = gen1->getP2();
      int & num_device_rdma_fields = gen1->getP3();
      CkDeviceBuffer & deviceBuffer_data = gen1->getP4();
      char* data = (char*) (deviceBuffer_data.ptr);
      { // begin serial block
#line 249 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 8871 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_8_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::send_done_wait(int idim, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "send_done_wait(int idim, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_send_done_wait(int idim, CkCallback cb){
  Closure_Block::send_done_wait_25_closure* genClosure = new Closure_Block::send_done_wait_25_closure();
  genClosure->getP0() = idim;
  genClosure->getP1() = cb;
  _sdag_fnc_send_done_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_send_done_wait(Closure_Block::send_done_wait_25_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_15(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::send_done_wait_end(Closure_Block::send_done_wait_25_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_15(Closure_Block::send_done_wait_25_closure* gen0) {
  _if_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_15_end(Closure_Block::send_done_wait_25_closure* gen0) {
  send_done_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_1(Closure_Block::send_done_wait_25_closure* gen0) {
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    if (comm->send1_size>0) {
      _slist_16(gen0);
    } else {
      _if_1_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_1_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _if_2(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_16(Closure_Block::send_done_wait_25_closure* gen0) {
  _when_9(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_16_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _if_1_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_9(Closure_Block::send_done_wait_25_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(9, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_9_end(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(9);
    c->addClosure(gen0);
    c->anyEntries.push_back(9);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_9_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _slist_16_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_2(Closure_Block::send_done_wait_25_closure* gen0) {
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    if (comm->send2_size>0 && comm->charegrid[idim] > 2) {
      _slist_17(gen0);
    } else {
      _if_2_end(gen0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_2_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _serial_24(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_17(Closure_Block::send_done_wait_25_closure* gen0) {
  _when_10(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_17_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _if_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_10(Closure_Block::send_done_wait_25_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(9, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_10_end(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(10);
    c->addClosure(gen0);
    c->anyEntries.push_back(9);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_10_end(Closure_Block::send_done_wait_25_closure* gen0) {
  _slist_17_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_24(Closure_Block::send_done_wait_25_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_24()), CkMyPe(), 0, &projID, this); 
  {
    int& idim = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 260 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 9065 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_15_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_notify_recv_ready(int iswap, CkCallback cb){
  Closure_Block::borders_notify_recv_ready_30_closure* genClosure = new Closure_Block::borders_notify_recv_ready_30_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  borders_notify_recv_ready(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::borders_notify_recv_ready(Closure_Block::borders_notify_recv_ready_30_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_18(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_notify_recv_ready_end(Closure_Block::borders_notify_recv_ready_30_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_18(Closure_Block::borders_notify_recv_ready_30_closure* gen0) {
  _serial_25(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_18_end(Closure_Block::borders_notify_recv_ready_30_closure* gen0) {
  borders_notify_recv_ready_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_25(Closure_Block::borders_notify_recv_ready_30_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_25()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 269 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->maxswap_static*comm->iter + iswap;
        thisProxy[comm->recvchare[iswap]].borders_recv_1(tag);
        cb.send();
      
#line 9129 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_18_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_ready_wait(int iswap, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "borders_recv_ready_wait(int iswap, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_borders_recv_ready_wait(int iswap, CkCallback cb){
  Closure_Block::borders_recv_ready_wait_31_closure* genClosure = new Closure_Block::borders_recv_ready_wait_31_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  _sdag_fnc_borders_recv_ready_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_borders_recv_ready_wait(Closure_Block::borders_recv_ready_wait_31_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_19(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_ready_wait_end(Closure_Block::borders_recv_ready_wait_31_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_19(Closure_Block::borders_recv_ready_wait_31_closure* gen0) {
  _when_11(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_19_end(Closure_Block::borders_recv_ready_wait_31_closure* gen0) {
  borders_recv_ready_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_11(Closure_Block::borders_recv_ready_wait_31_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = comm->maxswap_static*comm->iter+iswap;
    }
  }
  return _when_11(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_11(Closure_Block::borders_recv_ready_wait_31_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(10, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_26(gen0, static_cast<Closure_Block::borders_recv_1_33_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(11);
    c->addClosure(gen0);
    c->entries.push_back(10);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_11_end(Closure_Block::borders_recv_ready_wait_31_closure* gen0, Closure_Block::borders_recv_1_33_closure* gen1) {
  _slist_19_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_26(Closure_Block::borders_recv_ready_wait_31_closure* gen0, Closure_Block::borders_recv_1_33_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_26()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      { // begin serial block
#line 276 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 9242 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_11_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_2(int iswap, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "borders_2(int iswap, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_borders_2(int iswap, CkCallback cb){
  Closure_Block::borders_2_32_closure* genClosure = new Closure_Block::borders_2_32_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  _sdag_fnc_borders_2(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_borders_2(Closure_Block::borders_2_32_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_20(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::borders_2_end(Closure_Block::borders_2_32_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_20(Closure_Block::borders_2_32_closure* gen0) {
  _serial_27(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_20_end(Closure_Block::borders_2_32_closure* gen0) {
  borders_2_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_27(Closure_Block::borders_2_32_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_27()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 281 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->maxswap_static*comm->iter + iswap;
        CkArrayIndex1D myIndex = CkArrayIndex1D(thisIndex);
        CkCallback cb(CkIndex_Block::send_done(), myIndex, thisArrayID);
        thisProxy[comm->send1_chare].borders_recv_2(tag, comm->send1_size, CkDeviceBuffer((char*)comm->send1, cb, pack_instance.cuda_stream()));
      
#line 9315 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_12(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_12(Closure_Block::borders_2_32_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = comm->maxswap_static*comm->iter+iswap;
    }
  }
  return _when_12(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_12(Closure_Block::borders_2_32_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(11, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_13(gen0, static_cast<Closure_Block::borders_recv_2_34_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(12);
    c->addClosure(gen0);
    c->entries.push_back(11);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_12_end(Closure_Block::borders_2_32_closure* gen0, Closure_Block::borders_recv_2_34_closure* gen1) {
  _slist_20_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_13(Closure_Block::borders_2_32_closure* gen0, Closure_Block::borders_recv_2_34_closure* gen1) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(9, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_28(gen0, gen1);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(13);
    c->addClosure(gen0);
    c->addClosure(gen1);
    c->anyEntries.push_back(9);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_13_end(Closure_Block::borders_2_32_closure* gen0, Closure_Block::borders_recv_2_34_closure* gen1) {
  _when_12_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_28(Closure_Block::borders_2_32_closure* gen0, Closure_Block::borders_recv_2_34_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_28()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      size_t& size = gen1->getP1();
      int & num_device_rdma_fields = gen1->getP2();
      CkDeviceBuffer & deviceBuffer_data = gen1->getP3();
      char* data = (char*) (deviceBuffer_data.ptr);
      { // begin serial block
#line 288 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

            cb.send();
        
#line 9411 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_13_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_notify_recv_ready(int iter, int iswap, CkCallback cb){
  Closure_Block::comms_notify_recv_ready_35_closure* genClosure = new Closure_Block::comms_notify_recv_ready_35_closure();
  genClosure->getP0() = iter;
  genClosure->getP1() = iswap;
  genClosure->getP2() = cb;
  comms_notify_recv_ready(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comms_notify_recv_ready(Closure_Block::comms_notify_recv_ready_35_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_21(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_notify_recv_ready_end(Closure_Block::comms_notify_recv_ready_35_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_21(Closure_Block::comms_notify_recv_ready_35_closure* gen0) {
  _serial_29(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_21_end(Closure_Block::comms_notify_recv_ready_35_closure* gen0) {
  comms_notify_recv_ready_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_29(Closure_Block::comms_notify_recv_ready_35_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_29()), CkMyPe(), 0, &projID, this); 
  {
    int& iter = gen0->getP0();
    int& iswap = gen0->getP1();
    CkCallback& cb = gen0->getP2();
    { // begin serial block
#line 295 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        int tag = comm->nswap*iter + iswap;
        thisProxy[comm->recvchare[iswap]].comms_recv_1(tag);
        cb.send();
      
#line 9478 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_21_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_ready_wait(int iswap, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "comms_recv_ready_wait(int iswap, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_recv_ready_wait(int iswap, CkCallback cb){
  Closure_Block::comms_recv_ready_wait_36_closure* genClosure = new Closure_Block::comms_recv_ready_wait_36_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  _sdag_fnc_comms_recv_ready_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_recv_ready_wait(Closure_Block::comms_recv_ready_wait_36_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_22(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_ready_wait_end(Closure_Block::comms_recv_ready_wait_36_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_22(Closure_Block::comms_recv_ready_wait_36_closure* gen0) {
  _when_14(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_22_end(Closure_Block::comms_recv_ready_wait_36_closure* gen0) {
  comms_recv_ready_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_14(Closure_Block::comms_recv_ready_wait_36_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = comm->nswap*comm->iter+iswap;
    }
  }
  return _when_14(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_14(Closure_Block::comms_recv_ready_wait_36_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(12, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_30(gen0, static_cast<Closure_Block::comms_recv_1_37_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(14);
    c->addClosure(gen0);
    c->entries.push_back(12);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_14_end(Closure_Block::comms_recv_ready_wait_36_closure* gen0, Closure_Block::comms_recv_1_37_closure* gen1) {
  _slist_22_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_30(Closure_Block::comms_recv_ready_wait_36_closure* gen0, Closure_Block::comms_recv_1_37_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_30()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      { // begin serial block
#line 302 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        cb.send();
      
#line 9591 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_14_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_send(int iswap, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "comms_send(int iswap, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_send(int iswap, CkCallback cb){
  Closure_Block::comms_send_38_closure* genClosure = new Closure_Block::comms_send_38_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  _sdag_fnc_comms_send(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_send(Closure_Block::comms_send_38_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_23(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_send_end(Closure_Block::comms_send_38_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_23(Closure_Block::comms_send_38_closure* gen0) {
  _serial_31(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_23_end(Closure_Block::comms_send_38_closure* gen0) {
  comms_send_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_31(Closure_Block::comms_send_38_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_31()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 308 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

          int tag = comm->nswap*comm->iter + iswap;
          CkArrayIndex1D myIndex = CkArrayIndex1D(thisIndex);
          CkCallback cb(CkIndex_Block::send_done(), myIndex, thisArrayID);
          thisProxy[comm->send1_chare].comms_recv(tag, comm->send1_size, CkDeviceBuffer((char*)comm->send1, cb, pack_instance.cuda_stream()));
        
#line 9664 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_15(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_15(Closure_Block::comms_send_38_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(9, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_32(gen0);
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(15);
    c->addClosure(gen0);
    c->anyEntries.push_back(9);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_15_end(Closure_Block::comms_send_38_closure* gen0) {
  _slist_23_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_32(Closure_Block::comms_send_38_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_32()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    { // begin serial block
#line 314 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

          cb.send();
        
#line 9711 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _when_15_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_wait(int iswap, CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "comms_recv_wait(int iswap, CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_recv_wait(int iswap, CkCallback cb){
  Closure_Block::comms_recv_wait_39_closure* genClosure = new Closure_Block::comms_recv_wait_39_closure();
  genClosure->getP0() = iswap;
  genClosure->getP1() = cb;
  _sdag_fnc_comms_recv_wait(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comms_recv_wait(Closure_Block::comms_recv_wait_39_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_24(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_wait_end(Closure_Block::comms_recv_wait_39_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_24(Closure_Block::comms_recv_wait_39_closure* gen0) {
  _when_16(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_24_end(Closure_Block::comms_recv_wait_39_closure* gen0) {
  comms_recv_wait_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_16(Closure_Block::comms_recv_wait_39_closure* gen0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      refnum_0 = comm->nswap*comm->iter+iswap;
    }
  }
  return _when_16(gen0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_16(Closure_Block::comms_recv_wait_39_closure* gen0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(13, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_33(gen0, static_cast<Closure_Block::comms_recv_40_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(16);
    c->addClosure(gen0);
    c->entries.push_back(13);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_16_end(Closure_Block::comms_recv_wait_39_closure* gen0, Closure_Block::comms_recv_40_closure* gen1) {
  _slist_24_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_33(Closure_Block::comms_recv_wait_39_closure* gen0, Closure_Block::comms_recv_40_closure* gen1) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_33()), CkMyPe(), 0, &projID, this); 
  {
    int& iswap = gen0->getP0();
    CkCallback& cb = gen0->getP1();
    {
      int& ref = gen1->getP0();
      size_t& size = gen1->getP1();
      int & num_device_rdma_fields = gen1->getP2();
      CkDeviceBuffer & deviceBuffer_data = gen1->getP3();
      char* data = (char*) (deviceBuffer_data.ptr);
      { // begin serial block
#line 319 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

          cb.send();
        
#line 9828 "block.def.h"
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_16_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comm_all(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "comm_all(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comm_all(CkCallback cb){
  Closure_Block::comm_all_42_closure* genClosure = new Closure_Block::comm_all_42_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_comm_all(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comm_all(Closure_Block::comm_all_42_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_25(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comm_all_end(Closure_Block::comm_all_42_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_25(Closure_Block::comm_all_42_closure* gen0) {
  _serial_34(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_25_end(Closure_Block::comm_all_42_closure* gen0) {
  comm_all_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_34(Closure_Block::comm_all_42_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_34()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 326 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        my_iswap = comm->iswap;
        my_nswap = comm->nswap;
        for (my_iswap = 0; my_iswap < my_nswap; my_iswap++) {
          int tag = my_nswap*comm->iter + my_iswap;
          if (comm->sendchare[my_iswap] != comm->index) {
            thisProxy[comm->sendchare[my_iswap]].comm_all_recv(tag,
                (char*)comm->h_buf_comms_send[my_iswap].data(),
                comm->comm_send_size[my_iswap] * sizeof(MMD_float));
          }
        }
      
#line 9905 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _forall_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0(Closure_Block::comm_all_42_closure* gen0) {
  {
    CkCallback& cb = gen0->getP0();
  int __first = (0), __last = (my_nswap-1), __stride = (1);
  SDAG::CCounter *_cf0 = new SDAG::CCounter(__first, __last, __stride);
  if (__first > __last) {
    for(int my_iswap=__first;my_iswap>=__last;my_iswap+=__stride) {
      SDAG::ForallClosure* my_iswap_cl = new SDAG::ForallClosure(my_iswap);
      _slist_26(gen0, my_iswap_cl, _cf0);
    }
  } else {
    for(int my_iswap=__first;my_iswap<=__last;my_iswap+=__stride) {
      SDAG::ForallClosure* my_iswap_cl = new SDAG::ForallClosure(my_iswap);
      _slist_26(gen0, my_iswap_cl, _cf0);
    }
  }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0_end(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _cf0->decrement(); /* DECREMENT 1 */ 
  my_iswap_cl->deref();
  if (_cf0->isDone()) {
    _cf0->deref();
    _serial_36(gen0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_26(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _if_3(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_26_end(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _forall_0_end(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_3(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        if (comm->sendchare[my_iswap] != comm->index) {
          _slist_27(gen0, my_iswap_cl, _cf0);
        } else {
          _if_3_end(gen0, my_iswap_cl, _cf0);
        }
      }
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_3_end(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _slist_26_end(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_27(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _when_17(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_27_end(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  _if_3_end(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_17(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        {
          refnum_0 = my_nswap*comm->iter+my_iswap;
        }
      }
    }
  }
  return _when_17(gen0, my_iswap_cl, _cf0, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_17(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(14, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_35(gen0, my_iswap_cl, _cf0, static_cast<Closure_Block::comm_all_recv_43_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(17);
    c->addClosure(gen0);
    c->addClosure(my_iswap_cl);
    c->addClosure(_cf0);
    c->entries.push_back(14);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_17_end(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, Closure_Block::comm_all_recv_43_closure* gen3) {
  _slist_27_end(gen0, my_iswap_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_35(Closure_Block::comm_all_42_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, Closure_Block::comm_all_recv_43_closure* gen3) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_35()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        {
          int& ref = gen3->getP0();
          char*& data = gen3->getP1();
          size_t& size = gen3->getP2();
          { // begin serial block
#line 340 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

            memcpy(comm->h_buf_comms_recv[my_iswap].data(), data, size);
            Kokkos::deep_copy(comm->h2d_instance, comm->buf_comms_recv[my_iswap], comm->h_buf_comms_recv[my_iswap]);
            cudaEvent_t dep_event;
            hapiCheck(cudaEventCreateWithFlags(&dep_event, cudaEventDisableTiming));
            hapiCheck(cudaEventRecord(dep_event, comm->h2d_instance.cuda_stream()));
            hapiCheck(cudaStreamWaitEvent(comm->unpack_instance.cuda_stream(), dep_event, 0));
            comm->atom_p->unpack_comm(comm->recvnum[my_iswap], comm->firstrecv[my_iswap], comm->buf_comms_recv[my_iswap]);
          
#line 10074 "block.def.h"
          } // end serial block
        }
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_17_end(gen0, my_iswap_cl, _cf0, gen3);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_36(Closure_Block::comm_all_42_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_36()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 351 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"
 cb.send(); 
#line 10095 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_25_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comm_rev_all(CkCallback cb){
  CkPrintf("Error> Direct call to SDAG entry method \'%s::%s\'!\n", "Block", "comm_rev_all(CkCallback cb)"); 
  CkAbort("Direct SDAG call is not allowed for SDAG entry methods having when constructs. Call such SDAG methods using a proxy"); 
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comm_rev_all(CkCallback cb){
  Closure_Block::comm_rev_all_44_closure* genClosure = new Closure_Block::comm_rev_all_44_closure();
  genClosure->getP0() = cb;
  _sdag_fnc_comm_rev_all(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_fnc_comm_rev_all(Closure_Block::comm_rev_all_44_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_28(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::comm_rev_all_end(Closure_Block::comm_rev_all_44_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_28(Closure_Block::comm_rev_all_44_closure* gen0) {
  _serial_37(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_28_end(Closure_Block::comm_rev_all_44_closure* gen0) {
  comm_rev_all_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_37(Closure_Block::comm_rev_all_44_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_37()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 355 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

        my_iswap = comm->iswap;
        my_nswap = comm->nswap;
        for (my_iswap = my_nswap-1; my_iswap >= 0; my_iswap--) {
          int tag = my_nswap*comm->iter + my_iswap;
          if (comm->sendchare[my_iswap] != comm->index) {
            thisProxy[comm->sendchare[my_iswap]].comm_rev_all_recv(tag,
                (char*)comm->h_buf_comms_send[my_iswap].data(),
                comm->comm_send_size[my_iswap] * sizeof(MMD_float));
          }
        }
      
#line 10171 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _forall_1(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_1(Closure_Block::comm_rev_all_44_closure* gen0) {
  {
    CkCallback& cb = gen0->getP0();
  int __first = (0), __last = (my_nswap-1), __stride = (1);
  SDAG::CCounter *_cf1 = new SDAG::CCounter(__first, __last, __stride);
  if (__first > __last) {
    for(int my_iswap=__first;my_iswap>=__last;my_iswap+=__stride) {
      SDAG::ForallClosure* my_iswap_cl = new SDAG::ForallClosure(my_iswap);
      _slist_29(gen0, my_iswap_cl, _cf1);
    }
  } else {
    for(int my_iswap=__first;my_iswap<=__last;my_iswap+=__stride) {
      SDAG::ForallClosure* my_iswap_cl = new SDAG::ForallClosure(my_iswap);
      _slist_29(gen0, my_iswap_cl, _cf1);
    }
  }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_1_end(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _cf1->decrement(); /* DECREMENT 1 */ 
  my_iswap_cl->deref();
  if (_cf1->isDone()) {
    _cf1->deref();
    _serial_39(gen0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_29(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _if_4(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_29_end(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _forall_1_end(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_4(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        if (comm->sendchare[my_iswap] != comm->index) {
          _slist_30(gen0, my_iswap_cl, _cf1);
        } else {
          _if_4_end(gen0, my_iswap_cl, _cf1);
        }
      }
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_4_end(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _slist_29_end(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_30(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _when_18(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_30_end(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  _if_4_end(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_18(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1) {
  CMK_REFNUM_TYPE refnum_0;
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        {
          refnum_0 = my_nswap*comm->iter+my_iswap;
        }
      }
    }
  }
  return _when_18(gen0, my_iswap_cl, _cf1, refnum_0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_18(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, int refnum_0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(15, true, refnum_0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _serial_38(gen0, my_iswap_cl, _cf1, static_cast<Closure_Block::comm_rev_all_recv_45_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(18);
    c->addClosure(gen0);
    c->addClosure(my_iswap_cl);
    c->addClosure(_cf1);
    c->entries.push_back(15);
    c->refnums.push_back(refnum_0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_18_end(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, Closure_Block::comm_rev_all_recv_45_closure* gen3) {
  _slist_30_end(gen0, my_iswap_cl, _cf1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_38(Closure_Block::comm_rev_all_44_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, Closure_Block::comm_rev_all_recv_45_closure* gen3) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_38()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    {
      int& my_iswap = my_iswap_cl->getP0();
      {
        {
          int& ref = gen3->getP0();
          char*& data = gen3->getP1();
          size_t& size = gen3->getP2();
          { // begin serial block
#line 369 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"

            memcpy(comm->h_buf_comms_recv[my_iswap].data(), data, size);
            Kokkos::deep_copy(comm->h2d_instance, comm->buf_comms_recv[my_iswap], comm->h_buf_comms_recv[my_iswap]);
            cudaEvent_t dep_event;
            hapiCheck(cudaEventCreateWithFlags(&dep_event, cudaEventDisableTiming));
            hapiCheck(cudaEventRecord(dep_event, comm->h2d_instance.cuda_stream()));
            hapiCheck(cudaStreamWaitEvent(comm->unpack_instance.cuda_stream(), dep_event, 0));
            int_1d_view_type list = Kokkos::subview(comm->sendlist,my_iswap,Kokkos::ALL());
            comm->atom_p->unpack_reverse(comm->sendnum[my_iswap], list, comm->buf_comms_recv[my_iswap]);
          
#line 10341 "block.def.h"
          } // end serial block
        }
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_18_end(gen0, my_iswap_cl, _cf1, gen3);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_serial_39(Closure_Block::comm_rev_all_44_closure* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_serial_39()), CkMyPe(), 0, &projID, this); 
  {
    CkCallback& cb = gen0->getP0();
    { // begin serial block
#line 381 "/u/ajain18/miniMD/baseline_charm/charm/ljs.ci"
 cb.send(); 
#line 10362 "block.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_28_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::temperature_recv(int iter, double t1){
  Closure_Block::temperature_recv_8_closure* genClosure = new Closure_Block::temperature_recv_8_closure();
  genClosure->getP0() = iter;
  genClosure->getP1() = t1;
  temperature_recv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::temperature_recv(Closure_Block::temperature_recv_8_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(0, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_0(
      static_cast<Closure_Block::temperature_allreduce_7_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::energy_recv(CkReductionMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(1, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_1(
      static_cast<Closure_Block::energy_allreduce_9_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::pressure_recv(CkReductionMsg* msg_msg){
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(msg_msg);
  __dep->pushBuffer(2, new SDAG::MsgClosure(msg_msg));
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
      static_cast<Closure_Block::pressure_allreduce_11_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::start_iterations(){
  Closure_Block::start_iterations_14_closure* genClosure = new Closure_Block::start_iterations_14_closure();
  start_iterations(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::start_iterations(Closure_Block::start_iterations_14_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(3, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(3);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_3(
      static_cast<Closure_Block::mark_start_13_closure*>(c->closure[0])
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::end_iterations(){
  Closure_Block::end_iterations_17_closure* genClosure = new Closure_Block::end_iterations_17_closure();
  end_iterations(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::end_iterations(Closure_Block::end_iterations_17_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(4, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(4);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_4(
      static_cast<Closure_Block::mark_done_16_closure*>(c->closure[0])
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_1_recv_1(int ref){
  Closure_Block::exchange_1_recv_1_26_closure* genClosure = new Closure_Block::exchange_1_recv_1_26_closure();
  genClosure->getP0() = ref;
  exchange_1_recv_1(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_1_recv_1(Closure_Block::exchange_1_recv_1_26_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(5, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(5);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_5(
      static_cast<Closure_Block::exchange_recv_ready_wait_20_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_1_recv_2(int ref){
  Closure_Block::exchange_1_recv_2_27_closure* genClosure = new Closure_Block::exchange_1_recv_2_27_closure();
  genClosure->getP0() = ref;
  exchange_1_recv_2(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_1_recv_2(Closure_Block::exchange_1_recv_2_27_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(6, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(6);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_6(
      static_cast<Closure_Block::exchange_recv_ready_wait_20_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_1(int ref, size_t size, bool is_dummy, CkDeviceBuffer deviceBuffer_data){
  Closure_Block::exchange_2_recv_1_28_closure* genClosure = new Closure_Block::exchange_2_recv_1_28_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = size;
  genClosure->getP2() = is_dummy;
  genClosure->getP3() = 1;
  genClosure->getP4() = deviceBuffer_data;
  exchange_2_recv_1(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_1(Closure_Block::exchange_2_recv_1_28_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(7, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(7);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_7(
      static_cast<Closure_Block::exchange_2_recv_1_wait_23_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_2(int ref, size_t size, bool is_dummy, CkDeviceBuffer deviceBuffer_data){
  Closure_Block::exchange_2_recv_2_29_closure* genClosure = new Closure_Block::exchange_2_recv_2_29_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = size;
  genClosure->getP2() = is_dummy;
  genClosure->getP3() = 1;
  genClosure->getP4() = deviceBuffer_data;
  exchange_2_recv_2(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::exchange_2_recv_2(Closure_Block::exchange_2_recv_2_29_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(8, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(8);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_8(
      static_cast<Closure_Block::exchange_2_recv_2_wait_24_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::send_done(){
  Closure_Block::send_done_41_closure* genClosure = new Closure_Block::send_done_41_closure();
  send_done(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::send_done(Closure_Block::send_done_41_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(9, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(9);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 9:
      _when_9(
        static_cast<Closure_Block::send_done_wait_25_closure*>(c->closure[0])
      );
    break;
    case 10:
      _when_10(
        static_cast<Closure_Block::send_done_wait_25_closure*>(c->closure[0])
      );
    break;
    case 13:
      _when_13(
        static_cast<Closure_Block::borders_2_32_closure*>(c->closure[0]), 
        static_cast<Closure_Block::borders_recv_2_34_closure*>(c->closure[1])
      );
    break;
    case 15:
      _when_15(
        static_cast<Closure_Block::comms_send_38_closure*>(c->closure[0])
      );
    break;
    }
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_1(int ref){
  Closure_Block::borders_recv_1_33_closure* genClosure = new Closure_Block::borders_recv_1_33_closure();
  genClosure->getP0() = ref;
  borders_recv_1(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_1(Closure_Block::borders_recv_1_33_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(10, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(10);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_11(
      static_cast<Closure_Block::borders_recv_ready_wait_31_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_2(int ref, size_t size, CkDeviceBuffer deviceBuffer_data){
  Closure_Block::borders_recv_2_34_closure* genClosure = new Closure_Block::borders_recv_2_34_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = size;
  genClosure->getP2() = 1;
  genClosure->getP3() = deviceBuffer_data;
  borders_recv_2(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::borders_recv_2(Closure_Block::borders_recv_2_34_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(11, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(11);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_12(
      static_cast<Closure_Block::borders_2_32_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_1(int ref){
  Closure_Block::comms_recv_1_37_closure* genClosure = new Closure_Block::comms_recv_1_37_closure();
  genClosure->getP0() = ref;
  comms_recv_1(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv_1(Closure_Block::comms_recv_1_37_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(12, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(12);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_14(
      static_cast<Closure_Block::comms_recv_ready_wait_36_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv(int ref, size_t size, CkDeviceBuffer deviceBuffer_data){
  Closure_Block::comms_recv_40_closure* genClosure = new Closure_Block::comms_recv_40_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = size;
  genClosure->getP2() = 1;
  genClosure->getP3() = deviceBuffer_data;
  comms_recv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comms_recv(Closure_Block::comms_recv_40_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(13, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(13);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_16(
      static_cast<Closure_Block::comms_recv_wait_39_closure*>(c->closure[0]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comm_all_recv(int ref, char *data, size_t size){
  Closure_Block::comm_all_recv_43_closure* genClosure = new Closure_Block::comm_all_recv_43_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = data;
  genClosure->getP2() = size;
  comm_all_recv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comm_all_recv(Closure_Block::comm_all_recv_43_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(14, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(14);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_17(
      static_cast<Closure_Block::comm_all_42_closure*>(c->closure[0]), 
      static_cast<SDAG::ForallClosure*>(c->closure[1]), 
      static_cast<SDAG::CCounter*>(c->closure[2]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comm_rev_all_recv(int ref, char *data, size_t size){
  Closure_Block::comm_rev_all_recv_45_closure* genClosure = new Closure_Block::comm_rev_all_recv_45_closure();
  genClosure->getP0() = ref;
  genClosure->getP1() = data;
  genClosure->getP2() = size;
  comm_rev_all_recv(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::comm_rev_all_recv(Closure_Block::comm_rev_all_recv_45_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  if (!genClosure->hasRefnum) genClosure->setRefnum(genClosure->getP0());
  __dep->pushBuffer(15, genClosure);
  SDAG::Continuation* c = __dep->tryFindContinuation(15);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_18(
      static_cast<Closure_Block::comm_rev_all_44_closure*>(c->closure[0]), 
      static_cast<SDAG::ForallClosure*>(c->closure[1]), 
      static_cast<SDAG::CCounter*>(c->closure[2]), 
      c->refnums[0]
    );
    CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_init() { // Potentially missing Block_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(16,19));
  __dep->addDepends(0,0);
  __dep->addDepends(1,1);
  __dep->addDepends(2,2);
  __dep->addDepends(3,3);
  __dep->addDepends(4,4);
  __dep->addDepends(5,5);
  __dep->addDepends(6,6);
  __dep->addDepends(7,7);
  __dep->addDepends(8,8);
  __dep->addDepends(9,9);
  __dep->addDepends(10,9);
  __dep->addDepends(13,9);
  __dep->addDepends(15,9);
  __dep->addDepends(11,10);
  __dep->addDepends(12,11);
  __dep->addDepends(14,12);
  __dep->addDepends(16,13);
  __dep->addDepends(17,14);
  __dep->addDepends(18,15);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_init() { // Potentially missing Block_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_pup(PUP::er &p) {  // Potentially missing Block_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_register() { // Potentially missing Block_SDAG_CODE in your class definition?
  (void)_sdag_idx_Block_serial_0();
  (void)_sdag_idx_Block_serial_1();
  (void)_sdag_idx_Block_serial_2();
  (void)_sdag_idx_Block_serial_3();
  (void)_sdag_idx_Block_serial_4();
  (void)_sdag_idx_Block_serial_5();
  (void)_sdag_idx_Block_serial_6();
  (void)_sdag_idx_Block_serial_7();
  (void)_sdag_idx_Block_serial_8();
  (void)_sdag_idx_Block_serial_9();
  (void)_sdag_idx_Block_serial_10();
  (void)_sdag_idx_Block_serial_11();
  (void)_sdag_idx_Block_serial_12();
  (void)_sdag_idx_Block_serial_13();
  (void)_sdag_idx_Block_serial_14();
  (void)_sdag_idx_Block_serial_15();
  (void)_sdag_idx_Block_serial_16();
  (void)_sdag_idx_Block_serial_17();
  (void)_sdag_idx_Block_serial_18();
  (void)_sdag_idx_Block_serial_19();
  (void)_sdag_idx_Block_serial_20();
  (void)_sdag_idx_Block_serial_21();
  (void)_sdag_idx_Block_serial_22();
  (void)_sdag_idx_Block_serial_23();
  (void)_sdag_idx_Block_serial_24();
  (void)_sdag_idx_Block_serial_25();
  (void)_sdag_idx_Block_serial_26();
  (void)_sdag_idx_Block_serial_27();
  (void)_sdag_idx_Block_serial_28();
  (void)_sdag_idx_Block_serial_29();
  (void)_sdag_idx_Block_serial_30();
  (void)_sdag_idx_Block_serial_31();
  (void)_sdag_idx_Block_serial_32();
  (void)_sdag_idx_Block_serial_33();
  (void)_sdag_idx_Block_serial_34();
  (void)_sdag_idx_Block_serial_35();
  (void)_sdag_idx_Block_serial_36();
  (void)_sdag_idx_Block_serial_37();
  (void)_sdag_idx_Block_serial_38();
  (void)_sdag_idx_Block_serial_39();
  PUPable_reg(SINGLE_ARG(Closure_Block::init_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::contCreateVelocity_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::run_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::run_neighbour_build_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::reducesum_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::temperature_allreduce_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::temperature_recv_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::energy_allreduce_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::pressure_allreduce_11_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::mark_start_13_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::start_iterations_14_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::markstart_recv_15_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::mark_done_16_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::end_iterations_17_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::markdone_recv_18_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_notify_recv_ready_19_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_recv_ready_wait_20_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_send_1_21_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_send_2_22_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_1_wait_23_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_2_wait_24_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::send_done_wait_25_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_1_recv_1_26_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_1_recv_2_27_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_1_28_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_2_29_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_notify_recv_ready_30_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_ready_wait_31_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_2_32_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_1_33_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_2_34_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_notify_recv_ready_35_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_ready_wait_36_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_1_37_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_send_38_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_wait_39_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_40_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::send_done_41_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_all_42_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_all_recv_43_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_rev_all_44_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_rev_all_recv_45_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::init_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::contCreateVelocity_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::run_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::run_neighbour_build_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::reducesum_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::temperature_allreduce_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::temperature_recv_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::energy_allreduce_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::pressure_allreduce_11_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::mark_start_13_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::start_iterations_14_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::markstart_recv_15_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::mark_done_16_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::end_iterations_17_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::markdone_recv_18_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_notify_recv_ready_19_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_recv_ready_wait_20_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_send_1_21_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_send_2_22_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_1_wait_23_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_2_wait_24_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::send_done_wait_25_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_1_recv_1_26_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_1_recv_2_27_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_1_28_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::exchange_2_recv_2_29_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_notify_recv_ready_30_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_ready_wait_31_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_2_32_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_1_33_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::borders_recv_2_34_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_notify_recv_ready_35_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_ready_wait_36_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_1_37_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_send_38_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_wait_39_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comms_recv_40_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::send_done_41_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_all_42_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_all_recv_43_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_rev_all_44_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::comm_rev_all_recv_45_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_0() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_0() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_0", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_1() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_1() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_1", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_2() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_2() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_2", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_3() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_3();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_3() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_3", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_4() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_4() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_4", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_5() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_5();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_5() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_5", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_6() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_6() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_6", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_7() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_7();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_7() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_7", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_8() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_8() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_8", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_9() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_9();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_9() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_9", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_10() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_10();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_10() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_10", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_11() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_11();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_11() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_11", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_12() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_12();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_12() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_12", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_13() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_13();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_13() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_13", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_14() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_14();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_14() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_14", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_15() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_15();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_15() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_15", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_16() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_16();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_16() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_16", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_17() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_17();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_17() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_17", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_18() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_18();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_18() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_18", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_19() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_19();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_19() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_19", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_20() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_20();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_20() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_20", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_21() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_21();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_21() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_21", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_22() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_22();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_22() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_22", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_23() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_23();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_23() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_23", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_24() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_24();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_24() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_24", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_25() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_25();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_25() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_25", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_26() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_26();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_26() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_26", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_27() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_27();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_27() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_27", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_28() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_28();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_28() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_28", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_29() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_29();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_29() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_29", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_30() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_30();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_30() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_30", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_31() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_31();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_31() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_31", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_32() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_32();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_32() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_32", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_33() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_33();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_33() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_33", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_34() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_34();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_34() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_34", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_35() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_35();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_35() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_35", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_36() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_36();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_36() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_36", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_37() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_37();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_37() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_37", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_38() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_38();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_38() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_38", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_serial_39() { // Potentially missing Block_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Block_serial_39();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_serial_39() { // Potentially missing Block_SDAG_CODE in your class definition?
  return CkRegisterEp("Block_serial_39", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Comm: ArrayElement{
Comm();
Comm(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Comm::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Comm::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Comm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Comm::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Comm::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Comm::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Comm::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm();
 */
void CProxyElement_Comm::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Comm::idx_Comm_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm();
 */
CkArrayID CProxy_Comm::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Comm::idx_Comm_void(), opts);
  return gId;
}
void CProxy_Comm::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Comm::idx_Comm_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Comm::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Comm::idx_Comm_void(), opts);
  return gId;
}
void CProxy_Comm::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Comm::idx_Comm_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Comm::reg_Comm_void() {
  int epidx = CkRegisterEp("Comm()",
      reinterpret_cast<CkCallFnPtr>(_call_Comm_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Comm::_call_Comm_void(void* impl_msg, void* impl_obj_void)
{
  Comm* impl_obj = static_cast<Comm*>(impl_obj_void);
  new (impl_obj_void) Comm();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Comm::reg_Comm_CkMigrateMessage() {
  int epidx = CkRegisterEp("Comm(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Comm_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Comm::_call_Comm_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Comm> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Comm(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Comm::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Comm();
  idx_Comm_void();
  CkRegisterDefaultCtor(__idx, idx_Comm_void());

  // REG: Comm(CkMigrateMessage* impl_msg);
  idx_Comm_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Comm_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerblock(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: array Block: ArrayElement{
Block();
void init();
threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
threaded void run();
threaded void run_neighbour_build(const CkCallback &cb);
void reducesum(int iter, const MMD_float &temp);
void temperature_allreduce(const CkCallback &cb);
void temperature_recv(int iter, double t1);
void energy_allreduce(const CkCallback &cb);
void energy_recv(CkReductionMsg* impl_msg);
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
void mark_start(const CkCallback &cb);
void start_iterations();
void markstart_recv();
void mark_done(const CkCallback &cb);
void end_iterations();
void markdone_recv();
void exchange_notify_recv_ready(int iter, int idim, const CkCallback &cb);
void exchange_recv_ready_wait(int idim, const CkCallback &cb);
void exchange_2_send_1(int idim, const CkCallback &cb_thread);
void exchange_2_send_2(int idim, const CkCallback &cb_thread);
void exchange_2_recv_1_wait(int idim, const CkCallback &cb);
void exchange_2_recv_2_wait(int idim, const CkCallback &cb);
void send_done_wait(int idim, const CkCallback &cb);
void exchange_1_recv_1(int ref);
void exchange_1_recv_2(int ref);
void exchange_2_recv_1(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
void exchange_2_recv_2(int ref, const size_t &size, const bool &is_dummy, CkDeviceBuffer deviceBuffer_data);
void borders_notify_recv_ready(int iswap, const CkCallback &cb);
void borders_recv_ready_wait(int iswap, const CkCallback &cb);
void borders_2(int iswap, const CkCallback &cb);
void borders_recv_1(int ref);
void borders_recv_2(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
void comms_notify_recv_ready(int iter, int iswap, const CkCallback &cb);
void comms_recv_ready_wait(int iswap, const CkCallback &cb);
void comms_recv_1(int ref);
void comms_send(int iswap, const CkCallback &cb);
void comms_recv_wait(int iswap, const CkCallback &cb);
void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
void send_done();
void comm_all(const CkCallback &cb);
void comm_all_recv(int ref, const char *data, const size_t &size);
void comm_rev_all(const CkCallback &cb);
void comm_rev_all_recv(int ref, const char *data, const size_t &size);
Block(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Block::__register("Block", sizeof(Block));

/* REG: array Comm: ArrayElement{
Comm();
Comm(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Comm::__register("Comm", sizeof(Comm));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Block::virtual_pup(PUP::er &p) {
    recursive_pup<Block>(dynamic_cast<Block*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Comm::virtual_pup(PUP::er &p) {
    recursive_pup<Comm>(dynamic_cast<Comm*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
