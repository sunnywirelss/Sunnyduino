#include <Stepper.h>

Stepper mystepper(100,45,46,47,48);

void setup(){
  mystepper.setSpeed(100);
}

void loop(){
  mystepper.step(100);
  delay(10);

}
