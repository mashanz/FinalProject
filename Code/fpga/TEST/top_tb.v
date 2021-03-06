`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:30 06/21/2017 
// Design Name: 
// Module Name:    top_tb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top_tb;
	reg CLK,A,B;
	wire C;
	///////////////////////////
	//CLOCK
	///////////////////////////
	initial
	begin
		CLK  = 1'b1;
		forever #1 CLK = ~CLK;
	end
	///////////////////////////
	//rag A
	///////////////////////////
	initial
	begin
	A = 0;
	#2 A = 0;
	#2 A = 1;
	#2 A = 0;
	end
	///////////////////////////
	//rag B
	///////////////////////////
	initial
	begin
	B = 0;
	#2 B = 1;
	#2 B = 0;
	#2 B = 1;
	$finish;
	end
	/////////////////////////
	top tops(CLK,A,B,C);
	/////////////////////////
endmodule
