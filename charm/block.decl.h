#ifndef _DECL_block_H_
#define _DECL_block_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "types.h"

/* DECLS: array Block: ArrayElement{
Block();
void init();
threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
threaded void run();
threaded void run_neighbour_build(const CkCallback &cb);
void temperature_allreduce(const CkCallback &cb);
void temperature_recv(CkReductionMsg* impl_msg);
void energy_allreduce(const CkCallback &cb);
void energy_recv(CkReductionMsg* impl_msg);
void pressure_allreduce(const CkCallback &cb);
void pressure_recv(CkReductionMsg* impl_msg);
void exchange_1(int idim, const CkCallback &cb);
void exchange_2(int idim, const CkCallback &cb);
void exchange_1_recv_1(int ref, const char *data, const size_t &size);
void exchange_1_recv_2(int ref, const char *data, const size_t &size);
void exchange_2_recv_1(int ref, const char *data, const size_t &size);
void exchange_2_recv_2(int ref, const char *data, const size_t &size);
void borders_1(int iswap, const CkCallback &cb);
void borders_2(int iswap, const CkCallback &cb);
void borders_recv_1(int ref, const char *data, const size_t &size);
void borders_recv_2(int ref, const char *data, const size_t &size);
void comms(int iswap, const CkCallback &cb);
void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
void comm_all(const CkCallback &cb);
void comm_all_recv(int ref, const char *data, const size_t &size);
void comm_rev_all(const CkCallback &cb);
void comm_rev_all_recv(int ref, const char *data, const size_t &size);
Block(CkMigrateMessage* impl_msg);
};
 */
 class Block;
 class CkIndex_Block;
 class CProxy_Block;
 class CProxyElement_Block;
 class CProxySection_Block;
