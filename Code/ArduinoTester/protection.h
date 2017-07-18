void protection(){
  int del = 1000;
  
  RST(1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  KEY(0,0);
  RGA(0,0,0,0,0,0,0,0);
  RGB(0,0,0,0,0,0,0,0);
  RST(0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  
  RGA(0,0,0,0,0,1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2); //START
  RGA(0,0,0,0,0,1,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,0,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,0);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,1,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,1,1);CLK(0);delay(del/2);CLK(1);delay(del/2);
  RGA(0,0,0,0,0,0,0,0);CLK(0);delay(del/2);CLK(1);delay(del/2); //FINISH
}
