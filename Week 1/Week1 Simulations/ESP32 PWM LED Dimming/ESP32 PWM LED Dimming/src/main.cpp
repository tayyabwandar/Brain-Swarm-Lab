#include <Arduino.h>

#define ledpin 4
#define channel 0
void setup(){
  Serial.begin(115200);
  ledcSetup(channel,5000,8);
  ledcAttachPin(ledpin,0);
  Serial.println("Starting");
}
void loop(){
    for(int i=0;i<=255;i++){
      ledcWrite(channel, i);
      delay(5);
    }
    for(int i=255;i>=0;i--){
      ledcWrite(channel, i);
      delay(5);
    }
}