#include "stdafx.h"
#include <iostream>
#include <cstring> // for strlen
using namespace std;

//function prototype
int countChar(char*);

int main()
{
	const int SIZE = 21;
	char userStr[SIZE];

	char* myPtr = nullptr;
	myPtr = userStr;

	cout << "Enter a sentence no more than " << (SIZE - 1)
		<< " Characters\n";
	cin.getline(myPtr, SIZE);

	//count the number of characters in the string and display the number
	cout << "The sentence is: " << countChar(myPtr) << " characters" << endl;

	return 0;
}

//Function definition - return length of the string (excluding null terminator)
int countChar(char* sentence)
{
	int length;
	length = strlen(sentence);

	return length;


}