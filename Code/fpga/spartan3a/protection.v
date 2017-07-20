module protection( RST, CLK, ENA, RGA, RGB, RGZ, KEY);
	input RST, CLK, ENA;
	input [7:0]RGA,RGB;
	output [7:0]RGZ;
	input [1:0]KEY;
	reg [7:0]RGZ;
	reg [11:0]tmp;
/**********************************************************************
 *                      PROTECTION CELLS                              *
 *********************************************************************/
	always @(posedge CLK) begin
	case(KEY)
		1'b0:if(RST) RGZ = 0;
		1'b1:begin
			if(RST) RGZ = 0;
			else RGZ[7:6] = RGZ[7:6] + 1; // clock 2bit pertama naik
			
			if (RGZ[7:6] == 2'b11) begin  // kalo clock 2bit pertama 11
				RGZ[2:0] = RGA;			   // ambil nilai RGZ
				RGZ[5:3] = RGZ[5:3] + 1;   // terus naikin nilai clok 3bit
				tmp[2:0] = RGZ[2:0];       // simpen nilai nilai watermark di memory
			end
			
			if (RGZ[7:6] == 2'b01) begin  // ini cuma buat custom watermarking
				tmp = tmp<<3;
			end
		end
	endcase
	end
endmodule
