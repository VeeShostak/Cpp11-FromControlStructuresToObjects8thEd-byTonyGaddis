#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// function prototype
int numWords(char*);
int numWords(string);

int main()
{
	char* myPtr = nullptr;

	const int SIZE = 81;
	char userSent[SIZE];

	myPtr = userSent;

	string sent;

	cout << "Enter a sentence less than " << (SIZE - 1) << " characters" << endl;
	cin.getline(myPtr, SIZE);
	//getline(cin, sent);

	//display the number of words contained in the user sentence
	cout << "Your sentence contains " << numWords(myPtr) << " words" << endl;

	return 0;
}

//======================================================================
// function definition - counts how many words are in the string that is passed as an arg
int numWords(char* sentence)
{
	int totalWords = 0; // counts words

	if (*(sentence) != '\0') // if some input then there is at least 1 word
		++totalWords;

	for (int count = 0; *(sentence+count) != '\0'; count++)
	{
		if (*(sentence + count) == ' ')
		{
			++totalWords;
		}
	}
	return totalWords;
}

//overloaded function accepts string class object as its argument
int numWords(string sentence)
{
	// note: the name of a string object is not a pointer so you cannot use pointer notation with it
	
	int totalWords = 0; // counts words

	if (sentence[0] != '\0') // if some input then there is at least 1 word
		++totalWords;

	for (int count = 0; sentence[count] != '\0'; count++)
	{
		if (sentence[count] == ' ')
		{
			++totalWords;
		}
	}
	return totalWords;
}