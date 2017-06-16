`timescale 1ns / 1ps
module alu( RST, CLK, ENA, RGA, RGB, RGZ, KEY, OPT);
	input RST, CLK, ENA;
	input [7:0]OPT,RGA,RGB;
	input [1:0]KEY;
	output [7:0]RGZ;
	wire [7:0]A,B,RGZ;
	
	alu_min aluj(RST, CLK, ENA, RGA, RGB, A, KEY, OPT);
	protection prot(RST, CLK, ENA, RGA, RGB, B, KEY);
	bridge jembatan(A, B, RGZ);
	
endmodule
