#include <Arduino.h>

void setup(){
    
    Serial.begin(115200);
    pinMode(4, INPUT_PULLUP);
}
void loop(){
   
   int state = digitalRead(4);
   if(state==0){
    Serial.println("Button Pressed!");
   }
   else
   Serial.println("Button is not Pressed");
   delay(200);
}