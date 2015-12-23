#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// function prototype
void sepWords(string&);

int main()
{
	string input = "StopAndSmellTheRoses"; // sample user input

	//display unformatted sentence
	cout << "Original sentence: " << input << endl;


	//seperate the words according to format
	sepWords(input);

	// display new formatted sentence
	cout << "New sentence: " << input << endl;

	return 0;
}
// ====================================================
// function definition - converts input to a string where words are separated by spaces and only the
//first word starts with a capital letter
void sepWords(string &input)
{
	char tempLetter; //temporarily stores a letter from &input
	int length;
	length = input.size(); // get original length to use in the loop
	

	for (int count = 1; count < length; count++) // count starts at 1 to ignore first word(1st capitalization)
		{
			tempLetter = input[count];
			// if uppercase character is found add a space
			if (isupper(tempLetter))
			{
				input.insert(count, 1 ,' ');
				++count; //after insertion of a space character we need to add 1 to the index (this makes count go back to the capital letter)

				//set the letter to lowercase (b/c only first word starts with an uppercase letter)
				input[count] = tolower(input[count]);
			}
		}
}