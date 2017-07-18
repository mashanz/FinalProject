#include<Arduino.h>
int p0 = 0;
int p1 = 1;
int p2 = 2;
int p3 = 3;
int p4 = 4;
int p5 = 5;
int p6 = 6;
int p7 = 7;
int p8 = 8;
int p9 = 9;
int p10 = 10;
int p11 = 11;
int p12 = 12;
int p13 = 13;
int p14 = 14;
int p15 = 15;
int p16 = 16;
int p17 = 17;
int p18 = 18;// ERROR
int p19 = 19;// ERROR
int p20 = 20;// ERROR
int p21 = 21;// ERROR
int p22 = 22;
int p23 = 23;

void setup() {
  //REGISTER PORT B
  pinMode(p0, OUTPUT);//CLK
  pinMode(p1, OUTPUT);//RST
  pinMode(p2, OUTPUT);//KEY 0
  pinMode(p3, OUTPUT);//KEY 1
  pinMode(p4, OUTPUT);//OPT 0
  pinMode(p5, OUTPUT);//OPT 1
  pinMode(p6, OUTPUT);//OPT 2
  pinMode(p7, OUTPUT);//OPT 3
  
  //REGISTER PORT D
  pinMode(p8, OUTPUT);//RGA 0
  pinMode(p9, OUTPUT);//RGA 1
  pinMode(p10, OUTPUT);//RGA 2
  pinMode(p11, OUTPUT);//RGA 3
  pinMode(p12, OUTPUT);//RGA 4
  pinMode(p13, OUTPUT);//RGA 5
  pinMode(p14, OUTPUT);//RGA 6
  pinMode(p15, OUTPUT);//RGA 7
  
  //REGISTER PORT C
  pinMode(p16, OUTPUT);//RGB 0
  pinMode(p17, OUTPUT);//RGB 1
  pinMode(p18, OUTPUT);//RGB 2 ERROR
  pinMode(p19, OUTPUT);//RGB 3 ERROR
  pinMode(p20, OUTPUT);//RGB 4 ERROR
  pinMode(p21, OUTPUT);//RGB 5 ERROR
  pinMode(p22, OUTPUT);//RGB 6
  pinMode(p23, OUTPUT);//RGB 7
}
