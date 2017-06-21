`timescale 1ns / 1ps
`include "./module/selesai/protection.v"
`include "./module/selesai/alu_min.v"
module alu( RST, CLK, ENA, RGA, RGB, RGZ, KEY, OPT);
	input RST, CLK, ENA;
	input [7:0]OPT;
	input [7:0]RGA;
	input [7:0]RGB;
	output [7:0]RGZ;
	input [1:0]KEY;
	reg [7:0]tmp;
	
	protection prot(RST, CLK, ENA, RGA, RGB, RGZ, KEY);
	alu_min aluj(RST, CLK, ENA, RGA, RGB, RGZ, KEY, OPT);

endmodule