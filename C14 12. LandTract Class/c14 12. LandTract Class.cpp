#include "stdafx.h"
#include <iostream>
//#include "FeetInches.h"
#include "LandTract.h"


using namespace std;

int main()
{
	// variables hold dimentions for a tract of land
	int feetW,
		feetL,
		inchesW,
		inchesL;

	// ask user for dimentions for 1st tract of land
	cout << "\tTract 1\n";
	cout << "Enter Width for tract 1\n";
	cout << "Width feet: ";
	cin >> feetW;
	cout << "Width inches: ";
	cin >> inchesW;

	cout << "\nEnter the Length for tract 1\n";
	cout << "Length feet: ";
	cin >> feetL;
	cout << "Length inches: ";
	cin >> inchesL;

	// define LandTract object (first tract of land)
	LandTract farm(feetW, inchesW, feetL, inchesL);
	farm.calcArea();	// calculate the area of first tract


	// ask user for dimentions for 2nd tract of land
	cout << "\n\tTract 2\n";
	cout << "Enter Width for tract 2\n";
	cout << "Width feet: ";
	cin >> feetW;
	cout << "Width inches: ";
	cin >> inchesW;

	cout << "\nEnter the Length for tract 2\n";
	cout << "Length feet: ";
	cin >> feetL;
	cout << "Length inches: ";
	cin >> inchesL;

	// define LandTract object (second tract of land)
	LandTract yard(feetW, inchesW, feetL, inchesL);
	yard.calcArea();	// calculate the area of second tract


	// display the area of each tract of land, and indicate if they are of equal size
	cout << "\n\n\t Displaying Area\n";
	cout << "Area of tract 1: " << farm.getArea() << " inches" << endl;
	cout << "Area of tract 2: " << yard.getArea() << " inches" << endl;

	if (farm.getArea() == yard.getArea())
	{
		cout << "Both tracts of land have an equal area\n";
	}
	else
	{
		cout << "The two tracts of land are not equal in size\n";
	}


	return 0;
}