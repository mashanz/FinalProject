/***************************************************
 *                     CLOCK
 **************************************************/
void CLK(int in0){
  if(in0==1){digitalWrite(p0, HIGH);}else{digitalWrite(p0, LOW);}
}
/***************************************************
 *                     RESET
 **************************************************/
void RST(int in0){
  if(in0==1){digitalWrite(p1, HIGH);}else{digitalWrite(p1, LOW);}
}
/***************************************************
 *                     KEY
 **************************************************/
void KEY(int in0, int in1){
  if(in0==1){digitalWrite(p2, HIGH);}else{digitalWrite(p2, LOW);}
  if(in1==1){digitalWrite(p3, HIGH);}else{digitalWrite(p3, LOW);}
}
/***************************************************
 *                     OPCODE
 **************************************************/
void OPC(int in0, int in1, int in2, int in3){
  if(in0==1){digitalWrite(p4, HIGH);}else{digitalWrite(p4, LOW);}
  if(in1==1){digitalWrite(p5, HIGH);}else{digitalWrite(p5, LOW);}
  if(in2==1){digitalWrite(p6, HIGH);}else{digitalWrite(p6, LOW);}
  if(in3==1){digitalWrite(p7, HIGH);}else{digitalWrite(p7, LOW);}
}
/***************************************************
 *              REGISTER A in 3 bit
 **************************************************/
void RGA(int in0, int in1, int in2, int in3, int in4, int in5, int in6, int in7){
  if(in0==1){digitalWrite(p8, HIGH);}else{digitalWrite(p8, LOW);}
  if(in1==1){digitalWrite(p9, HIGH);}else{digitalWrite(p9, LOW);}
  if(in2==1){digitalWrite(p10, HIGH);}else{digitalWrite(p10, LOW);}
  if(in3==1){digitalWrite(p11, HIGH);}else{digitalWrite(p11, LOW);}
  if(in4==1){digitalWrite(p12, HIGH);}else{digitalWrite(p12, LOW);}
  if(in5==1){digitalWrite(p13, HIGH);}else{digitalWrite(p13, LOW);}
  if(in6==1){digitalWrite(p14, HIGH);}else{digitalWrite(p14, LOW);}
  if(in7==1){digitalWrite(p15, HIGH);}else{digitalWrite(p15, LOW);}
}
/***************************************************
 *              REGISTER B in 3 bit
 **************************************************/
void RGB(int in0, int in1, int in2, int in3, int in4, int in5, int in6, int in7){
  if(in0==1){digitalWrite(p16, HIGH);}else{digitalWrite(p16, LOW);}
  if(in1==1){digitalWrite(p17, HIGH);}else{digitalWrite(p17, LOW);}
  if(in2==1){digitalWrite(p18, HIGH);}else{digitalWrite(p18, LOW);}// ERROR
  if(in3==1){digitalWrite(p19, HIGH);}else{digitalWrite(p19, LOW);}// ERROR
  if(in4==1){digitalWrite(p20, HIGH);}else{digitalWrite(p20, LOW);}// ERROR
  if(in5==1){digitalWrite(p21, HIGH);}else{digitalWrite(p21, LOW);}// ERROR
  if(in6==1){digitalWrite(p22, HIGH);}else{digitalWrite(p22, LOW);}
  if(in7==1){digitalWrite(p23, HIGH);}else{digitalWrite(p23, LOW);}
}
