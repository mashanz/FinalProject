module protection( RST, CLK, ENA, RGA, RGB, RGZ, KEY);
	input RST, CLK, ENA;
	input [7:0]RGA;
	input [7:0]RGB;
	output [7:0]RGZ;
	input [1:0]KEY;
	reg [7:0]RGZ;
	reg [11:0]tmp;
/**********************************************************************
 *                      PROTECTION CELLS                              *
 *********************************************************************/
	always @(posedge CLK) begin
		if(RST) RGZ = 0;
		else RGZ[7:6] = RGZ[7:6] + 1;

		if (RGZ[7:6] == 2'b11) begin
			RGZ[2:0] = RGA;
			RGZ[5:3] = RGZ[5:3] + 1;
			tmp[2:0] = RGZ[2:0];
		end
		
		if (RGZ[7:6] == 2'b01) begin
			tmp = tmp<<3;
		end
	end
endmodule
