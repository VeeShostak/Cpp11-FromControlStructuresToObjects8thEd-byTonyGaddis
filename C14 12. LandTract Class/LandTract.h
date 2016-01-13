// specification file
#ifndef LANDTRACT_H
#define LANDTRACT_H

#include "FeetInches.h"

class LandTract
{
private:
	FeetInches width;
	FeetInches length;
	int area;
public:

	// default constructor initializes all to 0 -or user enters the dimentions for two tracts of land
	LandTract(int feetW = 0, int inchW = 0, int feetL = 0, int inchL = 0)
	{
		area = 0;
		width.setFeet(feetW);
		length.setFeet(feetL);

		width.setInches(inchW);
		length.setInches(inchL);
	}

	// calculate the area in inches
	void calcArea();

	// accessor -get the area
	int getArea() const
	{
		return area;
	}
};

#endif