/* --------------- index object ------------------ */
class CkIndex_Block:public CkIndex_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Block();
     */
    // Entry point registration at startup
    
    static int reg_Block_void();
    // Entry point index lookup
    
    inline static int idx_Block_void() {
      static int epidx = reg_Block_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Block_void(); }
    
    static void _call_Block_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_void(void* impl_msg, void* impl_obj);
    /* DECLS: void init();
     */
    // Entry point registration at startup
    
    static int reg_init_void();
    // Entry point index lookup
    
    inline static int idx_init_void() {
      static int epidx = reg_init_void();
      return epidx;
    }

    
    inline static int idx_init(void (Block::*)() ) {
      return idx_init_void();
    }


    
    static int init() { return idx_init_void(); }
    
    static void _call_init_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_init_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
     */
    // Entry point registration at startup
    
    static int reg_contCreateVelocity_marshall3();
    // Entry point index lookup
    
    inline static int idx_contCreateVelocity_marshall3() {
      static int epidx = reg_contCreateVelocity_marshall3();
      return epidx;
    }

    
    inline static int idx_contCreateVelocity(void (Block::*)(double vxtot, double vytot, double vztot) ) {
      return idx_contCreateVelocity_marshall3();
    }


    
    static int contCreateVelocity(double vxtot, double vytot, double vztot) { return idx_contCreateVelocity_marshall3(); }
    
    static void _call_contCreateVelocity_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_contCreateVelocity_marshall3(void* impl_msg, void* impl_obj);
    
    static void _callthr_contCreateVelocity_marshall3(CkThrCallArg *);
    
    static void _marshallmessagepup_contCreateVelocity_marshall3(PUP::er &p,void *msg);
    /* DECLS: threaded void run();
     */
    // Entry point registration at startup
    
    static int reg_run_void();
    // Entry point index lookup
    
    inline static int idx_run_void() {
      static int epidx = reg_run_void();
      return epidx;
    }

    
    inline static int idx_run(void (Block::*)() ) {
      return idx_run_void();
    }


    
    static int run() { return idx_run_void(); }
    
    static void _call_run_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_void(void* impl_msg, void* impl_obj);
    
    static void _callthr_run_void(CkThrCallArg *);
    /* DECLS: threaded void run_neighbour_build(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_run_neighbour_build_marshall5();
    // Entry point index lookup
    
    inline static int idx_run_neighbour_build_marshall5() {
      static int epidx = reg_run_neighbour_build_marshall5();
      return epidx;
    }

    
    inline static int idx_run_neighbour_build(void (Block::*)(const CkCallback &cb) ) {
      return idx_run_neighbour_build_marshall5();
    }


    
    static int run_neighbour_build(const CkCallback &cb) { return idx_run_neighbour_build_marshall5(); }
    
    static void _call_run_neighbour_build_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_run_neighbour_build_marshall5(void* impl_msg, void* impl_obj);
    
    static void _callthr_run_neighbour_build_marshall5(CkThrCallArg *);
    
    static void _marshallmessagepup_run_neighbour_build_marshall5(PUP::er &p,void *msg);
    /* DECLS: void temperature_allreduce(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_temperature_allreduce_marshall6();
    // Entry point index lookup
    
    inline static int idx_temperature_allreduce_marshall6() {
      static int epidx = reg_temperature_allreduce_marshall6();
      return epidx;
    }

    
    inline static int idx_temperature_allreduce(void (Block::*)(const CkCallback &cb) ) {
      return idx_temperature_allreduce_marshall6();
    }


    
    static int temperature_allreduce(const CkCallback &cb) { return idx_temperature_allreduce_marshall6(); }
    
    static void _call_temperature_allreduce_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_temperature_allreduce_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_temperature_allreduce_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_temperature_allreduce_marshall6(PUP::er &p,void *msg);
    /* DECLS: void temperature_recv(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_temperature_recv_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_temperature_recv_CkReductionMsg() {
      static int epidx = reg_temperature_recv_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_temperature_recv(void (Block::*)(CkReductionMsg* impl_msg) ) {
      return idx_temperature_recv_CkReductionMsg();
    }


    
    static int temperature_recv(CkReductionMsg* impl_msg) { return idx_temperature_recv_CkReductionMsg(); }
    
    static void _call_temperature_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_temperature_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void energy_allreduce(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_energy_allreduce_marshall8();
    // Entry point index lookup
    
    inline static int idx_energy_allreduce_marshall8() {
      static int epidx = reg_energy_allreduce_marshall8();
      return epidx;
    }

    
    inline static int idx_energy_allreduce(void (Block::*)(const CkCallback &cb) ) {
      return idx_energy_allreduce_marshall8();
    }


    
    static int energy_allreduce(const CkCallback &cb) { return idx_energy_allreduce_marshall8(); }
    
    static void _call_energy_allreduce_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_energy_allreduce_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_energy_allreduce_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_energy_allreduce_marshall8(PUP::er &p,void *msg);
    /* DECLS: void energy_recv(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_energy_recv_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_energy_recv_CkReductionMsg() {
      static int epidx = reg_energy_recv_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_energy_recv(void (Block::*)(CkReductionMsg* impl_msg) ) {
      return idx_energy_recv_CkReductionMsg();
    }


    
    static int energy_recv(CkReductionMsg* impl_msg) { return idx_energy_recv_CkReductionMsg(); }
    
    static void _call_energy_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_energy_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void pressure_allreduce(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_pressure_allreduce_marshall10();
    // Entry point index lookup
    
    inline static int idx_pressure_allreduce_marshall10() {
      static int epidx = reg_pressure_allreduce_marshall10();
      return epidx;
    }

    
    inline static int idx_pressure_allreduce(void (Block::*)(const CkCallback &cb) ) {
      return idx_pressure_allreduce_marshall10();
    }


    
    static int pressure_allreduce(const CkCallback &cb) { return idx_pressure_allreduce_marshall10(); }
    
    static void _call_pressure_allreduce_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pressure_allreduce_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_pressure_allreduce_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_pressure_allreduce_marshall10(PUP::er &p,void *msg);
    /* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_pressure_recv_CkReductionMsg();
    // Entry point index lookup
    
    inline static int idx_pressure_recv_CkReductionMsg() {
      static int epidx = reg_pressure_recv_CkReductionMsg();
      return epidx;
    }

    
    inline static int idx_pressure_recv(void (Block::*)(CkReductionMsg* impl_msg) ) {
      return idx_pressure_recv_CkReductionMsg();
    }


    
    static int pressure_recv(CkReductionMsg* impl_msg) { return idx_pressure_recv_CkReductionMsg(); }
    
    static void _call_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_pressure_recv_CkReductionMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void exchange_1(int idim, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_exchange_1_marshall12();
    // Entry point index lookup
    
    inline static int idx_exchange_1_marshall12() {
      static int epidx = reg_exchange_1_marshall12();
      return epidx;
    }

    
    inline static int idx_exchange_1(void (Block::*)(int idim, const CkCallback &cb) ) {
      return idx_exchange_1_marshall12();
    }


    
    static int exchange_1(int idim, const CkCallback &cb) { return idx_exchange_1_marshall12(); }
    
    static void _call_exchange_1_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_1_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_1_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_1_marshall12(PUP::er &p,void *msg);
    /* DECLS: void exchange_2(int idim, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_exchange_2_marshall13();
    // Entry point index lookup
    
    inline static int idx_exchange_2_marshall13() {
      static int epidx = reg_exchange_2_marshall13();
      return epidx;
    }

    
    inline static int idx_exchange_2(void (Block::*)(int idim, const CkCallback &cb) ) {
      return idx_exchange_2_marshall13();
    }


    
    static int exchange_2(int idim, const CkCallback &cb) { return idx_exchange_2_marshall13(); }
    
    static void _call_exchange_2_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_2_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_2_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_2_marshall13(PUP::er &p,void *msg);
    /* DECLS: void exchange_1_recv_1(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_exchange_1_recv_1_marshall14();
    // Entry point index lookup
    
    inline static int idx_exchange_1_recv_1_marshall14() {
      static int epidx = reg_exchange_1_recv_1_marshall14();
      return epidx;
    }

    
    inline static int idx_exchange_1_recv_1(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_exchange_1_recv_1_marshall14();
    }


    
    static int exchange_1_recv_1(int ref, const char *data, const size_t &size) { return idx_exchange_1_recv_1_marshall14(); }
    
    static void _call_exchange_1_recv_1_marshall14(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_1_recv_1_marshall14(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_1_recv_1_marshall14(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_1_recv_1_marshall14(PUP::er &p,void *msg);
    /* DECLS: void exchange_1_recv_2(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_exchange_1_recv_2_marshall15();
    // Entry point index lookup
    
    inline static int idx_exchange_1_recv_2_marshall15() {
      static int epidx = reg_exchange_1_recv_2_marshall15();
      return epidx;
    }

    
    inline static int idx_exchange_1_recv_2(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_exchange_1_recv_2_marshall15();
    }


    
    static int exchange_1_recv_2(int ref, const char *data, const size_t &size) { return idx_exchange_1_recv_2_marshall15(); }
    
    static void _call_exchange_1_recv_2_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_1_recv_2_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_1_recv_2_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_1_recv_2_marshall15(PUP::er &p,void *msg);
    /* DECLS: void exchange_2_recv_1(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_exchange_2_recv_1_marshall16();
    // Entry point index lookup
    
    inline static int idx_exchange_2_recv_1_marshall16() {
      static int epidx = reg_exchange_2_recv_1_marshall16();
      return epidx;
    }

    
    inline static int idx_exchange_2_recv_1(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_exchange_2_recv_1_marshall16();
    }


    
    static int exchange_2_recv_1(int ref, const char *data, const size_t &size) { return idx_exchange_2_recv_1_marshall16(); }
    
    static void _call_exchange_2_recv_1_marshall16(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_2_recv_1_marshall16(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_2_recv_1_marshall16(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_2_recv_1_marshall16(PUP::er &p,void *msg);
    /* DECLS: void exchange_2_recv_2(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_exchange_2_recv_2_marshall17();
    // Entry point index lookup
    
    inline static int idx_exchange_2_recv_2_marshall17() {
      static int epidx = reg_exchange_2_recv_2_marshall17();
      return epidx;
    }

    
    inline static int idx_exchange_2_recv_2(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_exchange_2_recv_2_marshall17();
    }


    
    static int exchange_2_recv_2(int ref, const char *data, const size_t &size) { return idx_exchange_2_recv_2_marshall17(); }
    
    static void _call_exchange_2_recv_2_marshall17(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exchange_2_recv_2_marshall17(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exchange_2_recv_2_marshall17(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exchange_2_recv_2_marshall17(PUP::er &p,void *msg);
    /* DECLS: void borders_1(int iswap, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_borders_1_marshall18();
    // Entry point index lookup
    
    inline static int idx_borders_1_marshall18() {
      static int epidx = reg_borders_1_marshall18();
      return epidx;
    }

    
    inline static int idx_borders_1(void (Block::*)(int iswap, const CkCallback &cb) ) {
      return idx_borders_1_marshall18();
    }


    
    static int borders_1(int iswap, const CkCallback &cb) { return idx_borders_1_marshall18(); }
    
    static void _call_borders_1_marshall18(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_borders_1_marshall18(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_borders_1_marshall18(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_borders_1_marshall18(PUP::er &p,void *msg);
    /* DECLS: void borders_2(int iswap, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_borders_2_marshall19();
    // Entry point index lookup
    
    inline static int idx_borders_2_marshall19() {
      static int epidx = reg_borders_2_marshall19();
      return epidx;
    }

    
    inline static int idx_borders_2(void (Block::*)(int iswap, const CkCallback &cb) ) {
      return idx_borders_2_marshall19();
    }


    
    static int borders_2(int iswap, const CkCallback &cb) { return idx_borders_2_marshall19(); }
    
    static void _call_borders_2_marshall19(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_borders_2_marshall19(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_borders_2_marshall19(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_borders_2_marshall19(PUP::er &p,void *msg);
    /* DECLS: void borders_recv_1(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_borders_recv_1_marshall20();
    // Entry point index lookup
    
    inline static int idx_borders_recv_1_marshall20() {
      static int epidx = reg_borders_recv_1_marshall20();
      return epidx;
    }

    
    inline static int idx_borders_recv_1(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_borders_recv_1_marshall20();
    }


    
    static int borders_recv_1(int ref, const char *data, const size_t &size) { return idx_borders_recv_1_marshall20(); }
    
    static void _call_borders_recv_1_marshall20(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_borders_recv_1_marshall20(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_borders_recv_1_marshall20(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_borders_recv_1_marshall20(PUP::er &p,void *msg);
    /* DECLS: void borders_recv_2(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_borders_recv_2_marshall21();
    // Entry point index lookup
    
    inline static int idx_borders_recv_2_marshall21() {
      static int epidx = reg_borders_recv_2_marshall21();
      return epidx;
    }

    
    inline static int idx_borders_recv_2(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_borders_recv_2_marshall21();
    }


    
    static int borders_recv_2(int ref, const char *data, const size_t &size) { return idx_borders_recv_2_marshall21(); }
    
    static void _call_borders_recv_2_marshall21(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_borders_recv_2_marshall21(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_borders_recv_2_marshall21(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_borders_recv_2_marshall21(PUP::er &p,void *msg);
    /* DECLS: void comms(int iswap, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_comms_marshall22();
    // Entry point index lookup
    
    inline static int idx_comms_marshall22() {
      static int epidx = reg_comms_marshall22();
      return epidx;
    }

    
    inline static int idx_comms(void (Block::*)(int iswap, const CkCallback &cb) ) {
      return idx_comms_marshall22();
    }


    
    static int comms(int iswap, const CkCallback &cb) { return idx_comms_marshall22(); }
    
    static void _call_comms_marshall22(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comms_marshall22(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comms_marshall22(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comms_marshall22(PUP::er &p,void *msg);
    /* DECLS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
     */
    // Entry point registration at startup
    
    static int reg_comms_recv_marshall23();
    // Entry point index lookup
    
    inline static int idx_comms_recv_marshall23() {
      static int epidx = reg_comms_recv_marshall23();
      return epidx;
    }

    
    inline static int idx_comms_recv(void (Block::*)(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data) ) {
      return idx_comms_recv_marshall23();
    }


    
    static int comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data) { return idx_comms_recv_marshall23(); }
    
    static void _call_comms_recv_marshall23(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comms_recv_marshall23(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comms_recv_marshall23(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comms_recv_marshall23(PUP::er &p,void *msg);
    /* DECLS: void comm_all(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_comm_all_marshall24();
    // Entry point index lookup
    
    inline static int idx_comm_all_marshall24() {
      static int epidx = reg_comm_all_marshall24();
      return epidx;
    }

    
    inline static int idx_comm_all(void (Block::*)(const CkCallback &cb) ) {
      return idx_comm_all_marshall24();
    }


    
    static int comm_all(const CkCallback &cb) { return idx_comm_all_marshall24(); }
    
    static void _call_comm_all_marshall24(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comm_all_marshall24(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comm_all_marshall24(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comm_all_marshall24(PUP::er &p,void *msg);
    /* DECLS: void comm_all_recv(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_comm_all_recv_marshall25();
    // Entry point index lookup
    
    inline static int idx_comm_all_recv_marshall25() {
      static int epidx = reg_comm_all_recv_marshall25();
      return epidx;
    }

    
    inline static int idx_comm_all_recv(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_comm_all_recv_marshall25();
    }


    
    static int comm_all_recv(int ref, const char *data, const size_t &size) { return idx_comm_all_recv_marshall25(); }
    
    static void _call_comm_all_recv_marshall25(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comm_all_recv_marshall25(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comm_all_recv_marshall25(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comm_all_recv_marshall25(PUP::er &p,void *msg);
    /* DECLS: void comm_rev_all(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_comm_rev_all_marshall26();
    // Entry point index lookup
    
    inline static int idx_comm_rev_all_marshall26() {
      static int epidx = reg_comm_rev_all_marshall26();
      return epidx;
    }

    
    inline static int idx_comm_rev_all(void (Block::*)(const CkCallback &cb) ) {
      return idx_comm_rev_all_marshall26();
    }


    
    static int comm_rev_all(const CkCallback &cb) { return idx_comm_rev_all_marshall26(); }
    
    static void _call_comm_rev_all_marshall26(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comm_rev_all_marshall26(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comm_rev_all_marshall26(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comm_rev_all_marshall26(PUP::er &p,void *msg);
    /* DECLS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
     */
    // Entry point registration at startup
    
    static int reg_comm_rev_all_recv_marshall27();
    // Entry point index lookup
    
    inline static int idx_comm_rev_all_recv_marshall27() {
      static int epidx = reg_comm_rev_all_recv_marshall27();
      return epidx;
    }

    
    inline static int idx_comm_rev_all_recv(void (Block::*)(int ref, const char *data, const size_t &size) ) {
      return idx_comm_rev_all_recv_marshall27();
    }


    
    static int comm_rev_all_recv(int ref, const char *data, const size_t &size) { return idx_comm_rev_all_recv_marshall27(); }
    
    static void _call_comm_rev_all_recv_marshall27(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_comm_rev_all_recv_marshall27(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_comm_rev_all_recv_marshall27(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_comm_rev_all_recv_marshall27(PUP::er &p,void *msg);
    /* DECLS: Block(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Block_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Block_CkMigrateMessage() {
      static int epidx = reg_Block_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Block_CkMigrateMessage(); }
    
    static void _call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Block : public CProxyElement_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Block(void) {
    }
    CProxyElement_Block(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Block *ckLocal(void) const
    { return (Block *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Block();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
    
    void contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run_neighbour_build(const CkCallback &cb);
 */
    
    void run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_allreduce(const CkCallback &cb);
 */
    
    void temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_recv(CkReductionMsg* impl_msg);
 */
    
    void temperature_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void energy_allreduce(const CkCallback &cb);
 */
    
    void energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void energy_recv(CkReductionMsg* impl_msg);
 */
    
    void energy_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void exchange_1(int idim, const CkCallback &cb);
 */
    
    void exchange_1(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2(int idim, const CkCallback &cb);
 */
    
    void exchange_2(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_1(int iswap, const CkCallback &cb);
 */
    
    void borders_1(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_2(int iswap, const CkCallback &cb);
 */
    
    void borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms(int iswap, const CkCallback &cb);
 */
    
    void comms(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
    
    void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all(const CkCallback &cb);
 */
    
    void comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all(const CkCallback &cb);
 */
    
    void comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Block : public CProxy_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Block(void) {
    }
    CProxy_Block(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Block operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator [] (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Block(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Block(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Block();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
    
    void contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run_neighbour_build(const CkCallback &cb);
 */
    
    void run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_allreduce(const CkCallback &cb);
 */
    
    void temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_recv(CkReductionMsg* impl_msg);
 */
    
    void temperature_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void energy_allreduce(const CkCallback &cb);
 */
    
    void energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void energy_recv(CkReductionMsg* impl_msg);
 */
    
    void energy_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void exchange_1(int idim, const CkCallback &cb);
 */
    
    void exchange_1(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2(int idim, const CkCallback &cb);
 */
    
    void exchange_2(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_1(int iswap, const CkCallback &cb);
 */
    
    void borders_1(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_2(int iswap, const CkCallback &cb);
 */
    
    void borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms(int iswap, const CkCallback &cb);
 */
    
    void comms(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
    
    void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all(const CkCallback &cb);
 */
    
    void comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all(const CkCallback &cb);
 */
    
    void comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Block : public CProxySection_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Block(void) {
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
    CProxyElement_Block operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator [] (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Block(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Block(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Block(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Block();
 */
    

/* DECLS: void init();
 */
    
    void init(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void contCreateVelocity(double vxtot, double vytot, double vztot);
 */
    
    void contCreateVelocity(double vxtot, double vytot, double vztot, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run();
 */
    
    void run(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void run_neighbour_build(const CkCallback &cb);
 */
    
    void run_neighbour_build(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_allreduce(const CkCallback &cb);
 */
    
    void temperature_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void temperature_recv(CkReductionMsg* impl_msg);
 */
    
    void temperature_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void energy_allreduce(const CkCallback &cb);
 */
    
    void energy_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void energy_recv(CkReductionMsg* impl_msg);
 */
    
    void energy_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void pressure_allreduce(const CkCallback &cb);
 */
    
    void pressure_allreduce(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void pressure_recv(CkReductionMsg* impl_msg);
 */
    
    void pressure_recv(CkReductionMsg* impl_msg) ;

/* DECLS: void exchange_1(int idim, const CkCallback &cb);
 */
    
    void exchange_1(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2(int idim, const CkCallback &cb);
 */
    
    void exchange_2(int idim, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_1_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_1_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void exchange_2_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void exchange_2_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_1(int iswap, const CkCallback &cb);
 */
    
    void borders_1(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_2(int iswap, const CkCallback &cb);
 */
    
    void borders_2(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_1(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_1(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void borders_recv_2(int ref, const char *data, const size_t &size);
 */
    
    void borders_recv_2(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms(int iswap, const CkCallback &cb);
 */
    
    void comms(int iswap, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data);
 */
    
    void comms_recv(int ref, const size_t &size, CkDeviceBuffer deviceBuffer_data, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all(const CkCallback &cb);
 */
    
    void comm_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all(const CkCallback &cb);
 */
    
    void comm_rev_all(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void comm_rev_all_recv(int ref, const char *data, const size_t &size);
 */
    
    void comm_rev_all_recv(int ref, const char *data, const size_t &size, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
#define Block_SDAG_CODE                                                        \
public:                                                                        \
  void temperature_allreduce(CkCallback cb);                                   \
  void _sdag_fnc_temperature_allreduce(CkCallback cb);                         \
  void _sdag_fnc_temperature_allreduce(Closure_Block::temperature_allreduce_6_closure* gen0);\
private:                                                                       \
  void temperature_allreduce_end(Closure_Block::temperature_allreduce_6_closure* gen0);\
  void _slist_0(Closure_Block::temperature_allreduce_6_closure* gen0);         \
  void _slist_0_end(Closure_Block::temperature_allreduce_6_closure* gen0);     \
  void _serial_0(Closure_Block::temperature_allreduce_6_closure* gen0);        \
  SDAG::Continuation* _when_0(Closure_Block::temperature_allreduce_6_closure* gen0);\
  SDAG::Continuation* _when_0(Closure_Block::temperature_allreduce_6_closure* gen0, int refnum_0);\
  void _when_0_end(Closure_Block::temperature_allreduce_6_closure* gen0, CkReductionMsg* gen1);\
  void _serial_1(Closure_Block::temperature_allreduce_6_closure* gen0, CkReductionMsg* gen1);\
  void _serial_2(Closure_Block::temperature_allreduce_6_closure* gen0);        \
public:                                                                        \
  void energy_allreduce(CkCallback cb);                                        \
  void _sdag_fnc_energy_allreduce(CkCallback cb);                              \
  void _sdag_fnc_energy_allreduce(Closure_Block::energy_allreduce_8_closure* gen0);\
private:                                                                       \
  void energy_allreduce_end(Closure_Block::energy_allreduce_8_closure* gen0);  \
  void _slist_1(Closure_Block::energy_allreduce_8_closure* gen0);              \
  void _slist_1_end(Closure_Block::energy_allreduce_8_closure* gen0);          \
  void _serial_3(Closure_Block::energy_allreduce_8_closure* gen0);             \
  SDAG::Continuation* _when_1(Closure_Block::energy_allreduce_8_closure* gen0);\
  SDAG::Continuation* _when_1(Closure_Block::energy_allreduce_8_closure* gen0, int refnum_0);\
  void _when_1_end(Closure_Block::energy_allreduce_8_closure* gen0, CkReductionMsg* gen1);\
  void _serial_4(Closure_Block::energy_allreduce_8_closure* gen0, CkReductionMsg* gen1);\
  void _serial_5(Closure_Block::energy_allreduce_8_closure* gen0);             \
public:                                                                        \
  void pressure_allreduce(CkCallback cb);                                      \
  void _sdag_fnc_pressure_allreduce(CkCallback cb);                            \
  void _sdag_fnc_pressure_allreduce(Closure_Block::pressure_allreduce_10_closure* gen0);\
private:                                                                       \
  void pressure_allreduce_end(Closure_Block::pressure_allreduce_10_closure* gen0);\
  void _slist_2(Closure_Block::pressure_allreduce_10_closure* gen0);           \
  void _slist_2_end(Closure_Block::pressure_allreduce_10_closure* gen0);       \
  void _serial_6(Closure_Block::pressure_allreduce_10_closure* gen0);          \
  SDAG::Continuation* _when_2(Closure_Block::pressure_allreduce_10_closure* gen0);\
  SDAG::Continuation* _when_2(Closure_Block::pressure_allreduce_10_closure* gen0, int refnum_0);\
  void _when_2_end(Closure_Block::pressure_allreduce_10_closure* gen0, CkReductionMsg* gen1);\
  void _serial_7(Closure_Block::pressure_allreduce_10_closure* gen0, CkReductionMsg* gen1);\
  void _serial_8(Closure_Block::pressure_allreduce_10_closure* gen0);          \
public:                                                                        \
  void exchange_1(int idim, CkCallback cb);                                    \
  void _sdag_fnc_exchange_1(int idim, CkCallback cb);                          \
  void _sdag_fnc_exchange_1(Closure_Block::exchange_1_12_closure* gen0);       \
private:                                                                       \
  void exchange_1_end(Closure_Block::exchange_1_12_closure* gen0);             \
  void _slist_3(Closure_Block::exchange_1_12_closure* gen0);                   \
  void _slist_3_end(Closure_Block::exchange_1_12_closure* gen0);               \
  void _serial_9(Closure_Block::exchange_1_12_closure* gen0);                  \
  SDAG::Continuation* _when_3(Closure_Block::exchange_1_12_closure* gen0);     \
  SDAG::Continuation* _when_3(Closure_Block::exchange_1_12_closure* gen0, int refnum_0);\
  void _when_3_end(Closure_Block::exchange_1_12_closure* gen0, Closure_Block::exchange_1_recv_1_14_closure* gen1);\
  void _serial_10(Closure_Block::exchange_1_12_closure* gen0, Closure_Block::exchange_1_recv_1_14_closure* gen1);\
  void _if_0(Closure_Block::exchange_1_12_closure* gen0);                      \
  void _if_0_end(Closure_Block::exchange_1_12_closure* gen0);                  \
  void _slist_4(Closure_Block::exchange_1_12_closure* gen0);                   \
  void _slist_4_end(Closure_Block::exchange_1_12_closure* gen0);               \
  SDAG::Continuation* _when_4(Closure_Block::exchange_1_12_closure* gen0);     \
  SDAG::Continuation* _when_4(Closure_Block::exchange_1_12_closure* gen0, int refnum_0);\
  void _when_4_end(Closure_Block::exchange_1_12_closure* gen0, Closure_Block::exchange_1_recv_2_15_closure* gen1);\
  void _serial_11(Closure_Block::exchange_1_12_closure* gen0, Closure_Block::exchange_1_recv_2_15_closure* gen1);\
  void _serial_12(Closure_Block::exchange_1_12_closure* gen0);                 \
public:                                                                        \
  void exchange_2(int idim, CkCallback cb);                                    \
  void _sdag_fnc_exchange_2(int idim, CkCallback cb);                          \
  void _sdag_fnc_exchange_2(Closure_Block::exchange_2_13_closure* gen0);       \
private:                                                                       \
  void exchange_2_end(Closure_Block::exchange_2_13_closure* gen0);             \
  void _slist_5(Closure_Block::exchange_2_13_closure* gen0);                   \
  void _slist_5_end(Closure_Block::exchange_2_13_closure* gen0);               \
  void _serial_13(Closure_Block::exchange_2_13_closure* gen0);                 \
  SDAG::Continuation* _when_5(Closure_Block::exchange_2_13_closure* gen0);     \
  SDAG::Continuation* _when_5(Closure_Block::exchange_2_13_closure* gen0, int refnum_0);\
  void _when_5_end(Closure_Block::exchange_2_13_closure* gen0, Closure_Block::exchange_2_recv_1_16_closure* gen1);\
  void _serial_14(Closure_Block::exchange_2_13_closure* gen0, Closure_Block::exchange_2_recv_1_16_closure* gen1);\
  void _if_1(Closure_Block::exchange_2_13_closure* gen0);                      \
  void _if_1_end(Closure_Block::exchange_2_13_closure* gen0);                  \
  void _slist_6(Closure_Block::exchange_2_13_closure* gen0);                   \
  void _slist_6_end(Closure_Block::exchange_2_13_closure* gen0);               \
  SDAG::Continuation* _when_6(Closure_Block::exchange_2_13_closure* gen0);     \
  SDAG::Continuation* _when_6(Closure_Block::exchange_2_13_closure* gen0, int refnum_0);\
  void _when_6_end(Closure_Block::exchange_2_13_closure* gen0, Closure_Block::exchange_2_recv_2_17_closure* gen1);\
  void _serial_15(Closure_Block::exchange_2_13_closure* gen0, Closure_Block::exchange_2_recv_2_17_closure* gen1);\
  void _serial_16(Closure_Block::exchange_2_13_closure* gen0);                 \
public:                                                                        \
  void borders_1(int iswap, CkCallback cb);                                    \
  void _sdag_fnc_borders_1(int iswap, CkCallback cb);                          \
  void _sdag_fnc_borders_1(Closure_Block::borders_1_18_closure* gen0);         \
private:                                                                       \
  void borders_1_end(Closure_Block::borders_1_18_closure* gen0);               \
  void _slist_7(Closure_Block::borders_1_18_closure* gen0);                    \
  void _slist_7_end(Closure_Block::borders_1_18_closure* gen0);                \
  void _serial_17(Closure_Block::borders_1_18_closure* gen0);                  \
  SDAG::Continuation* _when_7(Closure_Block::borders_1_18_closure* gen0);      \
  SDAG::Continuation* _when_7(Closure_Block::borders_1_18_closure* gen0, int refnum_0);\
  void _when_7_end(Closure_Block::borders_1_18_closure* gen0, Closure_Block::borders_recv_1_20_closure* gen1);\
  void _serial_18(Closure_Block::borders_1_18_closure* gen0, Closure_Block::borders_recv_1_20_closure* gen1);\
public:                                                                        \
  void borders_2(int iswap, CkCallback cb);                                    \
  void _sdag_fnc_borders_2(int iswap, CkCallback cb);                          \
  void _sdag_fnc_borders_2(Closure_Block::borders_2_19_closure* gen0);         \
private:                                                                       \
  void borders_2_end(Closure_Block::borders_2_19_closure* gen0);               \
  void _slist_8(Closure_Block::borders_2_19_closure* gen0);                    \
  void _slist_8_end(Closure_Block::borders_2_19_closure* gen0);                \
  void _serial_19(Closure_Block::borders_2_19_closure* gen0);                  \
  SDAG::Continuation* _when_8(Closure_Block::borders_2_19_closure* gen0);      \
  SDAG::Continuation* _when_8(Closure_Block::borders_2_19_closure* gen0, int refnum_0);\
  void _when_8_end(Closure_Block::borders_2_19_closure* gen0, Closure_Block::borders_recv_2_21_closure* gen1);\
  void _serial_20(Closure_Block::borders_2_19_closure* gen0, Closure_Block::borders_recv_2_21_closure* gen1);\
public:                                                                        \
  void comms(int iswap, CkCallback cb);                                        \
  void _sdag_fnc_comms(int iswap, CkCallback cb);                              \
  void _sdag_fnc_comms(Closure_Block::comms_22_closure* gen0);                 \
private:                                                                       \
  void comms_end(Closure_Block::comms_22_closure* gen0);                       \
  void _slist_9(Closure_Block::comms_22_closure* gen0);                        \
  void _slist_9_end(Closure_Block::comms_22_closure* gen0);                    \
  void _serial_21(Closure_Block::comms_22_closure* gen0);                      \
  SDAG::Continuation* _when_9(Closure_Block::comms_22_closure* gen0);          \
  SDAG::Continuation* _when_9(Closure_Block::comms_22_closure* gen0, int refnum_0);\
  void _when_9_end(Closure_Block::comms_22_closure* gen0, Closure_Block::comms_recv_23_closure* gen1);\
  void _serial_22(Closure_Block::comms_22_closure* gen0, Closure_Block::comms_recv_23_closure* gen1);\
public:                                                                        \
  void comm_all(CkCallback cb);                                                \
  void _sdag_fnc_comm_all(CkCallback cb);                                      \
  void _sdag_fnc_comm_all(Closure_Block::comm_all_24_closure* gen0);           \
private:                                                                       \
  void comm_all_end(Closure_Block::comm_all_24_closure* gen0);                 \
  void _slist_10(Closure_Block::comm_all_24_closure* gen0);                    \
  void _slist_10_end(Closure_Block::comm_all_24_closure* gen0);                \
  void _serial_23(Closure_Block::comm_all_24_closure* gen0);                   \
  void _forall_0(Closure_Block::comm_all_24_closure* gen0);                    \
  void _forall_0_end(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _slist_11(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _slist_11_end(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _if_2(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _if_2_end(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _slist_12(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  void _slist_12_end(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  SDAG::Continuation* _when_10(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0);\
  SDAG::Continuation* _when_10(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, int refnum_0);\
  void _when_10_end(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, Closure_Block::comm_all_recv_25_closure* gen3);\
  void _serial_24(Closure_Block::comm_all_24_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf0, Closure_Block::comm_all_recv_25_closure* gen3);\
  void _serial_25(Closure_Block::comm_all_24_closure* gen0);                   \
public:                                                                        \
  void comm_rev_all(CkCallback cb);                                            \
  void _sdag_fnc_comm_rev_all(CkCallback cb);                                  \
  void _sdag_fnc_comm_rev_all(Closure_Block::comm_rev_all_26_closure* gen0);   \
private:                                                                       \
  void comm_rev_all_end(Closure_Block::comm_rev_all_26_closure* gen0);         \
  void _slist_13(Closure_Block::comm_rev_all_26_closure* gen0);                \
  void _slist_13_end(Closure_Block::comm_rev_all_26_closure* gen0);            \
  void _serial_26(Closure_Block::comm_rev_all_26_closure* gen0);               \
  void _forall_1(Closure_Block::comm_rev_all_26_closure* gen0);                \
  void _forall_1_end(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _slist_14(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _slist_14_end(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _if_3(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _if_3_end(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _slist_15(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  void _slist_15_end(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  SDAG::Continuation* _when_11(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1);\
  SDAG::Continuation* _when_11(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, int refnum_0);\
  void _when_11_end(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, Closure_Block::comm_rev_all_recv_27_closure* gen3);\
  void _serial_27(Closure_Block::comm_rev_all_26_closure* gen0, SDAG::ForallClosure* my_iswap_cl, SDAG::CCounter* _cf1, Closure_Block::comm_rev_all_recv_27_closure* gen3);\
  void _serial_28(Closure_Block::comm_rev_all_26_closure* gen0);               \
public:                                                                        \
  void temperature_recv(CkReductionMsg* msg_msg);                              \
  void energy_recv(CkReductionMsg* msg_msg);                                   \
  void pressure_recv(CkReductionMsg* msg_msg);                                 \
  void exchange_1_recv_1(Closure_Block::exchange_1_recv_1_14_closure* genClosure);\
  void exchange_1_recv_1(int ref, char *data, size_t size);                    \
  void exchange_1_recv_2(Closure_Block::exchange_1_recv_2_15_closure* genClosure);\
  void exchange_1_recv_2(int ref, char *data, size_t size);                    \
  void exchange_2_recv_1(Closure_Block::exchange_2_recv_1_16_closure* genClosure);\
  void exchange_2_recv_1(int ref, char *data, size_t size);                    \
  void exchange_2_recv_2(Closure_Block::exchange_2_recv_2_17_closure* genClosure);\
  void exchange_2_recv_2(int ref, char *data, size_t size);                    \
  void borders_recv_1(Closure_Block::borders_recv_1_20_closure* genClosure);   \
  void borders_recv_1(int ref, char *data, size_t size);                       \
  void borders_recv_2(Closure_Block::borders_recv_2_21_closure* genClosure);   \
  void borders_recv_2(int ref, char *data, size_t size);                       \
  void comms_recv(Closure_Block::comms_recv_23_closure* genClosure);           \
  void comms_recv(int ref, size_t size, CkDeviceBuffer deviceBuffer_data);     \
  void comm_all_recv(Closure_Block::comm_all_recv_25_closure* genClosure);     \
  void comm_all_recv(int ref, char *data, size_t size);                        \
  void comm_rev_all_recv(Closure_Block::comm_rev_all_recv_27_closure* genClosure);\
  void comm_rev_all_recv(int ref, char *data, size_t size);                    \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Block_serial_0();                                       \
  static int _sdag_reg_Block_serial_0();                                       \
  static int _sdag_idx_Block_serial_1();                                       \
  static int _sdag_reg_Block_serial_1();                                       \
  static int _sdag_idx_Block_serial_2();                                       \
  static int _sdag_reg_Block_serial_2();                                       \
  static int _sdag_idx_Block_serial_3();                                       \
  static int _sdag_reg_Block_serial_3();                                       \
  static int _sdag_idx_Block_serial_4();                                       \
  static int _sdag_reg_Block_serial_4();                                       \
  static int _sdag_idx_Block_serial_5();                                       \
  static int _sdag_reg_Block_serial_5();                                       \
  static int _sdag_idx_Block_serial_6();                                       \
  static int _sdag_reg_Block_serial_6();                                       \
  static int _sdag_idx_Block_serial_7();                                       \
  static int _sdag_reg_Block_serial_7();                                       \
  static int _sdag_idx_Block_serial_8();                                       \
  static int _sdag_reg_Block_serial_8();                                       \
  static int _sdag_idx_Block_serial_9();                                       \
  static int _sdag_reg_Block_serial_9();                                       \
  static int _sdag_idx_Block_serial_10();                                      \
  static int _sdag_reg_Block_serial_10();                                      \
  static int _sdag_idx_Block_serial_11();                                      \
  static int _sdag_reg_Block_serial_11();                                      \
  static int _sdag_idx_Block_serial_12();                                      \
  static int _sdag_reg_Block_serial_12();                                      \
  static int _sdag_idx_Block_serial_13();                                      \
  static int _sdag_reg_Block_serial_13();                                      \
  static int _sdag_idx_Block_serial_14();                                      \
  static int _sdag_reg_Block_serial_14();                                      \
  static int _sdag_idx_Block_serial_15();                                      \
  static int _sdag_reg_Block_serial_15();                                      \
  static int _sdag_idx_Block_serial_16();                                      \
  static int _sdag_reg_Block_serial_16();                                      \
  static int _sdag_idx_Block_serial_17();                                      \
  static int _sdag_reg_Block_serial_17();                                      \
  static int _sdag_idx_Block_serial_18();                                      \
  static int _sdag_reg_Block_serial_18();                                      \
  static int _sdag_idx_Block_serial_19();                                      \
  static int _sdag_reg_Block_serial_19();                                      \
  static int _sdag_idx_Block_serial_20();                                      \
  static int _sdag_reg_Block_serial_20();                                      \
  static int _sdag_idx_Block_serial_21();                                      \
  static int _sdag_reg_Block_serial_21();                                      \
  static int _sdag_idx_Block_serial_22();                                      \
  static int _sdag_reg_Block_serial_22();                                      \
  static int _sdag_idx_Block_serial_23();                                      \
  static int _sdag_reg_Block_serial_23();                                      \
  static int _sdag_idx_Block_serial_24();                                      \
  static int _sdag_reg_Block_serial_24();                                      \
  static int _sdag_idx_Block_serial_25();                                      \
  static int _sdag_reg_Block_serial_25();                                      \
  static int _sdag_idx_Block_serial_26();                                      \
  static int _sdag_reg_Block_serial_26();                                      \
  static int _sdag_idx_Block_serial_27();                                      \
  static int _sdag_reg_Block_serial_27();                                      \
  static int _sdag_idx_Block_serial_28();                                      \
  static int _sdag_reg_Block_serial_28();                                      \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Block>CBase_Block;

/* DECLS: array Comm: ArrayElement{
Comm();
Comm(CkMigrateMessage* impl_msg);
};
 */
 class Comm;
 class CkIndex_Comm;
 class CProxy_Comm;
 class CProxyElement_Comm;
 class CProxySection_Comm;
/* --------------- index object ------------------ */
class CkIndex_Comm:public CkIndex_ArrayElement{
  public:
    typedef Comm local_t;
    typedef CkIndex_Comm index_t;
    typedef CProxy_Comm proxy_t;
    typedef CProxyElement_Comm element_t;
    typedef CProxySection_Comm section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Comm();
     */
    // Entry point registration at startup
    
    static int reg_Comm_void();
    // Entry point index lookup
    
    inline static int idx_Comm_void() {
      static int epidx = reg_Comm_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Comm_void(); }
    
    static void _call_Comm_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Comm_void(void* impl_msg, void* impl_obj);
    /* DECLS: Comm(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Comm_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Comm_CkMigrateMessage() {
      static int epidx = reg_Comm_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Comm_CkMigrateMessage(); }
    
    static void _call_Comm_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Comm_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Comm : public CProxyElement_ArrayElement{
  public:
    typedef Comm local_t;
    typedef CkIndex_Comm index_t;
    typedef CProxy_Comm proxy_t;
    typedef CProxyElement_Comm element_t;
    typedef CProxySection_Comm section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Comm(void) {
    }
    CProxyElement_Comm(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Comm *ckLocal(void) const
    { return (Comm *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Comm(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Comm(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Comm(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Comm(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Comm();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: Comm(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Comm : public CProxy_ArrayElement{
  public:
    typedef Comm local_t;
    typedef CkIndex_Comm index_t;
    typedef CProxy_Comm proxy_t;
    typedef CProxyElement_Comm element_t;
    typedef CProxySection_Comm section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Comm(void) {
    }
    CProxy_Comm(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Comm operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Comm(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Comm operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Comm(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Comm operator [] (int idx) const 
        {return CProxyElement_Comm(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Comm operator () (int idx) const 
        {return CProxyElement_Comm(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Comm(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Comm(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Comm();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Comm(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Comm : public CProxySection_ArrayElement{
  public:
    typedef Comm local_t;
    typedef CkIndex_Comm index_t;
    typedef CProxy_Comm proxy_t;
    typedef CProxyElement_Comm element_t;
    typedef CProxySection_Comm section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Comm(void) {
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
    CProxyElement_Comm operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Comm(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Comm operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Comm(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Comm operator [] (int idx) const 
        {return CProxyElement_Comm(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Comm operator () (int idx) const 
        {return CProxyElement_Comm(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Comm(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Comm(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Comm(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Comm(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Comm(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Comm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Comm(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Comm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Comm(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Comm(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Comm(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Comm();
 */
    

/* DECLS: Comm(CkMigrateMessage* impl_msg);
 */

};
#define Comm_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Comm>CBase_Comm;


/* ---------------- method closures -------------- */
class Closure_Block {
  public:


    struct init_2_closure;


    struct contCreateVelocity_3_closure;


    struct run_4_closure;


    struct run_neighbour_build_5_closure;


    struct temperature_allreduce_6_closure;



    struct energy_allreduce_8_closure;



    struct pressure_allreduce_10_closure;



    struct exchange_1_12_closure;


    struct exchange_2_13_closure;


    struct exchange_1_recv_1_14_closure;


    struct exchange_1_recv_2_15_closure;


    struct exchange_2_recv_1_16_closure;


    struct exchange_2_recv_2_17_closure;


    struct borders_1_18_closure;


    struct borders_2_19_closure;


    struct borders_recv_1_20_closure;


    struct borders_recv_2_21_closure;


    struct comms_22_closure;


    struct comms_recv_23_closure;


    struct comm_all_24_closure;


    struct comm_all_recv_25_closure;


    struct comm_rev_all_26_closure;


    struct comm_rev_all_recv_27_closure;


};

/* ---------------- method closures -------------- */
class Closure_Comm {
  public:


};

extern void _registerblock(void);
#endif
