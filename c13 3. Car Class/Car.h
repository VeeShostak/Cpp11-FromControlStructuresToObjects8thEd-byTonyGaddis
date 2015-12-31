// specification file for the car class
#ifndef CAR_H
#define CAR_H

#include <string> // for strings 
using namespace std;

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	// constructor - inline
	Car(int y, string mk)
	{
		yearModel = y;
		make = mk;
		speed = 0;
	}

	// accessor functions - inline
	int getYearModel() const
	{
		return yearModel;
	}

	string getMake() const
	{
		return make;
	}

	int getSpeed() const
	{
		return speed;
	}

	// mutator functions

	// add 5 to the speed member function on each call - inline
	void accelerate() 
	{
		speed += 5;
	}

	// sunbtract five from speed if speed is greater than 0 on each call
	void brake();

};

#endif