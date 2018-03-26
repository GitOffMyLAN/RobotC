#pragma config(Sensor, S1,     light,          sensorLightActive)
 /*Light on porn 1*/


task main()
{
	nMotorEncoder[motorA] = 0;
	nMotorEncoder[motorB] = 0;
	while (nMotorEncoder[motorA] < 1800 && nMotorEncoder[motorB] < 1800){
		if (SensorValue(light) > 35){
			motor[motorB] = -15;
			motor[motorA] = 0;
		}
		else
		{
			motor[motorB] = 0;
			motor[motorA] = -15;
		}
	};
	motor[motorA] = 0;
	motor[motorB] = 0;
}
