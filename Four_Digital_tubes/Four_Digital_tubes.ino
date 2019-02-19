#include <Wire.h>
#include "Mixly.h"

TM1650 tm_4display;

void setup(){
  Wire.begin();
  tm_4display.init();
  tm_4display.clear();
}

void loop(){
  tm_4display.displayString("1234");

}
