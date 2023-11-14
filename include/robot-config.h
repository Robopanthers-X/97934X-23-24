using namespace vex;

extern brain Brain;
extern controller Controller1;
extern motor ShootingMotor;
extern motor IntakeMotor;
extern motor Front_Right;
extern motor Front_Left;
extern motor Back_Right;
extern motor Back_Left;
extern motor_group DT;
extern motor_group RD;
extern motor_group LD;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
