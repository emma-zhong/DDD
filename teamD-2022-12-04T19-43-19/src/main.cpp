#include "vex.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Roller               motor         4               
// LeftMotor            motor         13              
// RightMotor           motor         19              
// LMG                  motor_group   11, 12          
// RMG                  motor_group   17, 18          
// ---- END VEXCODE CONFIGURED DEVICES ----

using namespace vex;

// A global instance of competition
competition Competition;

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void drivercontrol(void){
 // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();


  // Main loop
  while (true) {
    Functions::driveControl();
    UserControlledFunctions::userControl();
    wait(10, msec);
  }
}

int main() {
  //Set up callbacks for autonomous and driver control periods. 
  
  Competition.drivercontrol(drivercontrol); 

  //Prevent main from exiting with an infinite loop
  while (true) {
    wait(10, msec); 
  
  }
}
