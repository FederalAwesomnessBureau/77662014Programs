
void straight(int time, int speed)
{
	motor[lf] = speed;
	motor[lr] = speed;
	motor[rf] = speed;
	motor[rr] = speed;
	wait1Msec(time);
	motor[lf] = 0;
	motor[lr] = 0;
	motor[rf] = 0;
	motor[rr] = 0;
}

void straightNoWait(int speed)
{
	motor[lf] = speed;
	motor[lr] = speed;
	motor[rf] = speed;
	motor[rr] = speed;
}

void turn(int speed, int time, int dir)
{
	if(dir == 0)
	{
		//Right
		motor[lf] = speed;
		motor[lr] = speed;
		motor[rf] = -speed;
		motor[rr] = -speed;
		wait1Msec(time);
		motor[lf] = 0;
		motor[lr] = 0;
		motor[rf] = 0;
		motor[rr] = 0;
	}
	else
	{
		//Left
		motor[rf] = speed;
		motor[rr] = speed;
		motor[lf] = -speed;
		motor[lr] = -speed;
		wait1Msec(time);
		motor[lf] = 0;
		motor[lr] = 0;
		motor[rf] = 0;
		motor[rr] = 0;
	}

}

void killDrive()
{
		motor[lf] = 0;
		motor[lr] = 0;
		motor[rf] = 0;
		motor[rr] = 0;
}

void turnNoWait(int speed, int dir)
{
	if(dir == 0)
	{
		//Right
		motor[lf] = speed;
		motor[lr] = speed;
		motor[rf] = -speed;
		motor[rr] = -speed;
	}
	else
	{
		//Left
		motor[rf] = speed;
		motor[rr] = speed;
		motor[lf] = -speed;
		motor[lr] = -speed;
	}

}

void arm(int speed, int time)
{
	motor[E] = speed;
	wait1Msec(time);
	motor[E] = 0;
}

void armNoWait(int speed)
{
		motor[E] = speed;
}

void hand()
{
	servo[servo1] = 256;
	servo[servo2] = -256;
}

void stopHand()
{
	servo[servo1] = 0;
	servo[servo2] = 0;
}

void handBack()
{
	servo[servo1] = -256;
	servo[servo2] = 256;
}
