// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Block_codeRepl1_proc_HH_
#define _Block_codeRepl1_proc_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mixer_fadd_32ns_3bkb.h"
#include "mixer_fmul_32ns_3cud.h"
#include "mixer_fcmp_32ns_3dEe.h"

namespace ap_rtl {

struct Block_codeRepl1_proc : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > lev0;
    sc_in< sc_lv<32> > in0_V_TDATA;
    sc_in< sc_logic > in0_V_TVALID;
    sc_out< sc_logic > in0_V_TREADY;
    sc_in< sc_lv<32> > lev1;
    sc_in< sc_lv<32> > in1_V_TDATA;
    sc_in< sc_logic > in1_V_TVALID;
    sc_out< sc_logic > in1_V_TREADY;
    sc_in< sc_lv<32> > lev2;
    sc_in< sc_lv<32> > in2_V_TDATA;
    sc_in< sc_logic > in2_V_TVALID;
    sc_out< sc_logic > in2_V_TREADY;
    sc_in< sc_lv<32> > lev3;
    sc_in< sc_lv<32> > in3_V_TDATA;
    sc_in< sc_logic > in3_V_TVALID;
    sc_out< sc_logic > in3_V_TREADY;
    sc_out< sc_lv<32> > out_V_TDATA;
    sc_out< sc_logic > out_V_TVALID;
    sc_in< sc_logic > out_V_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<5> > ap_var_for_const2;
    sc_signal< sc_lv<5> > ap_var_for_const4;


    // Module declarations
    Block_codeRepl1_proc(sc_module_name name);
    SC_HAS_PROCESS(Block_codeRepl1_proc);

    ~Block_codeRepl1_proc();

    sc_trace_file* mVcdFile;

