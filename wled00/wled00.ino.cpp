# 1 "C:\\Users\\asjad\\AppData\\Local\\Temp\\tmpahl0zyl7"
#include <Arduino.h>
# 1 "C:/dev/WLED/wled00/wled00.ino"
# 13 "C:/dev/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "C:/dev/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}