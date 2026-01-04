#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11
int sensePin = 2;
DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
float tempK;

void setup() {

Serial.begin(9600);
HT.begin();


}

void loop() {

humidity = HT.readHumidity();
tempC = HT.readTemperature();
tempF = (tempC * 9.0/5.0) + 32.0;
tempK = tempC + 273.0;
  

  Serial.println("tempC: ");
  Serial.println(tempC);
  Serial.println("tempF: ");
  Serial.println(tempF);
  Serial.println("tempK: ");
  Serial.println(tempK);
  delay(300);
}




// digitalWrite(HIGH); 5V on
// digitalWrite(LOW); 0V off
// DIGITALWRITE ANALOGWRITE
// DIGITALREAD ANALOGREAD

//DIGITALREAD -> 0 OR 1
