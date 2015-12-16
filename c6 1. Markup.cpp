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

	// validate input with do while loop. (accept only positive values)
	do
	{
		//user enters values to be used as function calculateRetail arguments
		cout << "Enter your item's positive wholesale cost: ";
		cin >> wholeSaleC;

		cout << "Enter the item's positive markup percentage: ";
		cin >> markUp;

	} while (wholeSaleC < 0 || markUp < 0);

	//calculate and display the retail price of the item
	retailPrice = calculateRetail(wholeSaleC, markUp);
	cout << "The retail price of your item is: " << retailPrice << endl;

	return 0;
}


//function definition
double calculateRetail(double wholeSaleCost, double markUpPercent)
{
	double retailPrice;
	retailPrice = (markUpPercent / 100 * wholeSaleCost) + wholeSaleCost;
	//cout << retailPrice;

	return retailPrice;
}
