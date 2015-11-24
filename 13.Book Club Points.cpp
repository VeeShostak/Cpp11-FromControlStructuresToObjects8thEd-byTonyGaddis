/* 13. Book Club Points */

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// number of books the user purchased 
	int booksPur; 

	//get number of books the user purchased
	cout << "\tYour Points for Serendipity Booksellers\n\n"
		<< "Enter number of books you have purchased this month: \n";
	cin >> booksPur;


	/* since 4 or more books is 60 points, and a switch-case statement can only hold an 
	integer literal or constant (i.e can't make a case that has booksPur >= 4), 
	we use this if statement to make it possible to use a switch-case for this problem */
	if (booksPur >= 4)
	{
		booksPur = 4;
	}

	//decide how many points the user has earned
	switch (booksPur)
	{
	case 0:
		cout << "You have earned 0 points\n";
		break;
	case 1:
		cout << "You have earned 5 points\n";
		break;
	case 2:
		cout << "You have earned 15 points\n";
		break;
	case 3:
		cout << "You have earned 30 points\n";
		break;
	case 4:
		cout << "You have earned 60 points\n";
		break; 
	default:
		cout << "You have entered an invalid input\n";
	}

	return 0;
}