#include "stdafx.h"
#include "Car.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int yearM;			// local variabe for year model
	string makeM;		// local variable for make model
	Car *ptr = nullptr;	// ptr points to a Car object
	int count;			// counting variable for loop


	// get the year model and make
	cout << "Enter the car model: ";
	getline(cin, makeM);

	cout << "Enter the year model: ";
	cin >> yearM;
	cin.ignore(); // ignore the newline in the keyboard buffer

	// dynamically alloate a car object
	ptr = new Car(yearM, makeM);

	// accelerate the car 5 times and display its speed each time
	for (count = 0; count < 5; count++)
	{
		cout << "\nAccelerating " << (count+1) << endl;
		ptr->accelerate();
		cout << "Speed: " << ptr->getSpeed() << endl;
	}

	cout << "=======================";

	// break 5 times and display its speed each time
	for (count = 0; count < 5; count++)
	{
		cout << "\nBraking " << (count + 1) << endl;
		ptr->brake(); 
		cout << "Speed: " << ptr->getSpeed() << endl;
	}


	// free memory
	delete ptr;
	ptr = nullptr;

	return 0;
}