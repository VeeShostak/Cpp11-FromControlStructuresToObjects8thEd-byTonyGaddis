// 1. Sum of Numers

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int number; // user chosen number

	cout << "Enter a postive number: ";
	cin >> number;

	//Validate Input (accept only a positive number)
	while (number < 0)
	{
		cout << "Error! You need to enter a positive number\n" 
			<< "Enter a postive number: ";
		cin >> number;
	}
	
	int result = 0; // initialize the accumulator

	// find sum of numbers that are: 1 through the user chosen number (inclusive) 
	for (int startNum = 1; startNum != number + 1; startNum++)
	{
			result += startNum;
	}
	// display the result
	cout << "the sum of numbers 1 through " << number << " is: " << result << endl;

	
	return 0;
}