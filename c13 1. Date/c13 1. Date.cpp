// This program uses the Date class, which is declared
// in the Date.h file. The member Date class's member
// functions are defined in the Date.cpp file.

#include "stdafx.h"
#include "Date.h"
#include <iostream>

using namespace std;

// === FUNCTION MAIN ===
int main()
{

	int evMonth;	// local variable for month
	int evDay;		// local variable for day
	int evYear;		// local variable for year


	// get the date of the event from the user
	do {
		cout << "Enter the month number: ";
		cin >> evMonth;
	} while (evMonth > 12 || evMonth < 1);

	do {
		cout << "Enter the Day number: ";
		cin >> evDay;
	} while (evDay < 1 || evDay > 31);

	cout << "Enter the year number: ";
	cin >> evYear;

	//create a Date object and store the month, day, and year in the myEvent object (using constructor)
	Date myEvent(evDay, evMonth, evYear);	

	// display the data in myEvent
	cout << "\n\tThe date of your event is:\n";
	myEvent.format1();
	myEvent.format2();
	myEvent.format3();

	return 0;
}