int A = 3;
int B = 7;
int C = 11;
int D = 9;
int E = 8;
int F = 2;
int G = 12;
int DP = 10;
int D1 = 4;
int D2 = 5;
int D3 = 6;
int D4 = 13;
int userInput;
int delayTime = 1;
int buzzPin = 52;

#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment object


  byte numDigits = 4;
  byte digitPins[] = {D1, D2, D3, D4};
  byte segmentPins[] = {A, B, C, D, E, F, G, DP};
  bool resistorsOnSegments = true; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_CATHODE; // See README.md for options
  // bool updateWithDelays = false; // Default 'false' is Recommended
  // bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  // bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected. Then, you only need to specify 7 segmentPins[]

  


void setup(){

  pinMode(buzzPin, OUTPUT);
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
  Serial.begin(9600);



}

void loop(){


Serial.println("Set a timer for seconds maximum: 9999");
while(Serial.available() == 0){

}

userInput = Serial.parseInt();
if(userInput <= 9999 && userInput > 0){
  // Serial.println(userInput);
  while(userInput > 0){
    sevseg.setNumber(userInput);
  


for(int i = 0; i < 1000; i++){
  sevseg.refreshDisplay();
  delay(delayTime);
}



sevseg.refreshDisplay();
userInput = userInput - 1;
sevseg.refreshDisplay();

}

digitalWrite(buzzPin, HIGH);
delay(5000);
digitalWrite(buzzPin, LOW);
sevseg.blank();
}

else{
  Serial.println("Maximum number is 9999, please Try again!");
}


}
