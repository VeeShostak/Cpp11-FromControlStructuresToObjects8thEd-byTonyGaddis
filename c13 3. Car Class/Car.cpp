// implementation file for the car class
#include "stdafx.h"			// prcompiled header for visual studio
#include "Car.h"			// needed for the car class function
#include <iostream>			// needed for cout
using namespace std;

// sunbtract five from speed if speed is greater than 0 on each call
void Car::brake()
{
	if (speed > 0)
	{
		speed -= 5;
	}

	else
	{
		cout << "The car is stationary";
	}
}