
#include<iostream>
#include <string>
#include "Month.h"

using namespace std; 


void Month:: setMonthName(int num)
{
	if (num == 1)
		monthName = "January";
	else if (num == 2)
		monthName = "Febuary";
	else if (num == 3)
		monthName = "March";
	else if (num == 4)
		monthName = "April";
	else if (num == 5)
		monthName = "May";
	else if (num = 6)
		monthName = "June";
	else if (num == 7)
		monthName = "July";
	else if (num == 8)
		monthName == "August";
	else if (num == 9)
		monthName == "September";
	else if (num == 10)
		monthName == "October";
	else if (num == 11)
		monthName == "November";
	else 
		monthName == "December";

}

void Month::setMonthNumber(string nm)
{
	if (nm == "January")
		monthNumber = 1;
	else if (nm == "February")
		monthNumber = 2;

	else if (nm == "March")
		monthNumber = 3;
	else if (nm == "April")
		monthNumber = 4;
	else if (nm == "May")
		monthNumber = 5;
	else if (nm == "June")
		monthNumber = 6;
	else if (nm == "July")
		monthNumber = 7;
	else if (nm == "August")
		monthNumber = 8;
	else if (nm == "September")
		monthNumber = 9;
	else if (nm == "October")
		monthNumber = 10;
	else if (nm == "November")
		monthNumber = 11;
	else if (nm == "December")
		monthNumber = 12;
	
}

Month Month::operator++()
{
	monthNumber++;
	if (monthNumber == 13)
	{
		monthNumber = 1;
		monthName = "January";
	}
	setMonthName(monthNumber);
	return *this;
}

Month Month::operator--()
{
	monthNumber--;
	if (monthNumber == 0)
	{
		monthNumber = 12; 
		monthName = "December"; 

	}
	setMonthName(monthNumber);
	return *this;
}

