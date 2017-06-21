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
	//always @(posedge clock)
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
			
			//////////////////////////////
		endcase
	end
endmodule
