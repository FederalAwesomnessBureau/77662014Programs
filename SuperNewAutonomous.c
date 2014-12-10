#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     lf,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     lr,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     rf,            tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_2,     rr,            tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C4_1,     E,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorI,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
#include "BaseClass.c"
//Thangs

task main()
{
	killDrive();
	waitForStart();
	straight(3000, -50);
	turn(50, 500, 0);
	straight(1000, -50);
	killDrive();
}
