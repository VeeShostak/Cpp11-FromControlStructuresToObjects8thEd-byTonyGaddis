#ifndef DATE_H
#define DATE_H

// data class definition

class Date
{
private:
	int month;
	int day;
	int year;
public:

	// exception class for invalid day
	class InvalidDay
	{
	private:
		int value;
	public:
		InvalidDay(int val)
		{
			value = val;
		}
		int getValue() const 
		{
			return value;
		}
	};

	// exception class for invalid month
	class InvalidMonth
	{
	private:
		int value;
	public:
		InvalidMonth(int val)
		{
			value = val;
		}
		int getValue() const
		{
			return value;
		}
	};
	// default constructor
	Date()
	{
		month = 0;
		day = 0;
		year = 0;
	}

	// constructor -allows user to set values
	Date(int, int, int);	

	// mutator set day
	void setDay(int d)
	{
		if (!(d < 1) && !(d > 31))
		{
			day = d;
		}
		else
		{
			throw InvalidDay(d);
		}
	}
	// mutator set month
	void setMonth(int m)
	{
		if (!(m > 12) && !(m < 1))
		{
			month = m;
		}

		else
		{
			throw InvalidMonth(m);
		}
	}
	// mutator set year
	void setYear(int y)
	{
		year = y;
	}

	// date formatting functions
	void format1() const;
	void format2() const;
	void format3() const;
};

#endif