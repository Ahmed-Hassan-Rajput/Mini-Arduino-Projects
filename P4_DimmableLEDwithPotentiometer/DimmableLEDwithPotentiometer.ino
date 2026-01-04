int readPin = A5;
float calcVal = 0;
void setup() {

pinMode(readPin,INPUT);
Serial.begin(9600);


}

void loop() {

calcVal = (5.0/1023.0) * (analogRead(readPin));
Serial.println(calcVal);
delay(500);

// analog write 5V = 255
// analog read 5V = 1023 
}
