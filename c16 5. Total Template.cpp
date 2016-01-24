#include "stdafx.h"
#include <iostream>
using namespace std;

// function template definition
template <class T>
T total(T numVal)
{
	T total = 0;	// accumulator
	T userNum;		// stores the value entered

	for (int count = 0; count < numVal; count++)
	{
		cout << "Enter value " << (count + 1) << ": ";
		cin >> userNum;
		total += userNum;	// keeps track of total
		cout << endl;
	}
	return total;
}


int main()
{
	// Send values of several types. int and double
	int intVal = 5;		
	double doubVal = 4.0;

	cout << "The total for int values is: " << total(intVal) << endl;
	cout << "The total for double values is: " << total(doubVal) << endl;

	return 0;
}