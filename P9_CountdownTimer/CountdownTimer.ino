int DP = 3;
int C = 4;
int D = 5;
int E = 6;
int B = 7;
int A = 8;
int F = 9;
int G = 10;
int delayTime = 1000;

void setup(){

pinMode(DP,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
pinMode(E,OUTPUT);
pinMode(B,OUTPUT);
pinMode(A,OUTPUT);
pinMode(F,OUTPUT);
pinMode(G,OUTPUT);


}

void loop(){

//Number 9: DP, E = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 8: DP = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 7: D, E, F, G = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(delayTime);

//Number 6: B = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(B,LOW);
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 5: B, E = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(B,LOW);
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 4: A, D, E = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(B,HIGH);
digitalWrite(A,LOW);
digitalWrite(F,HIGH);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 3: E, F = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,LOW);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 2: C, F = LOW

digitalWrite(DP,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,LOW);
digitalWrite(G,HIGH);
delay(delayTime);

//Number 1: A, D, E, F, G = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
digitalWrite(E,LOW);
digitalWrite(B,HIGH);
digitalWrite(A,LOW);
digitalWrite(F,LOW);
digitalWrite(G,LOW);
delay(delayTime);

//Number 0: G = LOW

digitalWrite(DP,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
digitalWrite(E,HIGH);
digitalWrite(B,HIGH);
digitalWrite(A,HIGH);
digitalWrite(F,HIGH);
digitalWrite(G,LOW);
delay(delayTime);


}
