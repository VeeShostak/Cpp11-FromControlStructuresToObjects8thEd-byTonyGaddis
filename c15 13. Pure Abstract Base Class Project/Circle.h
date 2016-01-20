// specification file for the Circle class that is derived from the BasicShape class
#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	long int centerX;	// holds the x coordinate of the circle's center
	long int centerY;	// holds the y coordinate of the circle's center
	double radius;		// holds the circle's radius
public:
	// constructor accepts values for centerX, centerY, and radius to calcuate the area
	Circle(long int cX, long int cY, double r)
	{
		centerX = cX;
		centerY = cY;
		radius = r;
		calcArea();
	}

	// accessor 
	long int getCenterX()
	{
		return centerX;
	}

	// accessor 
	long int getCenterY()
	{
		return centerY;
	}

	// overridden func from abstrat base class -calculates the area of a circle
	virtual void calcArea()
	{
		area = (3.14159 * radius * radius);
	}
};

#endif