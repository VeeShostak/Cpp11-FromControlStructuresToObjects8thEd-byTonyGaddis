// specification file for pure abstract base class named BasicShape
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
protected:
	double area;	// holds the shape's area
public:
	// accessor returns the value in the member variable area
	double getArea() const
	{
		return area;
	}

	// pure virtual function
	virtual void calcArea() = 0;
};

#endif