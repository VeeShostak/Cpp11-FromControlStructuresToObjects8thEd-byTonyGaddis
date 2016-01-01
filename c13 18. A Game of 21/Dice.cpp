// implementation file for the Dice class
#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include "Dice.h"
using namespace std;

// constructor gets num of sides and performes a roll
Dice::Dice(int numSides)
{
	// get system time
	unsigned seed = time(0);

	// seed the random number generator
	srand(seed);

	// set the number of sides
	sides = numSides;

	// perform an initial roll
	roll();
}

// simmulates the rolling of a die twice
void Dice::roll()
{
	const int MIN_VALUE = 1; // minimum die value

	// get a random  value for the die
	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
	value += (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

// get num of sides
int Dice::getSides()
{
	return sides;
}
// get value of role
int Dice::getValue()
{
	return value;
}
