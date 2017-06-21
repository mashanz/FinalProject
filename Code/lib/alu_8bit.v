//`include "../module/protection.v"
//`include "../module/mult8.v"
//`include "../module/booth_multiply.v"
module alu_8bit( reset, clock, enable, seld, z, a, b, opc, done);
	input reset, clock, enable;
	output done;
	input [1:0]seld;
	input [7:0]a,b;
	reg [7:0]ta,tb;
	input [7:0]opc;
	output [7:0]z;
	reg [7:0]z;
	integer i;
	//`include "../module/booth_multiply.v"
	//protection prot( reset, clock, enable, a, b, z, seld);
	//booth kali(clock, reset, en, done, a, b, z);
	//module booth(.iClk(reset),.iReset_b(clock),.iGo(enable),.oDone(done),.iMer(a),.iMand(b),.oProduct(z));
	//mult8 mult8(z,a,b);
	always@(opc,a,b)
	begin
		case(opc)
			8'b00000000:
				begin
					//z <= a+b;
					//booth kali(clock, reset, en, done, a, b, z);
					//z <= booth_m(clock, reset, en, done, a, b, z);
				end
			8'b00000001: z <= a-b;
			8'b00000010:
				begin
 		 			ta=a;
  					z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(b[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b00000011: z <= a^b;
			8'b00000100: z <= a&b;
			8'b00000101: z <= a|b;
			8'b00000110: z <= a&&b;
			8'b00000111: z <= a||b;

			8'b00001000: z <= a+1;
			8'b00001001: z <= a-1;
			8'b00001010: z <= a<<1;
			8'b00001011: z <= a>>1;
			8'b00001100: z <= !a;
			8'b00001101: z <= ~a;
			8'b00001110: z <= a+a;
			8'b00001111: z <= a-a;

			8'b00010000: z <= b+z;
			8'b00010001: z <= b-z;
			8'b00010010:
				begin
 		 			ta=a;
  					//z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(z[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b00010011: z <= b^z;
			8'b00010100: z <= b&z;
			8'b00010101: z <= b|z;
			8'b00010110: z <= b&&z;
			8'b00010111: z <= b||z;

			8'b00111000: z <= z+1;
			8'b00111001: z <= z-1;
			8'b00111010: z <= z<<1;
			8'b00111011: z <= z>>1;
			8'b00111100: z <= !z;
			8'b00111101: z <= ~z;
			8'b00111110: z <= b+z;
			8'b00111111: z <= b-z;

			8'b00100000: z <= a+b;
			8'b00100001: z <= a-b;
			8'b00100010:
				begin
 		 			ta=b;
  					z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(a[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b00100011: z <= a^b;
			8'b00100100: z <= a&b;
			8'b00100101: z <= a|b;
			8'b00100110: z <= a&&b;
			8'b00100111: z <= a||b;

			8'b00101000: z <= a+1;
			8'b00101001: z <= a-1;
			8'b00101010: z <= a<<1;
			8'b00101011: z <= a>>1;
			8'b00101100: z <= !a;
			8'b00101101: z <= ~a;
			8'b00101110: z <= a+a;
			8'b00101111: z <= a-a;

			8'b00110000: z <= z+a;
			8'b00110001: z <= z-a;
			8'b00110010:
				begin
 		 			ta=z;
  					z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(a[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b00110011: z <= z^a;
			8'b00110100: z <= z&a;
			8'b00110101: z <= z|a;
			8'b00110110: z <= z&&a;
			8'b00110111: z <= z||a;

			8'b00111000: z <= z+1;
			8'b00111001: z <= z-1;
			8'b00111010: z <= z<<1;
			8'b00111011: z <= z>>1;
			8'b00111100: z <= !z;
			8'b00111101: z <= ~z;
			8'b00111110: z <= z+b;
			8'b00111111: z <= z-b;
			/////////////////////////////////////////////////////
			8'b01000000: z=a+b;
			8'b01000001: z=a-b;
			8'b01000010: z=b-1;
			8'b01000011:
				begin
 		 			ta=a;
  					z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(a[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b01000100: z=a&&b;
			8'b01000101: z=a||b;
			8'b01000110: z=!a;
			8'b01000111: z=~a;

			8'b01001000: z=a&b;
			8'b01001001: z=a|b;
			8'b01001010: z=a^b;
			8'b01001011: z=a<<1;
			8'b01001100: z=a>>1;
			8'b01001101: z=a+1;
			8'b01001110: z=a-1;
			8'b01001111: z=a-1;

			8'b01010000: z=a+b;
			8'b01010001: z=a-b;
			8'b01010010: z=b-1;
			8'b01010011: z=a*b;
			8'b01010100: z=a&&b;
			8'b01010101: z=a||b;
			8'b01010110: z=!a;
			8'b01010111: z=~a;

			8'b01011000: z=a&b;
			8'b01011001: z=a|b;
			8'b01011010: z=a^b;
			8'b01011011: z=a<<1;
			8'b01011100: z=a>>1;
			8'b01011101: z=a+1;
			8'b01011110: z=a-1;
			8'b01011111: z=a-1;

			8'b01100000: z=a+b;
			8'b01100001: z=a-b;
			8'b01100010: z=b-1;
			8'b01100011:
				begin
 		 			ta=b;
  					z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(b[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b01100100: z=a&&b;
			8'b01100101: z=a||b;
			8'b01100110: z=!a;
			8'b01100111: z=~a;

			8'b01101000: z=a&b;
			8'b01101001: z=a|b;
			8'b01101010: z=a^b;
			8'b01101011: z=a<<1;
			8'b01101100: z=a>>1;
			8'b01101101: z=a+1;
			8'b01101110: z=a-1;
			8'b01101111: z=a-1;

			8'b01110000: z=a+b;
			8'b01110001: z=a-b;
			8'b01110010: z=b-1;
			8'b01110011: z=a*b;
			8'b01110100: z=a&&b;
			8'b01110101: z=a||b;
			8'b01110110: z=!a;
			8'b01110111: z=~a;

			8'b01111000: z=a&b;
			8'b01111001: z=a|b;
			8'b01111010: z=a^b;
			8'b01111011: z=a<<1;
			8'b01111100: z=a>>1;
			8'b01111101: z=a+1;
			8'b01111110: z=a-1;
			8'b01111111: z=a-1;

			8'b10000000: z=a+b;
			8'b10000001: z=a-b;
			8'b10000010: z=b-1;
			8'b10000011:
				begin
 		 			ta=z;
  					//z=0;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(z[i]) z=z+ta;
    					ta=ta<<1;
  					end
				end
			8'b10000100: z=a&&b;
			8'b10000101: z=a||b;
			8'b10000110: z=!a;
			8'b10000111: z=~a;

			8'b10001000: z=a&b;
			8'b10001001: z=a|b;
			8'b10001010: z=a^b;
			8'b10001011: z=a<<1;
			8'b10001100: z=a>>1;
			8'b10001101: z=a+1;
			8'b10001110: z=a-1;
			8'b10001111: z=a-1;

			8'b10010000: z=a+b;
			8'b10010001: z=a-b;
			8'b10010010: z=b-1;
			8'b10010011:
				begin
 		 			ta=a;
  					for(i=0;i<8;i=i+1)
  					begin
    					if(b[i]) z=z+ta;
    					ta=ta<<1;
  					end
  					begin
 		 				ta=ta;
  						for(i=0;i<8;i=i+1)
  						begin
    						if(b[i]) z=z+ta;
    						ta=ta<<1;
  						end
  						begin
 		 					ta=ta;
  							for(i=0;i<8;i=i+1)
  							begin
    							if(b[i]) z=z+ta;
    							ta=ta<<1;
  							end
  							begin
 		 						ta=ta;
  								for(i=0;i<8;i=i+1)
  								begin
    								if(b[i]) z=z+ta;
    								ta=ta<<1;
  								end
  								begin
 		 							ta=ta;
  									for(i=0;i<8;i=i+1)
  									begin
    									if(b[i]) z=z+ta;
    									ta=ta<<1;
  									end
  									begin
 		 								ta=ta;
  										for(i=0;i<8;i=i+1)
  										begin
    										if(b[i]) z=z+ta;
    										ta=ta<<1;
  										end
  										begin
 		 									ta=ta;
  											for(i=0;i<8;i=i+1)
  											begin
    											if(b[i]) z=z+ta;
    											ta=ta<<1;
  											end
  											begin
 		 										ta=ta;
  												for(i=0;i<8;i=i+1)
  												begin
    												if(b[i]) z=z+ta;
    												ta=ta<<1;
  												end
											end
										end
									end
								end
							end
						end
					end
				end
			8'b10010100: z=a&&b;
			8'b10010101: z=a||b;
			8'b10010110: z=!a;
			8'b10010111: z=~a;

			8'b10011000: z=a&b;
			8'b10011001: z=a|b;
			8'b10011010: z=a^b;
			8'b10011011: z=a<<1;
			8'b10011100: z=a>>1;
			8'b10011101: z=a+1;
			8'b10011110: z=a-1;
			8'b10011111: z=a-1;

			8'b10100000: z=a+b;
			8'b10100001: z=a-b;
			8'b10100010: z=b-1;
			8'b10100011: z=a*b;
			8'b10100100: z=a&&b;
			8'b10100101: z=a||b;
			8'b10100110: z=!a;
			8'b10100111: z=~a;

			8'b10101000: z=a&b;
			8'b10101001: z=a|b;
			8'b10101010: z=a^b;
			8'b10101011: z=a<<1;
			8'b10101100: z=a>>1;
			8'b10101101: z=a+1;
			8'b10101110: z=a-1;
			8'b10101111: z=a-1;

			8'b10110000: z=a+b;
			8'b10110001: z=a-b;
			8'b10110010: z=b-1;
			8'b10110011: z=a*b;
			8'b10110100: z=a&&b;
			8'b10110101: z=a||b;
			8'b10110110: z=!a;
			8'b10110111: z=~a;

			8'b10111000: z=a&b;
			8'b10111001: z=a|b;
			8'b10111010: z=a^b;
			8'b10111011: z=a<<1;
			8'b10111100: z=a>>1;
			8'b10111101: z=a+1;
			8'b10111110: z=a-1;
			8'b10111111: z=a-1;

			8'b11000000: z=a+b;
			8'b11000001: z=a-b;
			8'b11000010: z=b-1;
			8'b11000011: z=a*b;
			8'b11000100: z=a&&b;
			8'b11000101: z=a||b;
			8'b11000110: z=!a;
			8'b11000111: z=~a;

			8'b11001000: z=a&b;
			8'b11001001: z=a|b;
			8'b11001010: z=a^b;
			8'b11001011: z=a<<1;
			8'b11001100: z=a>>1;
			8'b11001101: z=a+1;
			8'b11001110: z=a-1;
			8'b11001111: z=a-1;

			8'b11010000: z=a+b;
			8'b11010001: z=a-b;
			8'b11010010: z=b-1;
			8'b11010011: z=a*b;
			8'b11010100: z=a&&b;
			8'b11010101: z=a||b;
			8'b11010110: z=!a;
			8'b11010111: z=~a;

			8'b11011000: z=a&b;
			8'b11011001: z=a|b;
			8'b11011010: z=a^b;
			8'b11011011: z=a<<1;
			8'b11011100: z=a>>1;
			8'b11011101: z=a+1;
			8'b11011110: z=a-1;
			8'b11011111: z=a-1;

			8'b11100000: z=a+b;
			8'b11100001: z=a-b;
			8'b11100010: z=b-1;
			8'b11100011: z=a*b;
			8'b11100100: z=a&&b;
			8'b11100101: z=a||b;
			8'b11100110: z=!a;
			8'b11100111: z=~a;

			8'b11101000: z=a&b;
			8'b11101001: z=a|b;
			8'b11101010: z=a^b;
			8'b11101011: z=a<<1;
			8'b11101100: z=a>>1;
			8'b11101101: z=a+1;
			8'b11101110: z=a-1;
			8'b11101111: z=a-1;

			8'b11110000: z=a+b;
			8'b11110001: z=a-b;
			8'b11110010: z=b-1;
			8'b11110011: z=a*b;
			8'b11110100: z=a&&b;
			8'b11110101: z=a||b;
			8'b11110110: z=!a;
			8'b11110111: z=~a;

			8'b11111000: z=a&b;
			8'b11111001: z=a|b;
			8'b11111010: z=a^b;
			8'b11111011: z=a<<1;
			8'b11111100: z=a>>1;
			8'b11111101: z=a+1;
			8'b11111110: z=a-1;
			8'b11111111: z=a-1;
		endcase
	end
endmodule
