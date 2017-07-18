/*****************************************************
 *                    OPCODE
 *****************************************************
 * 0000 - nothing
 * 0001 - RGZ is 0
 * 0010 - ADD
 * 0011 - SUB
 * 0100 - AND
 * 0101 - OR
 ****************************************************/
void alu(){
  int del = 1000;
  
  RST(1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  KEY(0,0);
  RGA(0,0,0,0,0,0,0,0);
  RGB(0,0,0,0,0,0,0,0);
  RST(0);CLK(0);delay(del/2);CLK(1);delay(del/2);

  //OPERASI ADD 2 + 1 = 3
  KEY(1,0);
  RGA(0,0,0,0,0,0,1,0);
  RGB(0,0,0,0,0,0,0,1);
  CLK(0);delay(del/2);CLK(1);delay(del/2);

  //OPERASI SUB 3 - 1 = 2
  KEY(1,1);
  RGA(0,0,0,0,0,0,1,1);
  RGB(0,0,0,0,0,0,0,1);
  CLK(0);delay(del/2);CLK(1);delay(del/2);

  //OPERASI SUB 1 + 1 = 2
  KEY(1,0);
  RGA(0,0,0,0,0,0,1,1);
  RGB(0,0,0,0,0,0,0,1);
  CLK(0);delay(del/2);CLK(1);delay(del/2);
}
