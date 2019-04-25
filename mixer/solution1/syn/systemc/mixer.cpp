// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "mixer.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const int mixer::C_S_AXI_DATA_WIDTH = "100000";
const int mixer::C_S_AXI_WSTRB_WIDTH = "100";
const int mixer::C_S_AXI_ADDR_WIDTH = "100000";
const sc_logic mixer::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<32> mixer::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_logic mixer::ap_const_logic_0 = sc_dt::Log_0;

mixer::mixer(sc_module_name name) : sc_module(name), mVcdFile(0) {
    mixer_CTRL_BUS_s_axi_U = new mixer_CTRL_BUS_s_axi<C_S_AXI_CTRL_BUS_ADDR_WIDTH,C_S_AXI_CTRL_BUS_DATA_WIDTH>("mixer_CTRL_BUS_s_axi_U");
    mixer_CTRL_BUS_s_axi_U->AWVALID(s_axi_CTRL_BUS_AWVALID);
    mixer_CTRL_BUS_s_axi_U->AWREADY(s_axi_CTRL_BUS_AWREADY);
    mixer_CTRL_BUS_s_axi_U->AWADDR(s_axi_CTRL_BUS_AWADDR);
    mixer_CTRL_BUS_s_axi_U->WVALID(s_axi_CTRL_BUS_WVALID);
    mixer_CTRL_BUS_s_axi_U->WREADY(s_axi_CTRL_BUS_WREADY);
    mixer_CTRL_BUS_s_axi_U->WDATA(s_axi_CTRL_BUS_WDATA);
    mixer_CTRL_BUS_s_axi_U->WSTRB(s_axi_CTRL_BUS_WSTRB);
    mixer_CTRL_BUS_s_axi_U->ARVALID(s_axi_CTRL_BUS_ARVALID);
    mixer_CTRL_BUS_s_axi_U->ARREADY(s_axi_CTRL_BUS_ARREADY);
    mixer_CTRL_BUS_s_axi_U->ARADDR(s_axi_CTRL_BUS_ARADDR);
    mixer_CTRL_BUS_s_axi_U->RVALID(s_axi_CTRL_BUS_RVALID);
    mixer_CTRL_BUS_s_axi_U->RREADY(s_axi_CTRL_BUS_RREADY);
    mixer_CTRL_BUS_s_axi_U->RDATA(s_axi_CTRL_BUS_RDATA);
    mixer_CTRL_BUS_s_axi_U->RRESP(s_axi_CTRL_BUS_RRESP);
    mixer_CTRL_BUS_s_axi_U->BVALID(s_axi_CTRL_BUS_BVALID);
    mixer_CTRL_BUS_s_axi_U->BREADY(s_axi_CTRL_BUS_BREADY);
    mixer_CTRL_BUS_s_axi_U->BRESP(s_axi_CTRL_BUS_BRESP);
    mixer_CTRL_BUS_s_axi_U->ACLK(ap_clk);
    mixer_CTRL_BUS_s_axi_U->ARESET(ap_rst_n_inv);
    mixer_CTRL_BUS_s_axi_U->ACLK_EN(ap_var_for_const0);
    mixer_CTRL_BUS_s_axi_U->lev0(lev0);
    mixer_CTRL_BUS_s_axi_U->lev1(lev1);
    mixer_CTRL_BUS_s_axi_U->lev2(lev2);
    mixer_CTRL_BUS_s_axi_U->lev3(lev3);
    Block_codeRepl1_proc_U0 = new Block_codeRepl1_proc("Block_codeRepl1_proc_U0");
    Block_codeRepl1_proc_U0->ap_clk(ap_clk);
    Block_codeRepl1_proc_U0->ap_rst(ap_rst_n_inv);
    Block_codeRepl1_proc_U0->ap_start(Block_codeRepl1_proc_U0_ap_start);
    Block_codeRepl1_proc_U0->ap_done(Block_codeRepl1_proc_U0_ap_done);
    Block_codeRepl1_proc_U0->ap_continue(Block_codeRepl1_proc_U0_ap_continue);
    Block_codeRepl1_proc_U0->ap_idle(Block_codeRepl1_proc_U0_ap_idle);
    Block_codeRepl1_proc_U0->ap_ready(Block_codeRepl1_proc_U0_ap_ready);
    Block_codeRepl1_proc_U0->lev0(lev0);
    Block_codeRepl1_proc_U0->in0_V_TDATA(in0_V_TDATA);
    Block_codeRepl1_proc_U0->in0_V_TVALID(in0_V_TVALID);
    Block_codeRepl1_proc_U0->in0_V_TREADY(Block_codeRepl1_proc_U0_in0_V_TREADY);
    Block_codeRepl1_proc_U0->lev1(lev1);
    Block_codeRepl1_proc_U0->in1_V_TDATA(in1_V_TDATA);
    Block_codeRepl1_proc_U0->in1_V_TVALID(in1_V_TVALID);
    Block_codeRepl1_proc_U0->in1_V_TREADY(Block_codeRepl1_proc_U0_in1_V_TREADY);
    Block_codeRepl1_proc_U0->lev2(lev2);
    Block_codeRepl1_proc_U0->in2_V_TDATA(in2_V_TDATA);
    Block_codeRepl1_proc_U0->in2_V_TVALID(in2_V_TVALID);
    Block_codeRepl1_proc_U0->in2_V_TREADY(Block_codeRepl1_proc_U0_in2_V_TREADY);
    Block_codeRepl1_proc_U0->lev3(lev3);
    Block_codeRepl1_proc_U0->in3_V_TDATA(in3_V_TDATA);
    Block_codeRepl1_proc_U0->in3_V_TVALID(in3_V_TVALID);
    Block_codeRepl1_proc_U0->in3_V_TREADY(Block_codeRepl1_proc_U0_in3_V_TREADY);
    Block_codeRepl1_proc_U0->out_V_TDATA(Block_codeRepl1_proc_U0_out_V_TDATA);
    Block_codeRepl1_proc_U0->out_V_TVALID(Block_codeRepl1_proc_U0_out_V_TVALID);
    Block_codeRepl1_proc_U0->out_V_TREADY(out_V_TREADY);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_ap_continue);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_ap_start);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_start_full_n);

    SC_METHOD(thread_Block_codeRepl1_proc_U0_start_write);

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_in0_V_TREADY);
    sensitive << ( Block_codeRepl1_proc_U0_in0_V_TREADY );

    SC_METHOD(thread_in1_V_TREADY);
    sensitive << ( Block_codeRepl1_proc_U0_in1_V_TREADY );

    SC_METHOD(thread_in2_V_TREADY);
    sensitive << ( Block_codeRepl1_proc_U0_in2_V_TREADY );

    SC_METHOD(thread_in3_V_TREADY);
    sensitive << ( Block_codeRepl1_proc_U0_in3_V_TREADY );

    SC_METHOD(thread_out_V_TDATA);
    sensitive << ( Block_codeRepl1_proc_U0_out_V_TDATA );

    SC_METHOD(thread_out_V_TVALID);
    sensitive << ( Block_codeRepl1_proc_U0_out_V_TVALID );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "mixer_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, s_axi_CTRL_BUS_AWVALID, "(port)s_axi_CTRL_BUS_AWVALID");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_AWREADY, "(port)s_axi_CTRL_BUS_AWREADY");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_AWADDR, "(port)s_axi_CTRL_BUS_AWADDR");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_WVALID, "(port)s_axi_CTRL_BUS_WVALID");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_WREADY, "(port)s_axi_CTRL_BUS_WREADY");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_WDATA, "(port)s_axi_CTRL_BUS_WDATA");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_WSTRB, "(port)s_axi_CTRL_BUS_WSTRB");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_ARVALID, "(port)s_axi_CTRL_BUS_ARVALID");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_ARREADY, "(port)s_axi_CTRL_BUS_ARREADY");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_ARADDR, "(port)s_axi_CTRL_BUS_ARADDR");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_RVALID, "(port)s_axi_CTRL_BUS_RVALID");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_RREADY, "(port)s_axi_CTRL_BUS_RREADY");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_RDATA, "(port)s_axi_CTRL_BUS_RDATA");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_RRESP, "(port)s_axi_CTRL_BUS_RRESP");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_BVALID, "(port)s_axi_CTRL_BUS_BVALID");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_BREADY, "(port)s_axi_CTRL_BUS_BREADY");
    sc_trace(mVcdFile, s_axi_CTRL_BUS_BRESP, "(port)s_axi_CTRL_BUS_BRESP");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, in0_V_TDATA, "(port)in0_V_TDATA");
    sc_trace(mVcdFile, in1_V_TDATA, "(port)in1_V_TDATA");
    sc_trace(mVcdFile, in2_V_TDATA, "(port)in2_V_TDATA");
    sc_trace(mVcdFile, in3_V_TDATA, "(port)in3_V_TDATA");
    sc_trace(mVcdFile, out_V_TDATA, "(port)out_V_TDATA");
    sc_trace(mVcdFile, in0_V_TVALID, "(port)in0_V_TVALID");
    sc_trace(mVcdFile, in0_V_TREADY, "(port)in0_V_TREADY");
    sc_trace(mVcdFile, in1_V_TVALID, "(port)in1_V_TVALID");
    sc_trace(mVcdFile, in1_V_TREADY, "(port)in1_V_TREADY");
    sc_trace(mVcdFile, in2_V_TVALID, "(port)in2_V_TVALID");
    sc_trace(mVcdFile, in2_V_TREADY, "(port)in2_V_TREADY");
    sc_trace(mVcdFile, in3_V_TVALID, "(port)in3_V_TVALID");
    sc_trace(mVcdFile, in3_V_TREADY, "(port)in3_V_TREADY");
    sc_trace(mVcdFile, out_V_TVALID, "(port)out_V_TVALID");
    sc_trace(mVcdFile, out_V_TREADY, "(port)out_V_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, lev0, "lev0");
    sc_trace(mVcdFile, lev1, "lev1");
    sc_trace(mVcdFile, lev2, "lev2");
    sc_trace(mVcdFile, lev3, "lev3");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_start, "Block_codeRepl1_proc_U0_ap_start");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_done, "Block_codeRepl1_proc_U0_ap_done");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_continue, "Block_codeRepl1_proc_U0_ap_continue");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_idle, "Block_codeRepl1_proc_U0_ap_idle");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_ap_ready, "Block_codeRepl1_proc_U0_ap_ready");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_in0_V_TREADY, "Block_codeRepl1_proc_U0_in0_V_TREADY");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_in1_V_TREADY, "Block_codeRepl1_proc_U0_in1_V_TREADY");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_in2_V_TREADY, "Block_codeRepl1_proc_U0_in2_V_TREADY");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_in3_V_TREADY, "Block_codeRepl1_proc_U0_in3_V_TREADY");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_out_V_TDATA, "Block_codeRepl1_proc_U0_out_V_TDATA");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_out_V_TVALID, "Block_codeRepl1_proc_U0_out_V_TVALID");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_start_full_n, "Block_codeRepl1_proc_U0_start_full_n");
    sc_trace(mVcdFile, Block_codeRepl1_proc_U0_start_write, "Block_codeRepl1_proc_U0_start_write");
#endif

    }
    mHdltvinHandle.open("mixer.hdltvin.dat");
    mHdltvoutHandle.open("mixer.hdltvout.dat");
}

mixer::~mixer() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete mixer_CTRL_BUS_s_axi_U;
    delete Block_codeRepl1_proc_U0;
}

void mixer::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void mixer::thread_Block_codeRepl1_proc_U0_ap_continue() {
    Block_codeRepl1_proc_U0_ap_continue = ap_const_logic_1;
}

void mixer::thread_Block_codeRepl1_proc_U0_ap_start() {
    Block_codeRepl1_proc_U0_ap_start = ap_const_logic_1;
}

void mixer::thread_Block_codeRepl1_proc_U0_start_full_n() {
    Block_codeRepl1_proc_U0_start_full_n = ap_const_logic_0;
}

void mixer::thread_Block_codeRepl1_proc_U0_start_write() {
    Block_codeRepl1_proc_U0_start_write = ap_const_logic_0;
}

void mixer::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void mixer::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_0;
}

void mixer::thread_in0_V_TREADY() {
    in0_V_TREADY = Block_codeRepl1_proc_U0_in0_V_TREADY.read();
}

void mixer::thread_in1_V_TREADY() {
    in1_V_TREADY = Block_codeRepl1_proc_U0_in1_V_TREADY.read();
}

void mixer::thread_in2_V_TREADY() {
    in2_V_TREADY = Block_codeRepl1_proc_U0_in2_V_TREADY.read();
}

void mixer::thread_in3_V_TREADY() {
    in3_V_TREADY = Block_codeRepl1_proc_U0_in3_V_TREADY.read();
}

void mixer::thread_out_V_TDATA() {
    out_V_TDATA = Block_codeRepl1_proc_U0_out_V_TDATA.read();
}

void mixer::thread_out_V_TVALID() {
    out_V_TVALID = Block_codeRepl1_proc_U0_out_V_TVALID.read();
}

void mixer::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"s_axi_CTRL_BUS_AWVALID\" :  \"" << s_axi_CTRL_BUS_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_CTRL_BUS_AWREADY\" :  \"" << s_axi_CTRL_BUS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_AWADDR\" :  \"" << s_axi_CTRL_BUS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_WVALID\" :  \"" << s_axi_CTRL_BUS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_WREADY\" :  \"" << s_axi_CTRL_BUS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_WDATA\" :  \"" << s_axi_CTRL_BUS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_WSTRB\" :  \"" << s_axi_CTRL_BUS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_ARVALID\" :  \"" << s_axi_CTRL_BUS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_ARREADY\" :  \"" << s_axi_CTRL_BUS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_ARADDR\" :  \"" << s_axi_CTRL_BUS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_RVALID\" :  \"" << s_axi_CTRL_BUS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_RREADY\" :  \"" << s_axi_CTRL_BUS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_RDATA\" :  \"" << s_axi_CTRL_BUS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_RRESP\" :  \"" << s_axi_CTRL_BUS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_BVALID\" :  \"" << s_axi_CTRL_BUS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CTRL_BUS_BREADY\" :  \"" << s_axi_CTRL_BUS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CTRL_BUS_BRESP\" :  \"" << s_axi_CTRL_BUS_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in0_V_TDATA\" :  \"" << in0_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in1_V_TDATA\" :  \"" << in1_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in2_V_TDATA\" :  \"" << in2_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in3_V_TDATA\" :  \"" << in3_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_V_TDATA\" :  \"" << out_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in0_V_TVALID\" :  \"" << in0_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in0_V_TREADY\" :  \"" << in0_V_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in1_V_TVALID\" :  \"" << in1_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in1_V_TREADY\" :  \"" << in1_V_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in2_V_TVALID\" :  \"" << in2_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in2_V_TREADY\" :  \"" << in2_V_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in3_V_TVALID\" :  \"" << in3_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in3_V_TREADY\" :  \"" << in3_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_V_TVALID\" :  \"" << out_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_V_TREADY\" :  \"" << out_V_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
