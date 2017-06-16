`timescale 1ns / 1ps

module bridge(A, B, Z);
	input [7:0]A,B;
	output[7:0]Z;
	wire [7:0]A,B,Z;
	
	assign Z = A | B;
endmodule
