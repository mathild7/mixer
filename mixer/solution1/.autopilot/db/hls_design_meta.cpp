#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("s_axi_CTRL_BUS_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_AWADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_ARADDR", 6, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_CTRL_BUS_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("in0_V_TDATA", 32, hls_in, 0, "axis", "in_data", 1),
	Port_Property("in1_V_TDATA", 32, hls_in, 1, "axis", "in_data", 1),
	Port_Property("in2_V_TDATA", 32, hls_in, 2, "axis", "in_data", 1),
	Port_Property("in3_V_TDATA", 32, hls_in, 3, "axis", "in_data", 1),
	Port_Property("out_V_TDATA", 32, hls_out, 4, "axis", "out_data", 1),
	Port_Property("in0_V_TVALID", 1, hls_in, 0, "axis", "in_vld", 1),
	Port_Property("in0_V_TREADY", 1, hls_out, 0, "axis", "in_acc", 1),
	Port_Property("in1_V_TVALID", 1, hls_in, 1, "axis", "in_vld", 1),
	Port_Property("in1_V_TREADY", 1, hls_out, 1, "axis", "in_acc", 1),
	Port_Property("in2_V_TVALID", 1, hls_in, 2, "axis", "in_vld", 1),
	Port_Property("in2_V_TREADY", 1, hls_out, 2, "axis", "in_acc", 1),
	Port_Property("in3_V_TVALID", 1, hls_in, 3, "axis", "in_vld", 1),
	Port_Property("in3_V_TREADY", 1, hls_out, 3, "axis", "in_acc", 1),
	Port_Property("out_V_TVALID", 1, hls_out, 4, "axis", "out_vld", 1),
	Port_Property("out_V_TREADY", 1, hls_in, 4, "axis", "out_acc", 1),
};
const char* HLS_Design_Meta::dut_name = "mixer";
