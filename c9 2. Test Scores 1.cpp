#include "stdafx.h"
#include <iostream>
#include <iomanip> // cout formatting
using namespace std;

//function prototype
void sortList(double *, int);
double avrScore(double *, int);

int main()
{
	double *ptr = nullptr;
	int numAmt; // userdefined number of elements
	double average;

	cout << "Enter number of test scores: ";
	cin >> numAmt;

	ptr = new double[numAmt]; // allocate array to hold user defined num of test scores
	//user enters test scores
	for (int i = 0; i < numAmt; i++)
	{
		do {
			cout << "Enter test score " << (i + 1) << ": ";
			cin >> *(ptr + i);
		} while (*(ptr + i) < 0); // validate input - only positive test scores
	}

	//pass array to a function that sorts the test scores
	//in ascending order
	sortList(ptr, numAmt);

	//function calculates the average score
	average = avrScore(ptr, numAmt);
	
	cout << setprecision(2) << fixed << showpoint; // cout formatting
	// display sorted list of scores and the average score
	cout << "The scores (from least to greatest) are: " << endl;
	for (int i = 0; i < numAmt; i++)
	{
		cout << "Score " << (i + 1) << ": " << *(ptr + i) << endl;
	}

	cout << "The average score is: " << average << endl;

	//free memory
	delete[] ptr;
	ptr = nullptr;


	return 0;
}

//selection sort func definition. -sorts list in ascending order
void sortList(double * list, int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = *(list+startScan);

		for (int index = startScan + 1; index < size; index++)
		{
			if ( *(list+index) < minValue)
			{
				minValue = *(list + index);
				minIndex = index;
			}
		}
		*(list + minIndex) = *(list + startScan);
		*(list + startScan) = minValue;
	}
}

//get average score of test scores
double avrScore(double *scores, int size)
{
	double total = 0; // initialize accumulator
	for (int i = 0; i < size; i++)
	{
		total += *(scores + i);
	}

	return (total / size);
}