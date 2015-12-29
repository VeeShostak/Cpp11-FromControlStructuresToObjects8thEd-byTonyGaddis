#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// Date class declaration
class Date
{
	private:
		int month;
		int day;
		int year;
	public:
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		void format1() const;
		void format2() const;
		void format3() const;
};

//=== Date class function definitions ===

// assigns a value to the month member
void Date::setMonth(int m)
{
	month = m;
}

// assigns a value to the day member
void Date::setDay(int d)
{
	day = d;
}

// assigns a value to the year member
void Date::setYear(int y)
{
	year = y;
}

// displays date in format 1
void Date::format1() const
{
	cout << month << "/" << day << "/" << year << endl;
}

// displays date in format 2
void Date::format2() const
{
	string whatMonth;		// holds the name of the month

	switch (month)
	{
	case 1:
		whatMonth = "January";
		break;
	case 2:
		whatMonth = "February";
		break;
	case 3:
		whatMonth = "March";
		break;
	case 4:
		whatMonth = "April";
		break;
	case 5:
		whatMonth = "May";
		break;
	case 6:
		whatMonth = "June";
		break;
	case 7:
		whatMonth = "July";
		break;
	case 8:
		whatMonth = "August";
		break;
	case 9:
		whatMonth = "September";
		break;
	case 10:
		whatMonth = "October";
		break;
	case 11:
		whatMonth = "November";
		break;
	case 12:
		whatMonth = "December";
		break;
	}

	cout << whatMonth << " " << day << ", " << year << endl;

}

// displays date in format 3
void Date::format3() const
{
	string whatMonth;		// holds the name of the month

	switch (month)
	{
	case 1:
		whatMonth = "January";
		break;
	case 2:
		whatMonth = "February";
		break;
	case 3:
		whatMonth = "March";
		break;
	case 4:
		whatMonth = "April";
		break;
	case 5:
		whatMonth = "May";
		break;
	case 6:
		whatMonth = "June";
		break;
	case 7:
		whatMonth = "July";
		break;
	case 8:
		whatMonth = "August";
		break;
	case 9:
		whatMonth = "September";
		break;
	case 10:
		whatMonth = "October";
		break;
	case 11:
		whatMonth = "November";
		break;
	case 12:
		whatMonth = "December";
		break;
	}

	cout << day << " " << whatMonth << " " << year << endl;
}


// === FUNCTION MAIN ===
int main()
{
	Date myEvent;	// defines an instance of the Date class
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


	// store the month, day, and year in the myEvent object
	myEvent.setMonth(evMonth);
	myEvent.setDay(evDay);
	myEvent.setYear(evYear);

	// display the data in myEvent
	cout << "\n\tThe date of your event is:\n";
	myEvent.format1();
	myEvent.format2();
	myEvent.format3();


	return 0;
}