// 20 Random Number Guessing Game

//#include "stdafx.h"
#include <iostream>
#include <cstdlib> // rand and srand
#include <ctime> // time function
using namespace std;

int main()
{
	//range for random number generation
	static int minValue = 1,
		       maxValue = 20;

	int rNumber, // the generated random number
		guessNum; // the user's guess

	unsigned seed = time(0); //get system time
	srand(seed); //seed the random number generator

	// generate a random number between our range
	rNumber = (rand() % (maxValue - minValue + 1) + minValue);

	cout << "Guess the random number (1 - 20)\n" << "Guess: ";
	cin >> guessNum;

	while (guessNum != rNumber)
	{
		if (guessNum > rNumber)
		{ 
			cout << "Too high, try again\n" << "Guess: ";
			cin >> guessNum;
		}

		else if (guessNum < rNumber)
		{
			cout << "Too low, try again\n" << "Guess: ";
			cin >> guessNum;
		}
	}

	cout << "Congradulations, the random number is " << guessNum << endl;
	

	return 0;
}