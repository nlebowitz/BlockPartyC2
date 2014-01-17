#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,          motor1,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorB,          motor2,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          motor3,        tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     motorL,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorR,        tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

task main()
{
	while(true)
	{
		getJoystickSettings(joystick);

		if (-joystick.joy1_y1>=10)
		{
			motor[motorL]=50;
		}
		else if (-joystick.joy1_y1<=-10)
		{
			motor[motorL]=-50;
		}
		else {
			motor[motorL]=0;
		}


		if (joystick.joy1_y2>=10)
		{
			motor[motorR]=50;
		}
		else if (-joystick.joy1_y2<=-10)
		{
			motor[motorR]=-50;
		}
		else {
			motor[motorR]=0;
		}


	}
}