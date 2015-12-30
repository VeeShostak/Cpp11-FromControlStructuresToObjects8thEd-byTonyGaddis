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
	Date(int, int, int);	// constructor
	void format1() const;
	void format2() const;
	void format3() const;
};

#endif