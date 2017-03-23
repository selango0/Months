
#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Month
{
private:
	string monthName;
	int monthNumber; // monthNumber will accept from 1 to 12

public:
	Month()
	{
		monthName = "January";
		monthNumber = 1;
	}

	Month(string nm)
	{
		monthName = nm;
		setMonthNumber(monthName);
	}

	Month(int num)
	{
		if (monthNumber >= 1 && monthNumber <= 12)
		{
			monthNumber = num;
		}
		setMonthName(monthNumber);
	}

	string getMonthName()
	{
		return monthName;
	}

	int getMonthNumber() 
	{
		return monthNumber;
	}

	void setMonthName(int num);

	void setMonthNumber(string x);
	

	

	Month operator++();
	//Month operator++(int);
	Month operator--();
	//Month operator--(int);
	friend ostream &operator <<(ostream &, const Month &);
	friend istream &operator >> (istream &, Month &);
};
#endif
