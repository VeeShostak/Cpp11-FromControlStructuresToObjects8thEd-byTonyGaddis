// Implementation file for the Date class.
#include "stdafx.h"		// precompiled header needed for visual studio
#include "Date.h"		// needed for the Date class
#include <iostream>		// needed for cout
#include <string>		// needed for strings

using namespace std;


//=== Date class function definitions ===

// constructor accepts arguments for day month and year
Date::Date(int d, int m, int y)
{
	if (!(d < 1) && !(d > 31))
	{
		day = d;
	}
	else
	{
		throw InvalidDay(d);
	}

	if (!(m > 12) && !(m < 1))
	{
		month = m;
	}

	else
	{
		throw InvalidMonth(m);
	}

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
