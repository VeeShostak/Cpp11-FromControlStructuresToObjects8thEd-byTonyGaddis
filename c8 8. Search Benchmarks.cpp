#include "stdafx.h"
#include <iostream>
using namespace std;

//function prototypes
int seqSearch(const int[], int, int);
int binSearch(const int[], int, int);
void selectionSort(int[], int);

const int SIZE = 20;

int main()
{
	
	int setArr1[SIZE] = { 5, 2, 8, 9, 1, 3, 4, 7, 6, 12, 34, 56, 26, 87, 67, 19, 30, 22, 66, 88 };
	int target = 87, // what we want to find
		seqCompare, // # of comparisons of seq search
		binCompare; // # of comparisons of bin search
	
	//display the list
	cout << "Original list: ";
	for (int val : setArr1)
		cout << val << " ";

	//sort the list using insertion sort and display new sorted list
	selectionSort(setArr1,SIZE);
	cout << "\nNew sorted list: ";
	for (int val : setArr1)
		cout << val << " ";

	//seq search for target
	seqCompare = seqSearch(setArr1, SIZE, target);

	//bin search for target
	binCompare = binSearch(setArr1, SIZE, target);

	// Display number of comparisons from sequential search and binary search
	cout << "\n\nNumber of comparisons from sequential search: " << seqCompare << endl;
	cout << "Number of comparisons from binary search: " << binCompare << endl;
	

	return 0;
}

// =============================================================

//linear(sequential) search algo
int seqSearch(const int list[], int numElems, int value)
{
	bool found = false; // flag to indicate if the value was found
	int i;				// used as a subscript to search array
	int comparisons = 0; // number of comparisons made (accumulator)

	for (i = 0; i < numElems && !found; i++)
	{
		//stop when found
		if (list[i] == value)
			found = true; 
		
		comparisons++; // accumulate - keep track of comparisons
	}

	return comparisons;
}

//binary search algo
int binSearch(const int list[], int numElems, int value)
{
	int first = 0,			// first array element
		last = numElems - 1, // last array element
		middle,				// midpoint of search
		comparisons = 0;	// number of comparisons made (accumulation)
	bool found = false;		// flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2; // calculate midpoint

		if (list[middle] == value) // if value is found at mid
		{
			found = true;
		}
		else if (list[middle] > value) // if value is in lower half
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1; // if value is in upper half
		}

		comparisons++;
	}

	return comparisons;
}

// selection sort aglo
void selectionSort(int list[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = list[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (list [index] < minValue)
			{
				minValue = list[index];
				minIndex = index;
			}
		}
		list[minIndex] = list[startScan];
		list[startScan] = minValue;
	}
}