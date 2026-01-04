//Serial.available()
//Serial.readString()


int redPin = 9;
int greenPin = 10;
int bluePin = 11;


String setColor;
void setup(){
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);


Serial.begin(9600);
}


void loop(){



setColor = Serial.readString();
// type red into Serial Monitor, then setColor = "red";

// Serial.readString() -> prints out strings and it prints it out in a new line
if(setColor == "red\n"){

analogWrite(redPin,255);
analogWrite(greenPin,0);
analogWrite(bluePin,0);

}

else if(setColor == "cyan\n"){

analogWrite(redPin,0);
analogWrite(greenPin,100);
analogWrite(bluePin,100);

}

else {
  Serial.println("Color not recognized");
}

}


// digitalWrite and digitalRead
// analogWrite and analogRead
// serial write and serial read
