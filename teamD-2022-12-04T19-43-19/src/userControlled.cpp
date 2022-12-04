#include "vex.h"
using namespace vex;

void UserControlledFunctions::roll(){
  vexcodeInit();
  if (Controller1.ButtonY.pressing()){
    Roller.setVelocity(100, percent);
    Roller.spin(fwd, 100, percent);
  } else if (Controller1.ButtonA.pressing()){
    Roller.setVelocity(100, percent);
    Roller.spin(reverse, 100, percent);
  } else {
    Roller.stop();
  }
}


void UserControlledFunctions::userControl() {
  roll();
}