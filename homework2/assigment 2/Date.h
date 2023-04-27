#ifndef _DATE
#define _DATE

#include<iostream>
using namespace std;

class Date {
private:
	int day, month, year;

public:
	Date();
	Date(int d, int m, int y);

	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }

	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	void printDate() const;
};

#endif