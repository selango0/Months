#pragma once
#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <iomanip>
#include <string>

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

	Month(string name)
	{
		setMonthName(name);
	}

	Month(const int num)
	{
		setMonthNumber(num);
	}

	const string getMonthName()
	{
		return monthName;
	}

	const int getMonthNumber() 
	{
		return monthNumber;
	}

	void setMonthName(const string name)
	{
		monthName = name;

	}

	void setMonthNumber(const int num)
	{
		monthNumber = num;
	}

	

	Month operator++();
	Month operator++(int);
	Month operator--();
	Month operator--(int);
	friend ostream &operator <<(ostream &strm, const Month &obj);
	friend istream &operator >> (istream &strm, Month &monthObj);
};
#endif
