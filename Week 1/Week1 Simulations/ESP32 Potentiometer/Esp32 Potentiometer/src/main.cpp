#include <Arduino.h>


#define  Potentiopin 15
void setup(){

  Serial.begin(115200);
  Serial.println("Started");
  pinMode(Potentiopin, INPUT);
}

void loop(){
   int value = analogRead(Potentiopin);
   Serial.println("The Value of Potentiometer is:");
   Serial.println(value);
   delay(300);
}