#include "Month.h"
#include<iostream>
#include <string>


using namespace std; 


void Month:: setMonthName(const string name)
{
	if (name == "January" || name == "Jan") setMonthNumber(1);
	else if (name == "February" || name == "Feb")
	{
		setMonthNumber(2);
	}
	else if (name == "March" || name == "Mar")
	{
		setMonthNumber(3);
	}
	else if (name == "April" || name == "Apr")
	{
		setMonthNumber(4);
	}
	else if (name == "May")
	{
		setMonthNumber(5);
	}
	else if (name == "June" || name == "Jun")
	{
		setMonthNumber(6);
	}
	else if (name == "July" || name == "Jul")
	{
		setMonthNumber(7);
	}
	else if (name == "August" || name == "Aug")
	{
		setMonthNumber(8);
	}
	else if (name == "September" || name == "Sept")
	{
		setMonthNumber(9);
	}
	else if (name == "October" || name == "Oct")
	{
		setMonthNumber(10);
	}
	else if (name == "November" || name == "Nov")
	{
		setMonthNumber(11);
	}
	else if (name == "December" || name == "Dec")
	{
		setMonthNumber(12);
	}
	else
	{
		setMonthNumber(1);
	}

}

void Month:: setMonthNumber(const int num)
{
	if (num < 1 || num > 12)
		monthNumber = 1;
	else
		monthNumber = num;

	if (monthNumber == 1)
		monthName = "January";
	else if (monthNumber == 2)
		monthName = "February";
	else if (monthNumber == 3)
		monthName = "March";
	else if (monthNumber == 4)
		monthName = "April";
	else if (monthNumber == 5)
		monthName = "May";
	else if (monthNumber == 6)
		monthName = "June";
	else if (monthNumber == 7)
		monthName = "July";
	else if (monthNumber == 8)
		monthName = "August";
	else if (monthNumber == 9)
		monthName = "September";
	else if (monthNumber == 10)
		monthName = "October";
	else if (monthNumber == 11)
		monthName = "November";
	else
		monthName = "December";
}

Month Month::operator++()
{
	if (monthNumber == 12)
		monthNumber = 1;
	else
		++monthNumber;
	setMonthNumber(monthNumber);
	return *this;
}

Month Month::operator++(int)
{
	Month temp(monthNumber);
	setMonthNumber(++monthNumber);
	return temp;
}

Month Month::operator--()
{
	if (monthNumber == 1)
		monthNumber = 12;
	else --monthNumber;
	setMonthNumber(monthNumber);
	return *this;
}

Month Month::operator--(int)
{
	Month temp(monthNumber);
	setMonthNumber(--monthNumber);
	return temp;
}

ostream &operator << (ostream &strm, const Month &obj)
{
	return strm << obj.monthName << "(" << obj.monthNumber << ")";
}

istream &operator >> (istream &strm, Month &monthObj)
{
	string m_Name;
	cout << endl << "Please enter the month name: " << endl;
	strm >> m_Name;
	monthObj.setMonthName(m_Name);
	return strm;
}

	
