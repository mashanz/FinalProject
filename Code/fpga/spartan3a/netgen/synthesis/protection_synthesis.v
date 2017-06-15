////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: protection_synthesis.v
// /___/   /\     Timestamp: Tue Jun 13 06:51:20 2017
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim protection.ngc protection_synthesis.v 
// Device	: xc3s50a-4-tq144
// Input file	: protection.ngc
// Output file	: C:\REPO\FinalProject\Code\fpga\spartan3a\netgen\synthesis\protection_synthesis.v
// # of Modules	: 1
// Design Name	: protection
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module protection (
  CLK, RST, ENA, RGZ, RGA, RGB, KEY
);
  input CLK;
  input RST;
  input ENA;
  output [7 : 0] RGZ;
  input [7 : 0] RGA;
  input [7 : 0] RGB;
  input [1 : 0] KEY;
  wire CLK_BUFGP_1;
  wire N6;
  wire RGA_0_IBUF_6;
  wire RGA_1_IBUF_7;
  wire RGA_2_IBUF_8;
  wire RGZ_0_17;
  wire RGZ_0_mux0000;
  wire RGZ_1_19;
  wire RGZ_1_mux0000;
  wire RGZ_2_21;
  wire RGZ_2_mux0000;
  wire RGZ_2_not0001;
  wire RGZ_3_24;
  wire RGZ_3_mux00001;
  wire RGZ_4_26;
  wire RGZ_4_mux00001_27;
  wire RGZ_5_28;
  wire RGZ_5_mux00001_29;
  wire RGZ_6_30;
  wire RGZ_7_31;
  wire RST_IBUF_33;
  wire _mux0000_norst;
  wire _mux0001_norst;
  FDE   RGZ_2 (
    .C(CLK_BUFGP_1),
    .CE(RGZ_2_not0001),
    .D(RGZ_2_mux0000),
    .Q(RGZ_2_21)
  );
  FDE   RGZ_1 (
    .C(CLK_BUFGP_1),
    .CE(RGZ_2_not0001),
    .D(RGZ_1_mux0000),
    .Q(RGZ_1_19)
  );
  FDE   RGZ_0 (
    .C(CLK_BUFGP_1),
    .CE(RGZ_2_not0001),
    .D(RGZ_0_mux0000),
    .Q(RGZ_0_17)
  );
  FDR   RGZ_6 (
    .C(CLK_BUFGP_1),
    .D(_mux0001_norst),
    .R(RST_IBUF_33),
    .Q(RGZ_6_30)
  );
  FDR   RGZ_7 (
    .C(CLK_BUFGP_1),
    .D(_mux0000_norst),
    .R(RST_IBUF_33),
    .Q(RGZ_7_31)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \Madd__add0000_xor<1>11  (
    .I0(RGZ_6_30),
    .I1(RGZ_7_31),
    .O(_mux0000_norst)
  );
  LUT4 #(
    .INIT ( 16'h0040 ))
  RGZ_2_mux00001 (
    .I0(RST_IBUF_33),
    .I1(RGA_2_IBUF_8),
    .I2(RGZ_7_31),
    .I3(RGZ_6_30),
    .O(RGZ_2_mux0000)
  );
  LUT4 #(
    .INIT ( 16'h0040 ))
  RGZ_1_mux00001 (
    .I0(RST_IBUF_33),
    .I1(RGA_1_IBUF_7),
    .I2(RGZ_7_31),
    .I3(RGZ_6_30),
    .O(RGZ_1_mux0000)
  );
  LUT4 #(
    .INIT ( 16'h0040 ))
  RGZ_0_mux00001 (
    .I0(RST_IBUF_33),
    .I1(RGZ_7_31),
    .I2(RGA_0_IBUF_6),
    .I3(RGZ_6_30),
    .O(RGZ_0_mux0000)
  );
  LUT3 #(
    .INIT ( 8'hAE ))
  RGZ_2_not00011 (
    .I0(RST_IBUF_33),
    .I1(RGZ_7_31),
    .I2(RGZ_6_30),
    .O(RGZ_2_not0001)
  );
  IBUF   RST_IBUF (
    .I(RST),
    .O(RST_IBUF_33)
  );
  IBUF   RGA_2_IBUF (
    .I(RGA[2]),
    .O(RGA_2_IBUF_8)
  );
  IBUF   RGA_1_IBUF (
    .I(RGA[1]),
    .O(RGA_1_IBUF_7)
  );
  IBUF   RGA_0_IBUF (
    .I(RGA[0]),
    .O(RGA_0_IBUF_6)
  );
  OBUF   RGZ_7_OBUF (
    .I(RGZ_7_31),
    .O(RGZ[7])
  );
  OBUF   RGZ_6_OBUF (
    .I(RGZ_6_30),
    .O(RGZ[6])
  );
  OBUF   RGZ_5_OBUF (
    .I(RGZ_5_28),
    .O(RGZ[5])
  );
  OBUF   RGZ_4_OBUF (
    .I(RGZ_4_26),
    .O(RGZ[4])
  );
  OBUF   RGZ_3_OBUF (
    .I(RGZ_3_24),
    .O(RGZ[3])
  );
  OBUF   RGZ_2_OBUF (
    .I(RGZ_2_21),
    .O(RGZ[2])
  );
  OBUF   RGZ_1_OBUF (
    .I(RGZ_1_19),
    .O(RGZ[1])
  );
  OBUF   RGZ_0_OBUF (
    .I(RGZ_0_17),
    .O(RGZ[0])
  );
  FDR   RGZ_3 (
    .C(CLK_BUFGP_1),
    .D(RGZ_3_mux00001),
    .R(RST_IBUF_33),
    .Q(RGZ_3_24)
  );
  LUT3 #(
    .INIT ( 8'hC6 ))
  RGZ_3_mux000011 (
    .I0(RGZ_7_31),
    .I1(RGZ_3_24),
    .I2(RGZ_6_30),
    .O(RGZ_3_mux00001)
  );
  FDR   RGZ_5 (
    .C(CLK_BUFGP_1),
    .D(RGZ_5_mux00001_29),
    .R(RST_IBUF_33),
    .Q(RGZ_5_28)
  );
  LUT3 #(
    .INIT ( 8'hC6 ))
  RGZ_5_mux00001 (
    .I0(RGZ_4_26),
    .I1(RGZ_5_28),
    .I2(N6),
    .O(RGZ_5_mux00001_29)
  );
  FDR   RGZ_4 (
    .C(CLK_BUFGP_1),
    .D(RGZ_4_mux00001_27),
    .R(RST_IBUF_33),
    .Q(RGZ_4_26)
  );
  LUT4 #(
    .INIT ( 16'h9AAA ))
  RGZ_4_mux00001 (
    .I0(RGZ_4_26),
    .I1(RGZ_6_30),
    .I2(RGZ_7_31),
    .I3(RGZ_3_24),
    .O(RGZ_4_mux00001_27)
  );
  BUFGP   CLK_BUFGP (
    .I(CLK),
    .O(CLK_BUFGP_1)
  );
  INV   \Madd__add0000_xor<0>11_INV_0  (
    .I(RGZ_6_30),
    .O(_mux0001_norst)
  );
  LUT3_L #(
    .INIT ( 8'hF7 ))
  RGZ_5_mux0000_SW0 (
    .I0(RGZ_3_24),
    .I1(RGZ_7_31),
    .I2(RGZ_6_30),
    .LO(N6)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

