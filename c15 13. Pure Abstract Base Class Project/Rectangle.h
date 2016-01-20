// specification file for the Rectangle class that is derived from the BasicShape class
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	long int width;		// holds the width of the rectangle
	long int length;	// holds the length of the rectangle

public:
	// constructor accepts values for width, length. then calculates area
	Rectangle(long int w, long int l)
	{
		width = w;
		length = l;
		calcArea();
	}

	// accessor
	long int getWidth() const
	{
		return width;
	}

	// accessor
	long int getLength() const
	{
		return length;
	}

	// overridden func from abstract base class- calculates the area of a rectangle
	virtual void calcArea() 
	{
		area = (length * width);
	}
};

#endif