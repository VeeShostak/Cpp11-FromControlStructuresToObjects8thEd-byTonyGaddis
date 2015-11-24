/* 5. Body Mass Index */

//#include "stdafx.h"
#include <iostream>
#include <cmath> //for pow()
#include <iomanip> // cout formatting
using namespace std;

int main()
{

	//cout formating. round to 1 decimal point of precision 
	cout << setprecision(1) << fixed << showpoint;

	double weight, height, bmi;

	// user gives wieght and height
	cout << "\tCalculate Your BMI\n\n"
		<< "Enter you weight in pounds: ";
	cin >> weight;

	cout << "Enter your height in inches: ";
	cin >> height;


	//calculate BMI and display it (dont have to use pow() for such a simple calulation)
	bmi = weight * 703 / pow(height, 2);
	cout << "Your BMI is: " << bmi << endl;

	//indicate whether the person has optimal weight, is underweight, or is overweight
	
	if (bmi >= 18.5 && bmi <= 25)
	{
		cout << "Your weight of " << weight << " pounds is optimal!\n";
	}
	else if (bmi < 18.5)
	{
		cout << "You are underweight\n";
	}
	else if (bmi > 25)
	{
		cout << "You are overweight\n";
	}
	else
	{
		cout << "Incorrect input, run program again\n";
	}


	return 0;
}

