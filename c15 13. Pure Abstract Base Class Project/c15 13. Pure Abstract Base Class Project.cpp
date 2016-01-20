#include "stdafx.h"
#include <iostream>
#include <iomanip> // for cout formatting
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	// This is a Driver program
	// define a Circle object and a Rectangle object.
	// demonstrate that each object properly calculates and reports its area

	cout << setprecision(2) << fixed;

	// Circle object
	Circle clock(12,135,5);
	cout << "The area of your circle is: " << clock.getArea() << endl;

	// Rectangle object
	Rectangle boxSide(10, 12);
	cout << "The area of your rectangle is: " << boxSide.getArea() << endl;

	return 0;
}
