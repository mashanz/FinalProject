#include<Arduino.h>


/***************************************************
 *                     CLOCK
 **************************************************/
void CLK(int in0){
  if(in0==1){digitalWrite(11, HIGH);}
  else{digitalWrite(11, LOW);}
}
/***************************************************
 *                     RESET
 **************************************************/
void RST(int in0){
  if(in0==1){digitalWrite(1, HIGH);}
  else{digitalWrite(1, LOW);}
}
/***************************************************
 *              REGISTER A in 3 bit
 **************************************************/
void RGA(int a0, int a1, int a2){
  if(a0==1){digitalWrite(2, HIGH);}
  else{digitalWrite(2, LOW);}
  if(a1==1){digitalWrite(2, HIGH);}
  else{digitalWrite(3, LOW);}
  if(a2==1){digitalWrite(2, HIGH);}
  else{digitalWrite(4, LOW);}
}
/***************************************************
 *              REGISTER B in 3 bit
 **************************************************/
void RGB(int a0, int a1, int a2){
  if(a0==1){digitalWrite(2, HIGH);}
  else{digitalWrite(5, LOW);}
  if(a1==1){digitalWrite(2, HIGH);}
  else{digitalWrite(6, LOW);}
  if(a2==1){digitalWrite(2, HIGH);}
  else{digitalWrite(7, LOW);}
}
/***************************************************
 *              REGISTER A in 3 bit
 **************************************************/
void OPC(int a0, int a1, int a2){
  if(a0==1){digitalWrite(2, HIGH);}
  else{digitalWrite(8, LOW);}
  if(a1==1){digitalWrite(2, HIGH);}
  else{digitalWrite(9, LOW);}
  if(a2==1){digitalWrite(2, HIGH);}
  else{digitalWrite(10, LOW);}
}
