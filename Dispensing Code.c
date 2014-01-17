#pragma config(Hubs,  S1, HTServo,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Servo,  srvo_S1_C1_1,    DispenseL,            tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C1_2,    DispenseR,            tServoContinuousRotation)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
task main()
{
	while(true)
	{
		getJoystickSettings(joystick);

		//if (joy1Btn(3))
		//{
		//	servo [DispenseL] = 206;
		//	servo [DispenseR] = 50;
		//	nxtDisplayCenteredTextLine(2, "Rotating Out");
		//}


		//if (joy1Btn(1))
		//{
		//	servo [DispenseL] = 50;
		//	servo [DispenseR] = 206;
		//	nxtDisplayCenteredTextLine(2, "Rotating In");
		//}

		if (joy1Btn(2))
		{
			servo [DispenseL] = 137;
			servo [DispenseR] = 117;
			nxtDisplayCenteredTextLine(2, "Moving to Parallel from Grab");

		}

		if (joy1Btn(4))
		{
			servo [DispenseL] = 117;
			servo [DispenseR] = 137;
			nxtDisplayCenteredTextLine(2, "Moving to Parrallel from Dispense");

		}

		else
		{
			servo [DispenseL] = 140;
			servo [DispenseR] = 140;
		}
	}
}