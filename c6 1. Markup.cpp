//1 Markup
#include "stdafx.h" // for Visual Studio
#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
double calculateRetail(double, double);

int main()
{
	double wholeSaleC,
		   markUp,
		   retailPrice;

	cout << setprecision(2) << fixed << showpoint; // cout formatting

	//user enters values to be used as function calculateRetail arguments
	cout << "Enter your item's wholesale cost: ";
	cin >> wholeSaleC;
	cout << "Enter the item's markup percentage: ";
	cin >> markUp;

	// Validate input. continue only if all user values are positive
	if (wholeSaleC < 0 || markUp < 0)
	{
		cout << "Error! You have entered a negative value.\nPlease restart"
			 << " the program and try again\n";
	}
	
	else
	{
		retailPrice = calculateRetail(wholeSaleC, markUp);
		cout << "The retail price of your item is: " << retailPrice << endl;

	}
	
	return 0;
}


//function definition
double calculateRetail(double wholeSaleCost, double markUpPercent)
{
	double retailPrice;
	retailPrice = (markUpPercent/100 * wholeSaleCost) + wholeSaleCost;
	//cout << retailPrice;

	return retailPrice;
}
