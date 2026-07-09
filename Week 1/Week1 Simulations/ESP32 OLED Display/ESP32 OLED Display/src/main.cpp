#include <Arduino.h>
#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

#define SCL 17
#define SDA 18
#define OLEDAddress 0x3C
#define Width 128
#define height 64

Adafruit_SSD1306 display(Width,height, &Wire, -1);

void setup(){
  Serial.begin(115200);
  Serial.println("Starting");
  Wire.begin(SDA,SCL);
   if(!display.begin(SSD1306_SWITCHCAPVCC,OLEDAddress)){
    while (true)
    Serial.print("OLED Mem Buffer Initialization Failed");
   }

  display.clearDisplay();
  display.setCursor(0,10);
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.print("BrainSwarm Robotics Lab");
  display.display();
}


void loop(){
  
}