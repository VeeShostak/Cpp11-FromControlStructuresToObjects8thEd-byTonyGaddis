#include "stdafx.h"
#include <iostream>
using namespace std;

//function prototype
int findMode(int[], int);


int main()
{
	const int SIZE = 5;
	int list[SIZE] = { 4, 3, 2, 3, 1 };
	int mode; // holds the mode or -1 if there is no mode

	//display list
	cout << "The list is: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(list + i) << " ";
	}

	//find mode and display it
	mode = findMode(list, SIZE);

	if (mode > 0)
	{
		cout << "\nThe mode is: " << mode << endl;
	}
	else
	{
		cout << "\nThere is no mode" << endl;
	}

	return 0;

}

//=========================================================================
//function definition. - finds the mode in an array
int findMode(int list[], int size)
{
	int mostFreq = 0; // will be the mode or -1 if there is no mode

	int *allFrequencies = nullptr;
	allFrequencies = new int[size]; //dynamically allocate array

	//frequencies start at 0. - initialize all of them to 0
	for (int i = 0; i < size; i++)
	{
		*(allFrequencies + i) = 0;
	}

	//keep track of frequency 
	//(the allFrequencies array's indexes correspond to list[]'s indexes), so
	//we will find the index of the mode using the allFrequencies dynamic array.
	// We can then find the mode number with list[mostFreq]
	for (int i = 0; i < size; i++)
	{
		for (int i2 = 0; i2 < size; i2++)
		{
			if (*(list + i) == *(list + i2))
			{
				++*(allFrequencies + i);
			}
		}
	}

	//find index of most frequent number
	for (int i = 0; i < size; i++)
	{
		if (*(allFrequencies + i) > mostFreq)
		{
			mostFreq = i;
		}
	}

	//if there is no mode(none of the values occure more than once) return -1
	// if there is a mode (else) then assign it to mostFreq
	if (mostFreq == 1)
		mostFreq = -1;

	else
		mostFreq = *(list + mostFreq);

	//free memory
	delete[] allFrequencies;
	allFrequencies = nullptr;

	return mostFreq; //return the mode

}