module alucontrol(input [1:0] aluop, // alu op code
                  input [5:0] funct, // function code
                  output reg [2:0] alucontrol // generated control signals for the ALU
                  );
   // FUNCT field definitions
   parameter ADD = 6'b100000;
   parameter SUB = 6'b100010;
   parameter AND = 6'b100100;
   parameter OR  = 6'b100101;
   parameter SLT = 6'b101010;
   // The Synopsys full_case directives are given on each statement to tell the
   // synthezizer that all the cases we care about are handled. This avoids
   // needing a default that takes extra logic gate or implying a latch.
   always @(*)
     case (aluop) // synopsys full_case
       2'b00: alucontrol = 3'b010; // add (for lb/sb/addi)
       2'b01: alucontrol = 3'b110; // sub (for beq)
       2'b10: case (funct) // synopsys full_case
                ADD: alucontrol = 3'b010; // add (for add)
                SUB: alucontrol = 3'b110; // sub (for sub)
                AND: alucontrol = 3'b000; // logical and (for and)
                OR:  alucontrol = 3'b001; // logical or (for or)
                SLT: alucontrol = 3'b111; // set on less (for slt)
                // no other functions are legal (don't care)
              endcase // case (funct)
       // aluop = 11 is never given (don't care)
     endcase // case (aluop)
endmodule // alucontrol
