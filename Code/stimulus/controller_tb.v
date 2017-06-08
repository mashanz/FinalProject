`include "../module/controller.v"
// Controller testbench: Supplies test vectors and dumps the results to file and
// standard output. Do not modify!
module controller_tb;
   reg ph1, ph2, reset;
   reg [5:0] opcode;
   reg       zero;
   wire memread;
   wire memwrite;
   wire [3:0] irwrite;
   wire       pcen;
   wire       regwrite;
   wire [1:0] aluop;
   wire       alusrca;
   wire [1:0] alusrcb;
   wire [1:0] pcsource;
   wire       iord;
   wire       memtoreg;
   wire       regdst;
   wire       pcwritecond;
   wire       pcwrite;

   // instatiate device under test and connect the signals
   controller U0(
                 // inputs
                 .ph1 (ph1),
                 .ph2 (ph2),
                 .reset (reset),
                 .op5 (opcode[5]), .op4 (opcode[4]), .op3 (opcode[3]),
                 .op2 (opcode[2]), .op1 (opcode[1]), .op0 (opcode[0]),
                 .zero (zero),
                 // ouputs
                 .memread (memread),
                 .memwrite (memwrite),
                 .irwrite3 (irwrite[3]), .irwrite2 (irwrite[2]),
                 .irwrite1 (irwrite[1]), .irwrite0 (irwrite[0]),
                 .pcen (pcen),
                 .regwrite (regwrite),
                 .aluop1 (aluop[1]), .aluop0 (aluop[0]),
                 .alusrca (alusrca),
                 .alusrcb1 (alusrcb[1]), .alusrcb0 (alusrcb[0]),
                 .pcsource1 (pcsource[1]), .pcsource0 (pcsource[0]),
                 .iord (iord),
                 .memtoreg (memtoreg),
                 .regdst (regdst));

   // initialization (reset is high)
   initial
     begin
        ph1 <= 0;
        ph2 <= 0;
        reset <= 1;
        zero = 0;
     end

   // generate a two-phase non-overlapping clock (period is 8 units)
   always begin
      #2 ph1 = 1;
      #2 ph1 = 0;
      #4 ph1 = 0;

   end
   always begin
      #6 ph2 = 1;
      #2 ph2 = 0;
   end

   // dump all the signals info file. use with a waveform viewer to see the signals
   initial begin
      $dumpfile("controller.vcd");
      $dumpvars;
   end

   initial begin
      // bring out of reset and supply the first opcode lb
      #2 reset = 0; opcode = 6'b100000;
      $display("%s %s %s %s %s %s %s %s %s %s %s %s", "memread", "alusrca", "iord", "irwrite",
               "alusrcb", "aluop", "pcen", "pcsource", "regdst", "regwrite",
               "memtoreg", "memwrite");
      $display("opcode = %b", opcode);

      // sb
      #72 opcode = 6'b101000;
      $display("opcode = %b", opcode);

      // r-type instructions
      #56 opcode = 6'b000000;
      $display("opcode = %b", opcode);

      // beq
      #56 opcode = 6'b000100;
      $display("opcode = %b", opcode);
      #40 zero = 1'b1;      // check that zero works in BEQEX

      // jump
      #8 opcode = 6'b000010;
      $display("opcode = %b", opcode);

      // addi
      #48 opcode = 6'b001000;
      $display("opcode = %b", opcode);

      // terminate simulation
      #56 $finish;
   end

   // print the values of all relevant signals every clock period
   always
     #8 $display("%5b %6b %6b %6b %7b %5b %4b %8b %7b %6b %8b %7b", memread, alusrca, iord, irwrite, alusrcb, aluop,
                  pcen, pcsource, regdst, regwrite, memtoreg, memwrite);
endmodule
