#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.1416926


float mod2pi(float theta_in)
{
	float theta_out;
	theta_out = 2.0f*PI*(floor)(theta_in / 2.0f / PI);
	theta_out = theta_in - theta_out;
	return theta_out;
}

float pi_2_pi(float angle_in) 
{
	float angle_out=0;
	//angle_out= angle_in % 2 - PI;
	return angle_out;
}


int main()
{


    return 0;
}

