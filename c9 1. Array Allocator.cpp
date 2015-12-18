#include "stdafx.h"
#include <iostream>
using namespace std;

int *allocateNumbers(int);

int main()
{
	int * ptrArr = nullptr; 
	int numAmt;

	cout << "Enter the number of elements to allocate: ";
	cin >> numAmt;


	ptrArr = allocateNumbers(numAmt);
	
	for (int i = 0; i < numAmt; i++)
	{
		cout << "Enter value for number " << (i + 1) << ": ";
		cin >> ptrArr[i];
	}

	cout << "These are the values you chose: " << endl;
	for (int i = 0; i < numAmt; i++)
	{
		cout << *(ptrArr+i) << endl;
	}

	//free the memory
	delete[] ptrArr;
	ptrArr = nullptr;

	return 0;
}

int *allocateNumbers(int num)
{
	int * pntr = nullptr;
	pntr = new int[num]; // dynamic memory allocation
	
	return pntr;

}
