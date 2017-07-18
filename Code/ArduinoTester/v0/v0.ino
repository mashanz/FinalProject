
void setup() {
 pinMode(0, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);

 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
}

/***************************************************
 *                     CLOCK
 **************************************************/
void CLK(int in0){
  if(in0==1){digitalWrite(0, HIGH);}
  else{digitalWrite(0, LOW);}
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
  if(a1==1){digitalWrite(3, HIGH);}
  else{digitalWrite(3, LOW);}
  if(a2==1){digitalWrite(4, HIGH);}
  else{digitalWrite(4, LOW);}
}
/***************************************************
 *              REGISTER B in 3 bit
 **************************************************/
void RGB(int a0, int a1, int a2){
  if(a0==1){digitalWrite(5, HIGH);}
  else{digitalWrite(5, LOW);}
  if(a1==1){digitalWrite(6, HIGH);}
  else{digitalWrite(6, LOW);}
  if(a2==1){digitalWrite(7, HIGH);}
  else{digitalWrite(7, LOW);}
}
/***************************************************
 *              REGISTER A in 3 bit
 **************************************************/
void OPC(int a0, int a1){
  if(a0==1){digitalWrite(8, HIGH);}
  else{digitalWrite(8, LOW);}
  if(a1==1){digitalWrite(9, HIGH);}
  else{digitalWrite(9, LOW);}
}


void alu(){
  int del = 1000;
  
  CLK(0);delay(del/2);CLK(1);delay(del/2);
  OPC(0,0);
  RGA(0,0,0);
  RGB(0,0,0);
  CLK(0);delay(del/2);CLK(1);delay(del/2);

  //OPERASI ADD 2 + 1 = 3
  OPC(1,0);
  RGA(0,1,0);
  RGB(0,0,1);
  CLK(0);delay(del/2);CLK(1);delay(del/2);  

  //OPERASI SUB 3 - 1 = 2
  OPC(1,1);
  RGA(0,1,1);
  RGB(0,0,1);
  CLK(0);delay(del/2);CLK(1);delay(del/2);  
}
void protection(){
  int del = 1000;
  
  CLK(0);delay(del/2);CLK(1);delay(del/2);
  OPC(0,0);
  RGA(0,0,0);
  RGB(0,0,0);
  CLK(0);delay(del/2);CLK(1);delay(del/2);
  
  RGA(1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  
  RGA(0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  
  RGA(1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);

  RGA(0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  
  RGA(0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
}


void loop() {
  protection();
  //alu();
}

