#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ir,             sensorDigitalIn)
#pragma config(Motor,  mtr_S1_C1_1,     lf,            tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C1_2,     lr,            tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     rf,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     rr,            tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     E,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     Derp,          tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
task main()
	{
	getJoystickSettings(joystick);
	while(true){
		if(abs(joystick.joy1_y1 )> 50){
			motor[lf] = joystick.joy1_y1;
			motor[lr] = joystick.joy1_y1;
		}
		else{
			motor[lf] = 0;
			motor[lr] = 0;
		}
		if(abs(joystick.joy1_y2) > 50){
			motor[rf] = joystick.joy1_y2;
			motor[rr] = joystick.joy1_y2;
		}
		else{
			motor[rf] = 0;
			motor[rr] = 0;
		}
		if(joystick.joy2_y1 > 73){
			servo[servo1] = 256;
		}
		else{
			servo[servo1] = 0;
		}
	}
}
