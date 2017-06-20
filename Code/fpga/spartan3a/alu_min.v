`timescale 1ns / 1ps
module alu_min( RST, CLK, ENA, RGA, RGB, RGZ, KEY, OPT);
	input RST, CLK, ENA;
	input [7:0]OPT,RGA,RGB;
	output [7:0]RGZ;
	input [1:0]KEY;
	reg [7:0]RGZ;
/**********************************************************************
 *                      PROTECTION CELLS                              *
 *********************************************************************/
	always@(posedge CLK)begin
		if(RST) RGZ = 0;
		else begin
		case(OPT)
			8'b00000001: RGZ = 0; 
			8'b00000010: RGZ = RGA + RGB;
			8'b00000011: RGZ = RGA - RGB;
			8'b00000011: RGZ = RGA^RGB;
			8'b00000100: RGZ = RGA&RGB;
			8'b00000101: RGZ = RGA|RGB;
			8'b00000110: RGZ = RGA&&RGB;
			8'b00000111: RGZ = RGA||RGB;

			8'b00001000: RGZ = RGA+1;
			8'b00001001: RGZ = RGA-1;
			8'b00001010: RGZ = RGA<<1;
			8'b00001011: RGZ = RGA>>1;
			8'b00001100: RGZ = !RGA;
			8'b00001101: RGZ = ~RGA;
			8'b00001110: RGZ = RGA+RGA;
			8'b00001111: RGZ = RGA-RGA;

			8'b00010000: RGZ = RGB+RGZ;
			8'b00010001: RGZ = RGB-RGZ;
			
			8'b00010011: RGZ = RGB^RGZ;
			8'b00010100: RGZ = RGB&RGZ;
			8'b00010101: RGZ = RGB|RGZ;
			8'b00010110: RGZ = RGB&&RGZ;
			8'b00010111: RGZ = RGB||RGZ;

			8'b00111000: RGZ = RGZ+1;
			8'b00111001: RGZ = RGZ-1;
			8'b00111010: RGZ = RGZ<<1;
			8'b00111011: RGZ = RGZ>>1;
			8'b00111100: RGZ = !RGZ;
			8'b00111101: RGZ = ~RGZ;
			8'b00111110: RGZ = RGB+RGZ;
			8'b00111111: RGZ = RGB-RGZ;

			8'b00100000: RGZ = RGA+RGB;
			8'b00100001: RGZ = RGA-RGB;
			
			8'b00100011: RGZ = RGA^RGB;
			8'b00100100: RGZ = RGA&RGB;
			8'b00100101: RGZ = RGA|RGB;
			8'b00100110: RGZ = RGA&&RGB;
			8'b00100111: RGZ = RGA||RGB;

			8'b00101000: RGZ = RGA+1;
			8'b00101001: RGZ = RGA-1;
			8'b00101010: RGZ = RGA<<1;
			8'b00101011: RGZ = RGA>>1;
			8'b00101100: RGZ = !RGA;
			8'b00101101: RGZ = ~RGA;
			8'b00101110: RGZ = RGA+RGA;
			8'b00101111: RGZ = RGA-RGA;

			8'b00110000: RGZ = RGZ+RGA;
			8'b00110001: RGZ = RGZ-RGA;
			
			8'b00111000: RGZ = RGZ+1;
			8'b00111001: RGZ = RGZ-1;
			8'b00111010: RGZ = RGZ<<1;
			8'b00111011: RGZ = RGZ>>1;
			8'b00111100: RGZ = !RGZ;
			8'b00111101: RGZ = ~RGZ;
			8'b00111110: RGZ = RGZ+RGB;
			8'b00111111: RGZ = RGZ-RGB;
			/////////////////////////////////////////////////////
			8'b01000000: RGZ=RGA+RGB;
			8'b01000001: RGZ=RGA-RGB;
			8'b01000010: RGZ=RGB-1;

			8'b01000100: RGZ=RGA&&RGB;
			8'b01000101: RGZ=RGA||RGB;
			8'b01000110: RGZ=!RGA;
			8'b01000111: RGZ=~RGA;

			8'b01001000: RGZ=RGA&RGB;
			8'b01001001: RGZ=RGA|RGB;
			8'b01001010: RGZ=RGA^RGB;
			8'b01001011: RGZ=RGA<<1;
			8'b01001100: RGZ=RGA>>1;
			8'b01001101: RGZ=RGA+1;
			8'b01001110: RGZ=RGA-1;
			8'b01001111: RGZ=RGA-1;

			8'b01010000: RGZ=RGA+RGB;
			8'b01010001: RGZ=RGA-RGB;
			8'b01010010: RGZ=RGB-1;
			8'b01010011: RGZ=RGA*RGB;
			8'b01010100: RGZ=RGA&&RGB;
			8'b01010101: RGZ=RGA||RGB;
			8'b01010110: RGZ=!RGA;
			8'b01010111: RGZ=~RGA;

			8'b01011000: RGZ=RGA&RGB;
			8'b01011001: RGZ=RGA|RGB;
			8'b01011010: RGZ=RGA^RGB;
			8'b01011011: RGZ=RGA<<1;
			8'b01011100: RGZ=RGA>>1;
			8'b01011101: RGZ=RGA+1;
			8'b01011110: RGZ=RGA-1;
			8'b01011111: RGZ=RGA-1;

			8'b01100000: RGZ=RGA+RGB;
			8'b01100001: RGZ=RGA-RGB;
			8'b01100010: RGZ=RGB-1;
			
			8'b01100100: RGZ=RGA&&RGB;
			8'b01100101: RGZ=RGA||RGB;
			8'b01100110: RGZ=!RGA;
			8'b01100111: RGZ=~RGA;

			8'b01101000: RGZ=RGA&RGB;
			8'b01101001: RGZ=RGA|RGB;
			8'b01101010: RGZ=RGA^RGB;
			8'b01101011: RGZ=RGA<<1;
			8'b01101100: RGZ=RGA>>1;
			8'b01101101: RGZ=RGA+1;
			8'b01101110: RGZ=RGA-1;
			8'b01101111: RGZ=RGA-1;

			8'b01110000: RGZ=RGA+RGB;
			8'b01110001: RGZ=RGA-RGB;
			8'b01110010: RGZ=RGB-1;
			8'b01110011: RGZ=RGA*RGB;
			8'b01110100: RGZ=RGA&&RGB;
			8'b01110101: RGZ=RGA||RGB;
			8'b01110110: RGZ=!RGA;
			8'b01110111: RGZ=~RGA;

			8'b01111000: RGZ=RGA&RGB;
			8'b01111001: RGZ=RGA|RGB;
			8'b01111010: RGZ=RGA^RGB;
			8'b01111011: RGZ=RGA<<1;
			8'b01111100: RGZ=RGA>>1;
			8'b01111101: RGZ=RGA+1;
			8'b01111110: RGZ=RGA-1;
			8'b01111111: RGZ=RGA-1;

			8'b10000000: RGZ=RGA+RGB;
			8'b10000001: RGZ=RGA-RGB;
			8'b10000010: RGZ=RGB-1;
			
			8'b10000100: RGZ=RGA&&RGB;
			8'b10000101: RGZ=RGA||RGB;
			8'b10000110: RGZ=!RGA;
			8'b10000111: RGZ=~RGA;

			8'b10001000: RGZ=RGA&RGB;
			8'b10001001: RGZ=RGA|RGB;
			8'b10001010: RGZ=RGA^RGB;
			8'b10001011: RGZ=RGA<<1;
			8'b10001100: RGZ=RGA>>1;
			8'b10001101: RGZ=RGA+1;
			8'b10001110: RGZ=RGA-1;
			8'b10001111: RGZ=RGA-1;

			8'b10010000: RGZ=RGA+RGB;
			8'b10010001: RGZ=RGA-RGB;
			8'b10010010: RGZ=RGB-1;

			8'b10010100: RGZ=RGA&&RGB;
			8'b10010101: RGZ=RGA||RGB;
			8'b10010110: RGZ=!RGA;
			8'b10010111: RGZ=~RGA;

			8'b10011000: RGZ=RGA&RGB;
			8'b10011001: RGZ=RGA|RGB;
			8'b10011010: RGZ=RGA^RGB;
			8'b10011011: RGZ=RGA<<1;
			8'b10011100: RGZ=RGA>>1;
			8'b10011101: RGZ=RGA+1;
			8'b10011110: RGZ=RGA-1;
			8'b10011111: RGZ=RGA-1;

			8'b10100000: RGZ=RGA+RGB;
			8'b10100001: RGZ=RGA-RGB;
			8'b10100010: RGZ=RGB-1;
			8'b10100011: RGZ=RGA*RGB;
			8'b10100100: RGZ=RGA&&RGB;
			8'b10100101: RGZ=RGA||RGB;
			8'b10100110: RGZ=!RGA;
			8'b10100111: RGZ=~RGA;

			8'b10101000: RGZ=RGA&RGB;
			8'b10101001: RGZ=RGA|RGB;
			8'b10101010: RGZ=RGA^RGB;
			8'b10101011: RGZ=RGA<<1;
			8'b10101100: RGZ=RGA>>1;
			8'b10101101: RGZ=RGA+1;
			8'b10101110: RGZ=RGA-1;
			8'b10101111: RGZ=RGA-1;

			8'b10110000: RGZ=RGA+RGB;
			8'b10110001: RGZ=RGA-RGB;
			8'b10110010: RGZ=RGB-1;
			8'b10110011: RGZ=RGA*RGB;
			8'b10110100: RGZ=RGA&&RGB;
			8'b10110101: RGZ=RGA||RGB;
			8'b10110110: RGZ=!RGA;
			8'b10110111: RGZ=~RGA;

			8'b10111000: RGZ=RGA&RGB;
			8'b10111001: RGZ=RGA|RGB;
			8'b10111010: RGZ=RGA^RGB;
			8'b10111011: RGZ=RGA<<1;
			8'b10111100: RGZ=RGA>>1;
			8'b10111101: RGZ=RGA+1;
			8'b10111110: RGZ=RGA-1;
			8'b10111111: RGZ=RGA-1;

			8'b11000000: RGZ=RGA+RGB;
			8'b11000001: RGZ=RGA-RGB;
			8'b11000010: RGZ=RGB-1;
			8'b11000011: RGZ=RGA*RGB;
			8'b11000100: RGZ=RGA&&RGB;
			8'b11000101: RGZ=RGA||RGB;
			8'b11000110: RGZ=!RGA;
			8'b11000111: RGZ=~RGA;

			8'b11001000: RGZ=RGA&RGB;
			8'b11001001: RGZ=RGA|RGB;
			8'b11001010: RGZ=RGA^RGB;
			8'b11001011: RGZ=RGA<<1;
			8'b11001100: RGZ=RGA>>1;
			8'b11001101: RGZ=RGA+1;
			8'b11001110: RGZ=RGA-1;
			8'b11001111: RGZ=RGA-1;

			8'b11010000: RGZ=RGA+RGB;
			8'b11010001: RGZ=RGA-RGB;
			8'b11010010: RGZ=RGB-1;
			8'b11010011: RGZ=RGA*RGB;
			8'b11010100: RGZ=RGA&&RGB;
			8'b11010101: RGZ=RGA||RGB;
			8'b11010110: RGZ=!RGA;
			8'b11010111: RGZ=~RGA;

			8'b11011000: RGZ=RGA&RGB;
			8'b11011001: RGZ=RGA|RGB;
			8'b11011010: RGZ=RGA^RGB;
			8'b11011011: RGZ=RGA<<1;
			8'b11011100: RGZ=RGA>>1;
			8'b11011101: RGZ=RGA+1;
			8'b11011110: RGZ=RGA-1;
			8'b11011111: RGZ=RGA-1;

			8'b11100000: RGZ=RGA+RGB;
			8'b11100001: RGZ=RGA-RGB;
			8'b11100010: RGZ=RGB-1;
			8'b11100011: RGZ=RGA*RGB;
			8'b11100100: RGZ=RGA&&RGB;
			8'b11100101: RGZ=RGA||RGB;
			8'b11100110: RGZ=!RGA;
			8'b11100111: RGZ=~RGA;

			8'b11101000: RGZ=RGA&RGB;
			8'b11101001: RGZ=RGA|RGB;
			8'b11101010: RGZ=RGA^RGB;
			8'b11101011: RGZ=RGA<<1;
			8'b11101100: RGZ=RGA>>1;
			8'b11101101: RGZ=RGA+1;
			8'b11101110: RGZ=RGA-1;
			8'b11101111: RGZ=RGA-1;

			8'b11110000: RGZ=RGA+RGB;
			8'b11110001: RGZ=RGA-RGB;
			8'b11110010: RGZ=RGB-1;
			8'b11110011: RGZ=RGA*RGB;
			8'b11110100: RGZ=RGA&&RGB;
			8'b11110101: RGZ=RGA||RGB;
			8'b11110110: RGZ=!RGA;
			8'b11110111: RGZ=~RGA;

			8'b11111000: RGZ=RGA&RGB;
			8'b11111001: RGZ=RGA|RGB;
			8'b11111010: RGZ=RGA^RGB;
			8'b11111011: RGZ=RGA<<1;
			8'b11111100: RGZ=RGA>>1;
			8'b11111101: RGZ=RGA+1;
			8'b11111110: RGZ=RGA-1;
			8'b11111111: RGZ=RGA-1;
		endcase
		end
	end
endmodule
