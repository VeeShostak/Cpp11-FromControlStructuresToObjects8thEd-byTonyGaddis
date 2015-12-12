#include "stdafx.h" // for Visual Studio
#include <iostream>
using namespace std;

int main()
{
	const int TOTAL_VALUES = 10;
	int values[TOTAL_VALUES];
	int max = 0,
		min = 150; // larger than largest possible input
	bool error = false; // input validation

	//User enters 10 values into array 
	cout << "Enter 10 values (0-100):\n";
	for (int count = 0; count < TOTAL_VALUES; count++)
	{
		cout << "Enter value " << (count + 1) << ": ";
		cin >> values[count];

		//exit if wrong input - validate input
		if (values[count] < 0 || values[count] > 100)
		{
			error = true;
			cout << "You have entered a value outside the range (0 - 100)\n";
			break;
		}

		// keep track of max and min
		if (values[count] > max)
			max = values[count];

		if (values[count] < min)
			min = values[count];
	}
	
	if (error == false)
	{
		//Display max and min
		cout << "The largest value is: " << max << endl;
		cout << "The smallest value is: " << min << endl;
	}

	return 0;
}