    mixer_fadd_32ns_3bkb<1,5,32,32,32>* mixer_fadd_32ns_3bkb_U1;
    mixer_fadd_32ns_3bkb<1,5,32,32,32>* mixer_fadd_32ns_3bkb_U2;
    mixer_fmul_32ns_3cud<1,4,32,32,32>* mixer_fmul_32ns_3cud_U3;
    mixer_fmul_32ns_3cud<1,4,32,32,32>* mixer_fmul_32ns_3cud_U4;
    mixer_fmul_32ns_3cud<1,4,32,32,32>* mixer_fmul_32ns_3cud_U5;
    mixer_fmul_32ns_3cud<1,4,32,32,32>* mixer_fmul_32ns_3cud_U6;
    mixer_fcmp_32ns_3dEe<1,1,32,32,1>* mixer_fcmp_32ns_3dEe_U7;
    mixer_fcmp_32ns_3dEe<1,1,32,32,1>* mixer_fcmp_32ns_3dEe_U8;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<23> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > in0_V_0_data_out;
    sc_signal< sc_logic > in0_V_0_vld_in;
    sc_signal< sc_logic > in0_V_0_vld_out;
    sc_signal< sc_logic > in0_V_0_ack_in;
    sc_signal< sc_logic > in0_V_0_ack_out;
    sc_signal< sc_lv<32> > in0_V_0_payload_A;
    sc_signal< sc_lv<32> > in0_V_0_payload_B;
    sc_signal< sc_logic > in0_V_0_sel_rd;
    sc_signal< sc_logic > in0_V_0_sel_wr;
    sc_signal< sc_logic > in0_V_0_sel;
    sc_signal< sc_logic > in0_V_0_load_A;
    sc_signal< sc_logic > in0_V_0_load_B;
    sc_signal< sc_lv<2> > in0_V_0_state;
    sc_signal< sc_logic > in0_V_0_state_cmp_full;
    sc_signal< sc_lv<32> > in1_V_0_data_out;
    sc_signal< sc_logic > in1_V_0_vld_in;
    sc_signal< sc_logic > in1_V_0_vld_out;
    sc_signal< sc_logic > in1_V_0_ack_in;
    sc_signal< sc_logic > in1_V_0_ack_out;
    sc_signal< sc_lv<32> > in1_V_0_payload_A;
    sc_signal< sc_lv<32> > in1_V_0_payload_B;
    sc_signal< sc_logic > in1_V_0_sel_rd;
    sc_signal< sc_logic > in1_V_0_sel_wr;
    sc_signal< sc_logic > in1_V_0_sel;
    sc_signal< sc_logic > in1_V_0_load_A;
    sc_signal< sc_logic > in1_V_0_load_B;
    sc_signal< sc_lv<2> > in1_V_0_state;
    sc_signal< sc_logic > in1_V_0_state_cmp_full;
    sc_signal< sc_lv<32> > in2_V_0_data_out;
    sc_signal< sc_logic > in2_V_0_vld_in;
    sc_signal< sc_logic > in2_V_0_vld_out;
    sc_signal< sc_logic > in2_V_0_ack_in;
    sc_signal< sc_logic > in2_V_0_ack_out;
    sc_signal< sc_lv<32> > in2_V_0_payload_A;
    sc_signal< sc_lv<32> > in2_V_0_payload_B;
    sc_signal< sc_logic > in2_V_0_sel_rd;
    sc_signal< sc_logic > in2_V_0_sel_wr;
    sc_signal< sc_logic > in2_V_0_sel;
    sc_signal< sc_logic > in2_V_0_load_A;
    sc_signal< sc_logic > in2_V_0_load_B;
    sc_signal< sc_lv<2> > in2_V_0_state;
    sc_signal< sc_logic > in2_V_0_state_cmp_full;
    sc_signal< sc_lv<32> > in3_V_0_data_out;
    sc_signal< sc_logic > in3_V_0_vld_in;
    sc_signal< sc_logic > in3_V_0_vld_out;
    sc_signal< sc_logic > in3_V_0_ack_in;
    sc_signal< sc_logic > in3_V_0_ack_out;
    sc_signal< sc_lv<32> > in3_V_0_payload_A;
    sc_signal< sc_lv<32> > in3_V_0_payload_B;
    sc_signal< sc_logic > in3_V_0_sel_rd;
    sc_signal< sc_logic > in3_V_0_sel_wr;
    sc_signal< sc_logic > in3_V_0_sel;
    sc_signal< sc_logic > in3_V_0_load_A;
    sc_signal< sc_logic > in3_V_0_load_B;
    sc_signal< sc_lv<2> > in3_V_0_state;
    sc_signal< sc_logic > in3_V_0_state_cmp_full;
    sc_signal< sc_lv<32> > out_V_1_data_out;
    sc_signal< sc_logic > out_V_1_vld_in;
    sc_signal< sc_logic > out_V_1_vld_out;
    sc_signal< sc_logic > out_V_1_ack_in;
    sc_signal< sc_logic > out_V_1_ack_out;
    sc_signal< sc_lv<32> > out_V_1_payload_A;
    sc_signal< sc_lv<32> > out_V_1_payload_B;
    sc_signal< sc_logic > out_V_1_sel_rd;
    sc_signal< sc_logic > out_V_1_sel_wr;
    sc_signal< sc_logic > out_V_1_sel;
    sc_signal< sc_logic > out_V_1_load_A;
    sc_signal< sc_logic > out_V_1_load_B;
    sc_signal< sc_lv<2> > out_V_1_state;
    sc_signal< sc_logic > out_V_1_state_cmp_full;
    sc_signal< sc_logic > in0_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > or_cond_reg_423;
    sc_signal< sc_logic > in1_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > or_cond1_reg_442;
    sc_signal< sc_logic > in2_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > or_cond2_reg_461;
    sc_signal< sc_logic > in3_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > or_cond3_reg_480;
    sc_signal< sc_logic > out_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > grp_fu_156_p2;
    sc_signal< sc_lv<32> > reg_197;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > grp_fu_185_p2;
    sc_signal< sc_lv<1> > tmp_9_reg_389;
    sc_signal< sc_lv<1> > grp_fu_191_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_394;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > or_cond_fu_242_p2;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<1> > tmp_12_reg_432;
    sc_signal< sc_lv<1> > tmp_13_reg_437;
    sc_signal< sc_lv<1> > or_cond1_fu_287_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< bool > ap_block_state5;
    sc_signal< sc_lv<1> > tmp_26_reg_451;
    sc_signal< sc_lv<1> > tmp_27_reg_456;
    sc_signal< sc_lv<1> > or_cond2_fu_332_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< bool > ap_block_state7;
    sc_signal< sc_lv<1> > tmp_33_reg_470;
    sc_signal< sc_lv<1> > tmp_34_reg_475;
    sc_signal< sc_lv<1> > or_cond3_fu_377_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > grp_fu_165_p2;
    sc_signal< sc_lv<32> > tmp_15_reg_484;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > grp_fu_170_p2;
    sc_signal< sc_lv<32> > tmp_16_reg_489;
    sc_signal< sc_lv<32> > grp_fu_175_p2;
    sc_signal< sc_lv<32> > tmp_18_reg_494;
    sc_signal< sc_lv<32> > grp_fu_180_p2;
    sc_signal< sc_lv<32> > tmp_19_reg_499;
    sc_signal< sc_lv<32> > grp_fu_160_p2;
    sc_signal< sc_lv<32> > tmp_20_reg_504;
    sc_signal< sc_lv<32> > tmp_7_reg_107;
    sc_signal< sc_lv<32> > tmp_s_reg_119;
    sc_signal< sc_lv<32> > tmp_10_reg_131;
    sc_signal< sc_lv<32> > tmp_14_phi_fu_147_p4;
    sc_signal< sc_lv<32> > tmp_14_reg_143;
    sc_signal< bool > ap_block_state9;
    sc_signal< sc_lv<32> > grp_fu_156_p0;
    sc_signal< sc_lv<32> > grp_fu_156_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > grp_fu_185_p0;
    sc_signal< sc_lv<32> > grp_fu_191_p0;
    sc_signal< sc_lv<32> > lev0_to_int_fu_203_p1;
    sc_signal< sc_lv<8> > tmp_5_fu_206_p4;
    sc_signal< sc_lv<23> > tmp_fu_216_p1;
    sc_signal< sc_lv<1> > notrhs_fu_226_p2;
    sc_signal< sc_lv<1> > notlhs_fu_220_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_232_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_238_p2;
    sc_signal< sc_lv<32> > lev1_to_int_fu_248_p1;
    sc_signal< sc_lv<8> > tmp_4_fu_251_p4;
    sc_signal< sc_lv<23> > tmp_6_fu_261_p1;
    sc_signal< sc_lv<1> > notrhs2_fu_271_p2;
    sc_signal< sc_lv<1> > notlhs2_fu_265_p2;
    sc_signal< sc_lv<1> > tmp_11_fu_277_p2;
    sc_signal< sc_lv<1> > tmp_21_fu_283_p2;
    sc_signal< sc_lv<32> > lev2_to_int_fu_293_p1;
    sc_signal< sc_lv<8> > tmp_23_fu_296_p4;
    sc_signal< sc_lv<23> > tmp_24_fu_306_p1;
    sc_signal< sc_lv<1> > notrhs4_fu_316_p2;
    sc_signal< sc_lv<1> > notlhs4_fu_310_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_322_p2;
    sc_signal< sc_lv<1> > tmp_28_fu_328_p2;
    sc_signal< sc_lv<32> > lev3_to_int_fu_338_p1;
    sc_signal< sc_lv<8> > tmp_30_fu_341_p4;
    sc_signal< sc_lv<23> > tmp_31_fu_351_p1;
    sc_signal< sc_lv<1> > notrhs6_fu_361_p2;
    sc_signal< sc_lv<1> > notlhs6_fu_355_p2;
    sc_signal< sc_lv<1> > tmp_32_fu_367_p2;
    sc_signal< sc_lv<1> > tmp_35_fu_373_p2;
    sc_signal< sc_logic > grp_fu_156_ce;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > grp_fu_165_ce;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > grp_fu_170_ce;
    sc_signal< sc_logic > grp_fu_175_ce;
    sc_signal< sc_logic > grp_fu_180_ce;
    sc_signal< sc_lv<23> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<23> ap_ST_fsm_state1;
    static const sc_lv<23> ap_ST_fsm_state2;
    static const sc_lv<23> ap_ST_fsm_state3;
    static const sc_lv<23> ap_ST_fsm_state4;
    static const sc_lv<23> ap_ST_fsm_state5;
    static const sc_lv<23> ap_ST_fsm_state6;
    static const sc_lv<23> ap_ST_fsm_state7;
    static const sc_lv<23> ap_ST_fsm_state8;
    static const sc_lv<23> ap_ST_fsm_state9;
    static const sc_lv<23> ap_ST_fsm_state10;
    static const sc_lv<23> ap_ST_fsm_state11;
    static const sc_lv<23> ap_ST_fsm_state12;
    static const sc_lv<23> ap_ST_fsm_state13;
    static const sc_lv<23> ap_ST_fsm_state14;
    static const sc_lv<23> ap_ST_fsm_state15;
    static const sc_lv<23> ap_ST_fsm_state16;
    static const sc_lv<23> ap_ST_fsm_state17;
    static const sc_lv<23> ap_ST_fsm_state18;
    static const sc_lv<23> ap_ST_fsm_state19;
    static const sc_lv<23> ap_ST_fsm_state20;
    static const sc_lv<23> ap_ST_fsm_state21;
    static const sc_lv<23> ap_ST_fsm_state22;
    static const sc_lv<23> ap_ST_fsm_state23;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_BD4CCCCD;
    static const sc_lv<32> ap_const_lv32_3D4CCCCD;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const4();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state3();
    void thread_ap_block_state5();
    void thread_ap_block_state7();
    void thread_ap_block_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_156_ce();
    void thread_grp_fu_156_p0();
    void thread_grp_fu_156_p1();
    void thread_grp_fu_165_ce();
    void thread_grp_fu_170_ce();
    void thread_grp_fu_175_ce();
    void thread_grp_fu_180_ce();
    void thread_grp_fu_185_p0();
    void thread_grp_fu_191_p0();
    void thread_in0_V_0_ack_in();
    void thread_in0_V_0_ack_out();
    void thread_in0_V_0_data_out();
    void thread_in0_V_0_load_A();
    void thread_in0_V_0_load_B();
    void thread_in0_V_0_sel();
    void thread_in0_V_0_state_cmp_full();
    void thread_in0_V_0_vld_in();
    void thread_in0_V_0_vld_out();
    void thread_in0_V_TDATA_blk_n();
    void thread_in0_V_TREADY();
    void thread_in1_V_0_ack_in();
    void thread_in1_V_0_ack_out();
    void thread_in1_V_0_data_out();
    void thread_in1_V_0_load_A();
    void thread_in1_V_0_load_B();
    void thread_in1_V_0_sel();
    void thread_in1_V_0_state_cmp_full();
    void thread_in1_V_0_vld_in();
    void thread_in1_V_0_vld_out();
    void thread_in1_V_TDATA_blk_n();
    void thread_in1_V_TREADY();
    void thread_in2_V_0_ack_in();
    void thread_in2_V_0_ack_out();
    void thread_in2_V_0_data_out();
    void thread_in2_V_0_load_A();
    void thread_in2_V_0_load_B();
    void thread_in2_V_0_sel();
    void thread_in2_V_0_state_cmp_full();
    void thread_in2_V_0_vld_in();
    void thread_in2_V_0_vld_out();
    void thread_in2_V_TDATA_blk_n();
    void thread_in2_V_TREADY();
    void thread_in3_V_0_ack_in();
    void thread_in3_V_0_ack_out();
    void thread_in3_V_0_data_out();
    void thread_in3_V_0_load_A();
    void thread_in3_V_0_load_B();
    void thread_in3_V_0_sel();
    void thread_in3_V_0_state_cmp_full();
    void thread_in3_V_0_vld_in();
    void thread_in3_V_0_vld_out();
    void thread_in3_V_TDATA_blk_n();
    void thread_in3_V_TREADY();
    void thread_lev0_to_int_fu_203_p1();
    void thread_lev1_to_int_fu_248_p1();
    void thread_lev2_to_int_fu_293_p1();
    void thread_lev3_to_int_fu_338_p1();
    void thread_notlhs2_fu_265_p2();
    void thread_notlhs4_fu_310_p2();
    void thread_notlhs6_fu_355_p2();
    void thread_notlhs_fu_220_p2();
    void thread_notrhs2_fu_271_p2();
    void thread_notrhs4_fu_316_p2();
    void thread_notrhs6_fu_361_p2();
    void thread_notrhs_fu_226_p2();
    void thread_or_cond1_fu_287_p2();
    void thread_or_cond2_fu_332_p2();
    void thread_or_cond3_fu_377_p2();
    void thread_or_cond_fu_242_p2();
    void thread_out_V_1_ack_in();
    void thread_out_V_1_ack_out();
    void thread_out_V_1_data_out();
    void thread_out_V_1_load_A();
    void thread_out_V_1_load_B();
    void thread_out_V_1_sel();
    void thread_out_V_1_state_cmp_full();
    void thread_out_V_1_vld_in();
    void thread_out_V_1_vld_out();
    void thread_out_V_TDATA();
    void thread_out_V_TDATA_blk_n();
    void thread_out_V_TVALID();
    void thread_tmp_11_fu_277_p2();
    void thread_tmp_14_phi_fu_147_p4();
    void thread_tmp_21_fu_283_p2();
    void thread_tmp_23_fu_296_p4();
    void thread_tmp_24_fu_306_p1();
    void thread_tmp_25_fu_322_p2();
    void thread_tmp_28_fu_328_p2();
    void thread_tmp_2_fu_238_p2();
    void thread_tmp_30_fu_341_p4();
    void thread_tmp_31_fu_351_p1();
    void thread_tmp_32_fu_367_p2();
    void thread_tmp_35_fu_373_p2();
    void thread_tmp_4_fu_251_p4();
    void thread_tmp_5_fu_206_p4();
    void thread_tmp_6_fu_261_p1();
    void thread_tmp_8_fu_232_p2();
    void thread_tmp_fu_216_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif