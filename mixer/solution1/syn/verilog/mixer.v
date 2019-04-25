// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="mixer,hls_ip_2017_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z100ffg900-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=7.789000,HLS_SYN_LAT=22,HLS_SYN_TPT=23,HLS_SYN_MEM=0,HLS_SYN_DSP=16,HLS_SYN_FF=1992,HLS_SYN_LUT=3381}" *)

module mixer (
        s_axi_CTRL_BUS_AWVALID,
        s_axi_CTRL_BUS_AWREADY,
        s_axi_CTRL_BUS_AWADDR,
        s_axi_CTRL_BUS_WVALID,
        s_axi_CTRL_BUS_WREADY,
        s_axi_CTRL_BUS_WDATA,
        s_axi_CTRL_BUS_WSTRB,
        s_axi_CTRL_BUS_ARVALID,
        s_axi_CTRL_BUS_ARREADY,
        s_axi_CTRL_BUS_ARADDR,
        s_axi_CTRL_BUS_RVALID,
        s_axi_CTRL_BUS_RREADY,
        s_axi_CTRL_BUS_RDATA,
        s_axi_CTRL_BUS_RRESP,
        s_axi_CTRL_BUS_BVALID,
        s_axi_CTRL_BUS_BREADY,
        s_axi_CTRL_BUS_BRESP,
        ap_clk,
        ap_rst_n,
        in0_V_TDATA,
        in1_V_TDATA,
        in2_V_TDATA,
        in3_V_TDATA,
        out_V_TDATA,
        in0_V_TVALID,
        in0_V_TREADY,
        in1_V_TVALID,
        in1_V_TREADY,
        in2_V_TVALID,
        in2_V_TREADY,
        in3_V_TVALID,
        in3_V_TREADY,
        out_V_TVALID,
        out_V_TREADY
);

parameter    C_S_AXI_CTRL_BUS_DATA_WIDTH = 32;
parameter    C_S_AXI_CTRL_BUS_ADDR_WIDTH = 6;
parameter    C_S_AXI_DATA_WIDTH = 32;
parameter    C_S_AXI_ADDR_WIDTH = 32;

parameter C_S_AXI_CTRL_BUS_WSTRB_WIDTH = (32 / 8);
parameter C_S_AXI_WSTRB_WIDTH = (32 / 8);

input   s_axi_CTRL_BUS_AWVALID;
output   s_axi_CTRL_BUS_AWREADY;
input  [C_S_AXI_CTRL_BUS_ADDR_WIDTH - 1:0] s_axi_CTRL_BUS_AWADDR;
input   s_axi_CTRL_BUS_WVALID;
output   s_axi_CTRL_BUS_WREADY;
input  [C_S_AXI_CTRL_BUS_DATA_WIDTH - 1:0] s_axi_CTRL_BUS_WDATA;
input  [C_S_AXI_CTRL_BUS_WSTRB_WIDTH - 1:0] s_axi_CTRL_BUS_WSTRB;
input   s_axi_CTRL_BUS_ARVALID;
output   s_axi_CTRL_BUS_ARREADY;
input  [C_S_AXI_CTRL_BUS_ADDR_WIDTH - 1:0] s_axi_CTRL_BUS_ARADDR;
output   s_axi_CTRL_BUS_RVALID;
input   s_axi_CTRL_BUS_RREADY;
output  [C_S_AXI_CTRL_BUS_DATA_WIDTH - 1:0] s_axi_CTRL_BUS_RDATA;
output  [1:0] s_axi_CTRL_BUS_RRESP;
output   s_axi_CTRL_BUS_BVALID;
input   s_axi_CTRL_BUS_BREADY;
output  [1:0] s_axi_CTRL_BUS_BRESP;
input   ap_clk;
input   ap_rst_n;
input  [31:0] in0_V_TDATA;
input  [31:0] in1_V_TDATA;
input  [31:0] in2_V_TDATA;
input  [31:0] in3_V_TDATA;
output  [31:0] out_V_TDATA;
input   in0_V_TVALID;
output   in0_V_TREADY;
input   in1_V_TVALID;
output   in1_V_TREADY;
input   in2_V_TVALID;
output   in2_V_TREADY;
input   in3_V_TVALID;
output   in3_V_TREADY;
output   out_V_TVALID;
input   out_V_TREADY;

reg    ap_rst_n_inv;
wire   [31:0] lev0;
wire   [31:0] lev1;
wire   [31:0] lev2;
wire   [31:0] lev3;
wire    Block_codeRepl1_proc_U0_ap_start;
wire    Block_codeRepl1_proc_U0_ap_done;
wire    Block_codeRepl1_proc_U0_ap_continue;
wire    Block_codeRepl1_proc_U0_ap_idle;
wire    Block_codeRepl1_proc_U0_ap_ready;
wire    Block_codeRepl1_proc_U0_in0_V_TREADY;
wire    Block_codeRepl1_proc_U0_in1_V_TREADY;
wire    Block_codeRepl1_proc_U0_in2_V_TREADY;
wire    Block_codeRepl1_proc_U0_in3_V_TREADY;
wire   [31:0] Block_codeRepl1_proc_U0_out_V_TDATA;
wire    Block_codeRepl1_proc_U0_out_V_TVALID;
wire    ap_sync_continue;
wire    Block_codeRepl1_proc_U0_start_full_n;
wire    Block_codeRepl1_proc_U0_start_write;

mixer_CTRL_BUS_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_CTRL_BUS_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_CTRL_BUS_DATA_WIDTH ))
mixer_CTRL_BUS_s_axi_U(
    .AWVALID(s_axi_CTRL_BUS_AWVALID),
    .AWREADY(s_axi_CTRL_BUS_AWREADY),
    .AWADDR(s_axi_CTRL_BUS_AWADDR),
    .WVALID(s_axi_CTRL_BUS_WVALID),
    .WREADY(s_axi_CTRL_BUS_WREADY),
    .WDATA(s_axi_CTRL_BUS_WDATA),
    .WSTRB(s_axi_CTRL_BUS_WSTRB),
    .ARVALID(s_axi_CTRL_BUS_ARVALID),
    .ARREADY(s_axi_CTRL_BUS_ARREADY),
    .ARADDR(s_axi_CTRL_BUS_ARADDR),
    .RVALID(s_axi_CTRL_BUS_RVALID),
    .RREADY(s_axi_CTRL_BUS_RREADY),
    .RDATA(s_axi_CTRL_BUS_RDATA),
    .RRESP(s_axi_CTRL_BUS_RRESP),
    .BVALID(s_axi_CTRL_BUS_BVALID),
    .BREADY(s_axi_CTRL_BUS_BREADY),
    .BRESP(s_axi_CTRL_BUS_BRESP),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .lev0(lev0),
    .lev1(lev1),
    .lev2(lev2),
    .lev3(lev3)
);

Block_codeRepl1_proc Block_codeRepl1_proc_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst_n_inv),
    .ap_start(Block_codeRepl1_proc_U0_ap_start),
    .ap_done(Block_codeRepl1_proc_U0_ap_done),
    .ap_continue(Block_codeRepl1_proc_U0_ap_continue),
    .ap_idle(Block_codeRepl1_proc_U0_ap_idle),
    .ap_ready(Block_codeRepl1_proc_U0_ap_ready),
    .lev0(lev0),
    .in0_V_TDATA(in0_V_TDATA),
    .in0_V_TVALID(in0_V_TVALID),
    .in0_V_TREADY(Block_codeRepl1_proc_U0_in0_V_TREADY),
    .lev1(lev1),
    .in1_V_TDATA(in1_V_TDATA),
    .in1_V_TVALID(in1_V_TVALID),
    .in1_V_TREADY(Block_codeRepl1_proc_U0_in1_V_TREADY),
    .lev2(lev2),
    .in2_V_TDATA(in2_V_TDATA),
    .in2_V_TVALID(in2_V_TVALID),
    .in2_V_TREADY(Block_codeRepl1_proc_U0_in2_V_TREADY),
    .lev3(lev3),
    .in3_V_TDATA(in3_V_TDATA),
    .in3_V_TVALID(in3_V_TVALID),
    .in3_V_TREADY(Block_codeRepl1_proc_U0_in3_V_TREADY),
    .out_V_TDATA(Block_codeRepl1_proc_U0_out_V_TDATA),
    .out_V_TVALID(Block_codeRepl1_proc_U0_out_V_TVALID),
    .out_V_TREADY(out_V_TREADY)
);

assign Block_codeRepl1_proc_U0_ap_continue = 1'b1;

assign Block_codeRepl1_proc_U0_ap_start = 1'b1;

assign Block_codeRepl1_proc_U0_start_full_n = 1'b0;

assign Block_codeRepl1_proc_U0_start_write = 1'b0;

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign ap_sync_continue = 1'b0;

assign in0_V_TREADY = Block_codeRepl1_proc_U0_in0_V_TREADY;

assign in1_V_TREADY = Block_codeRepl1_proc_U0_in1_V_TREADY;

assign in2_V_TREADY = Block_codeRepl1_proc_U0_in2_V_TREADY;

assign in3_V_TREADY = Block_codeRepl1_proc_U0_in3_V_TREADY;

assign out_V_TDATA = Block_codeRepl1_proc_U0_out_V_TDATA;

assign out_V_TVALID = Block_codeRepl1_proc_U0_out_V_TVALID;

endmodule //mixer
