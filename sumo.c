#pragma config(Sensor, S1,     light,          sensorLightActive)
 /*Light on porn 1*/
#pragma config(Sensor, S2,     sonar,          sensorSONAR)
 /*Sonar on port 2*/


task main()
{
	while(true){
		while(light < 40 /*Black*/){
			motor[motorA] = 100; /*Turn*/
			wait1Msec(400);
		}
		motor[motorA] = -100;
		motor[motorB] = -100;
		if(sonar > 30){
			stopMotor[motorA]
			stopMotor[motorB]
			motor[motorA] = -100;
			motor[motorB] = -100;
		}
	}
}
