# RobotC
This the term 1 - term 2 NXT robot assigment.

## Presets
All motors on on ports A and B
Light (refected) on port 1 and sonar on port 2


## Movment
automated-movment is code that needs a light sensor on port 1 and follows a black line by going back and forth.

We started working on part 2 first becuase it was the easier task. Our first disgn had the basic code of stay on black and if it detects white it turns till it detects black. The problems with this is that it turns in one direction till it sees black; do it would wrap around and go backwards on the line it just traced. So, we changed the code so when it's on the black it turns left, and when on white it turns right. This code worked and it worked becuase it would always go up and down around the edge of the line, so even when the line turns it will still follow the edge.
### Sudo Code
### Code
```c
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
```
[video](https://github.com/GitOffMyLAN/RobotC/blob/master/movment.mp4)
## Sumo
a robot that uses light (on port 1) and sonar (on port 2) and follows and attacks robots using sonar, when the sonar picks up a robot it will charge the robot.

[video](https://github.com/GitOffMyLAN/RobotC/blob/master/sumo.mp4)
### Sudo Code
### Code
```c
#pragma config(Sensor, S1,     light,          sensorLightActive)
 /*Light on porn 1*/
#pragma config(Sensor, S2,     sonar,          sensorSONAR)
 /*Sonar on port 2*/


task main()
{
	while(true){
		while(light < 50 /*White*/){
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
		else{
			nMotorEncoder[motorA] = 0;
			nMotorEncoder[motorB] = 0;
			if (nMotorEncoder[motorA] < 1800){
			motor[motorB] = -15;
			motor[motorA] = 0;
		}
		ifelse (nMotorEncoder[motorB] < 1800) 
		{
			motor[motorB] = 0;
			motor[motorA] = -15;
		}
	}
}
```
## Evaluations
### Jack's Evaluation
#### What worked well/was successful? 
We did not work will in the begining; but we then started to work better in a team. Then we designed our robots and they worked. Our main success was with the code. Our coding helped this a lot and was very invative.
#### What challenges did you encounter?
Our challenges were not working at a team in the begining; this stopped our progress in the beging but when we started working it was great. Out other problems were with the sensors and that most of the time the conditions changed (ambient light would mess with the light sensor) and the sonor sensor just failed. We also wasted about 1/3 of our time with making the robot and more time fixing the bugs and problems with the robot.
#### How would you approach it differently if given the opportunity?
We could of fixed the light problem with a constant varible that ditected the light and black at set the vaibles acordingly. But I think that could of fixed the light; and the sonsor we could of read more of the documentation to fix the problems. The main thing we need to fixed we not wasting time designing and working better as a team.
#### What has this task taught you about programming/Robotics?
We mainly learned how with robots (and the outside world) change and how our code needs to be felxable and not setting dirct numbers but varibles that change with the outside world.

### Andries's Evaluation
#### What worked well/was successful? 
We were successful in coding as it was our main strengths. At the end of the task we work like a team.  
#### What challenges did you encounter?  
We did well at coding the robot but had some difficulties such as sonar sensor and dirty carpet and the lighting of the sealing. WE also had some default in the design of the robot as it was hard for the light sensor to work (function properly, the senor sensor did not work for some reason which might be a bug or the code. 
#### How would you approach it differently if given the opportunity?
Less time building on the robot would improve our code. 
Coding it more sufficient will allow to work better. 
#### What has this task taught you about programming/Robotics?
It has taught me to code in a different way. (while true) 
This task also taught me resilience and confidence
These skills are vital to reach a higher mark in my next assessment.  

### Images
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0126.JPG)
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0127.JPG)
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0128.JPG)
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0129.JPG)
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0130.JPG)
![Images](https://github.com/GitOffMyLAN/RobotC/blob/master/img/IMG_0131.JPG)
