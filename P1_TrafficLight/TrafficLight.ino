int DELAY_TIME = 3000;

int DIGITAL_PIN_7 = 7;
int DIGITAL_PIN_6 = 6;
int DIGITAL_PIN_5 = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(DIGITAL_PIN_7, OUTPUT);
  pinMode(DIGITAL_PIN_6, OUTPUT);
  pinMode(DIGITAL_PIN_5, OUTPUT);

}

void loop() {
  // greenlight
digitalWrite(DIGITAL_PIN_7,HIGH); //turn to DIGITAL_PIN_5v or on
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_7,LOW); //turn to 0v or off
// high means 5v
// low means 0v

//yellowlight
digitalWrite(DIGITAL_PIN_6,HIGH);
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_6,LOW);

//redlight
digitalWrite(DIGITAL_PIN_5,HIGH);
delay(DELAY_TIME);
digitalWrite(DIGITAL_PIN_5,LOW);


delay(1000);
}
