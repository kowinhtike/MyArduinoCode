#include <Servo.h>

Servo myservo;


const int Pin = 4;
char Text;
String Spilt;


void setup() {
Serial.begin(9600);
pinMode (Pin, OUTPUT);
myservo.attach(Pin);
myservo.write(0);
}


void loop() {


  if(Serial.available()>0){
    Text = Serial.read();  
    Spilt += Text; 
if (Text == '*') {

//      Serial.println(Spilt);

      Spilt = Spilt.substring(0, Spilt.length() - 1); // Delete last char *
      myservo.write(Spilt.toInt());
      delay(15); 
      Serial.println(Spilt); 
      Spilt = "";   

  }
      }
} 
