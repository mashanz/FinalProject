#include<Arduino.h>
/**
 * OPC
 * 000 - nothing
 * 001 - RGZ is 0
 * 010 - ADD
 * 011 - SUB
 * 100 - AND
 * 101 - OR
 */
void alu(){
  int del = 1000;
  
  RST(1);CLK(0);delay(del/2);CLK(1)delay(del/2);
  OPC(0,0,0);
  RGA(0,0,0);
  RGB(0,0,0);
  RST(0);CLK(0);delay(del/2);CLK(1)delay(del/2);

  //OPERASI ADD 2 + 1 = 3
  OPC(0,1,0);
  RGA(0,1,0);
  RGB(0,0,1);
  CLK(0);delay(del/2);CLK(1)delay(del/2);  

  //OPERASI SUB 3 - 1 = 2
  OPC(0,1,1);
  RGA(0,1,1);
  RGB(0,0,1);
  CLK(0);delay(del/2);CLK(1)delay(del/2);  
}
