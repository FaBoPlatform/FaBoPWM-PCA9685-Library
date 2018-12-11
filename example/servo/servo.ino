#include "FaBoPWM_PCA9685.h"

FaBoPWM faboPWM;

void setup() {
  Serial.begin(115200);
  if(faboPWM.begin()) {
    Serial.println("Find PCA9685");
    faboPWM.init(300);
  }
  faboPWM.set_hz(50);
  faboPWM.set_channel_value(0, 400);
}

void loop() {
  
}
