#pragma config(Hubs,  S1, HTServo,  none,     none,     none)
#pragma config(Sensor, S2,     IRSensor,       sensorNone)
#pragma config(Sensor, S3,     irSensor,       sensorHiTechnicIRSeeker1200)
#pragma config(Servo,  srvo_S1_C1_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

bool isBeaconInRange(tSensors irSensor)	// subroutine that determines whether IR beacon is in range
{
	wait1Msec(1);
	int ir = SensorValue[irSensor];	// defines integer that returns current sensor value
	nxtDisplayCenteredTextLine(2, "ir = %d", ir);
	wait1Msec(1);
	if (ir == 0)	// no beacon detected
	{
		return false;
	}
	else	// beacon detected
	{
		return true;
	}
}

task main()
{
	while(true)
	{
	//nxtDisplayCenteredTextLine(3, "Value: %d", SensorValue[IRSensor]);
	//wait1Msec(2000);
	//servo [servo1] = 200;
	//servo [servo2] = 127;
	isBeaconInRange(irSensor);

	}
}