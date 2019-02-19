#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C mylcd(0x20,16,2);

void setup(){
  mylcd.init();
  mylcd.backlight();
  mylcd.setCursor(4, 0);//光标的位置
  mylcd.print("222");
  mylcd.setCursor(0, 1);
  mylcd.print("22222");
}

void loop(){
    
}
