// specification file for the dice class
#ifndef DICE_H
#define DICE_H

class Dice
{
private:
	int value;		// value of the die
	int sides;		// number of sides of each die
public:
	Dice(int = 6);	// constructor - rolls once called
	
	void roll();	// rolls the die
	int getSides();	// return num of sides
	int getValue(); // get the value of the dice
};


#endif