
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


	//create a Date object 
	Date myEvent;

	// get the day month and year from the user 
	cout << "Enter the month number: ";
	cin >> evMonth;

	cout << "Enter the Day number: ";
	cin >> evDay;
	
	cout << "Enter the year number: ";
	cin >> evYear;

	// store these values in the Date object
	try 
	{
		myEvent.setMonth(evMonth);
		myEvent.setDay(evDay);
		myEvent.setYear(evYear);

		// display the data in myEvent
		cout << "\n\tThe date of your event is:\n";
		myEvent.format1();
		myEvent.format2();
		myEvent.format3();
	}
	catch (Date::InvalidDay e)
	{
		cout << "Error: " << e.getValue() << " is an invalid value"
			 << " for the date's day.\n";
	}
	catch (Date::InvalidMonth e)
	{
		cout << "Error: " << e.getValue() << " is an invalid value"
			<< " for the date's month.\n";
	}

	return 0;
}