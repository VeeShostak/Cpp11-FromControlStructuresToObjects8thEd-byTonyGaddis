#include "stdafx.h"
#include "Dice.h"
#include <iostream>

using namespace std;

int main()
{
	char again = 'n';	// player agrees to roll the dice again with a Y or y
	int pTotal = 0;		// player points
	int cTotal = 0;		// computer points
	bool pLose = false;	// flag if player goes over 21 and loses


	cout << "Rolling dice...\n";
	Dice Game21;

	do
	{
		Game21.roll();
		cTotal += Game21.getValue();
		Game21.roll();
		pTotal += Game21.getValue();
		cout << "You have " << pTotal << " points" << endl;

		// if player is over 21 BEFORE stopping he/she lost (the dealer points are irrelevant)
		if (pTotal > 21)
		{
			cout << "\nYou are over 21, you lose\n";
			cout << "The computer had: " << cTotal << " points\n";
			pLose = true;
			break;
		}

		// ask player if they want to roll again
		cout << "Roll Again? ";
		cin >> again;
		cin.ignore();		// ignore newline character in keyboard buffer
	} while ((again == 'y' || again == 'Y'));


	// winning conditions for player - if player is not over 21 and his points
	// are higher than the dealer, while the dealer is not over 21 , player wins
	// OR if player is not over 21 and dealer is over 21, player wins
	if (!pLose && (pTotal > cTotal) && (cTotal <= 21) || (!pLose && (cTotal > 21)))
	{
		cout << "\tYou won!\n";
		cout << "The computer had: " << cTotal << " points\n";
	}
	// other losing condition for player -if dealer is not over 21, while
	// player is also not over 21, but the dealer has more points, then dealer wins
	else if ((cTotal <= 21) && (cTotal > pTotal) && !pLose)
	{
		cout << "\nYou lose\n";
		cout << "The computer had " << cTotal << " points\n";
	}
	// if both dealer and player are not over 21, and they have equal points, it is a tie
	else if (cTotal <= 21 && !pLose && cTotal == pTotal)
	{
		cout << "It's a tie!\n";
		cout << "The computer had: " << cTotal << " points\n";
	}

	

	return 0;
}