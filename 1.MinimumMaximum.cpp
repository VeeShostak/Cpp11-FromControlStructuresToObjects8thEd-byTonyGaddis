/* 1.Minimum/Maximum
Write a program that asks the user to enter two numbers. The program
should use the conditional operator to determine which number is the smaller
and which is the larger. Display the results.
=============================================================================*/

//#include "stdafx.h" 
#include <iostream>
using namespace std;

int main()
{
	// the user's chosen numbers
	int number1, number2;

	cout << "Enter two numbers: \n";
	cin >> number1 >> number2;

	//determine which number is bigger
	(number1 > number2) ? (cout << "The number " << number1 << " is bigger\n") : (cout << "The number " << number2 << " is bigger\n");

	return 0;
}

