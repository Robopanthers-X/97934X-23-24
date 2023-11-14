#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

controller Controller1 = controller(primary);
motor ShootingMotor =motor (PORT14, ratio36_1, true);
motor IntakeMotor =motor(PORT16, ratio6_1, true);


motor Front_Right =motor(PORT19, ratio18_1, false);
motor Front_Left =motor(PORT18, ratio18_1, true);
motor Back_Right =motor(PORT15, ratio18_1, false);
motor Back_Left =motor(PORT9, ratio18_1, true);

motor_group DT (Front_Right, Front_Left, Back_Left, Back_Right);
motor_group RD (Front_Right, Back_Right);
motor_group LD (Front_Left, Back_Left);

bool RemoteCOntrolCodeEnabled = true;
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}