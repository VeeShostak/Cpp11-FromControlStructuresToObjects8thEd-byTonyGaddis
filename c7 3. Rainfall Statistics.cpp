#include "stdafx.h" // for Visual Studio
#include <iostream>
#include <iomanip> // cout formatting
using namespace std;

int main()
{
	const int SIZE = 12;
	double rainfallAmt[SIZE];
	double totalRain = 0, // initialize accumulator
		   max, min;	 // highest and lowest amt of rainfall
	bool error = false; // input validation

	//user inputs amt of rainfall for 12 months
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Input amount of rainfall for month " << (count + 1) << ": ";
		cin >> rainfallAmt[count];

		//input validation. exit if negative input
		if (rainfallAmt[count] < 0){
			error = true;
			cout << "Invalid input! You entered a negative number. Restart the program and try again\n";
			break;
		}

		// initialize max & min to the first element in the array - do this when the
		// user inputs the very first element into the array (1st element becomes available)
		if (count == 0) {
			max = rainfallAmt[count];
			min = rainfallAmt[count];
		}

		// track max 
		if (rainfallAmt[count] > max)
			max = rainfallAmt[count];

		//track min
		if (rainfallAmt[count] < min)
			min = rainfallAmt[count];

		totalRain += rainfallAmt[count]; // accumulator

	}

	if (error == false)
	{
		// Display total rainfall for the year, average monthly rainfall,
		// and the month with the highest and lowest rainfall
		cout << setprecision(2) << fixed; //cout formatting

		cout << "Total rainfall for the year: " << totalRain << endl
			<< "Average monthly rainfall: " << (totalRain / SIZE) << endl;

		cout << "Highest amount of rainfall: " << max << endl
			<< "Lowest amount of rainfall: " << min << endl;
	}

	return 0;
}