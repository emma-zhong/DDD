#include "vex.h"

using namespace vex;

// Movement Function 
void Functions::setVel(double AxisOne, double AxisTwo) {
  /*
    Sets the motor speed using the infomation from the driveControl function
  */
  LMG.spin(fwd, AxisTwo, rpm);         RMG.spin(fwd, AxisOne, rpm);
}

void Functions::setVolt(double AxisOne, double AxisTwo) {
  /*
    Sets the motor voltage as another way to run the motors
  */
  LMG.spin(fwd, AxisTwo, volt);        RMG.spin(fwd, AxisOne, volt);
}

void Functions::setStop(brakeType type){
  /*
    Motor brakeType brake brakes when stopped
    Motor brakeType hold position when stopped
  */

  LMG.setStopping(coast);               RMG.setStopping(coast);
}

void Functions::driveControl(){
  /*
    The function that controls the user movement of the bot
  */
  setStop(coast);
  /*
  double AxisDrive = Controller1.Axis2.position() * 2;
  double AxisRot = Controller1.Axis4.position() * 2;

  // Deadzones
  if(abs(Controller1.Axis2.position()) < 5) {AxisDrive = 0;}
  if(abs(Controller1.Axis4.position()) < 5) {AxisRot = 0;}

  double setRMG = AxisDrive + AxisRot;
  double setLMG = AxisDrive - AxisRot;
  
  setVel(setLMG,setRMG); */

  int leftDriveSpeed = Controller1.Axis3.position();
  int rightDriveSpeed = Controller1.Axis2.position();

  LeftMotor.setVelocity(leftDriveSpeed, percent);
  RightMotor.setVelocity(rightDriveSpeed, percent);
  LMG.setVelocity(leftDriveSpeed, percent);
  RMG.setVelocity(rightDriveSpeed, percent);

  LeftMotor.spin(forward);
  RightMotor.spin(forward);
  LMG.spin(forward);
  RMG.spin(forward);
  
}