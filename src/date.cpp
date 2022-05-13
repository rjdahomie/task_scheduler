#include "../header/date.h"
#include <string>
#include <iostream>
using namespace std;

Date::Date(){
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int inputDay, int inputMonth, int inputYear){
	day = inputDay;
	month = inputMonth;
	year = inputYear;
}

void Date::setDay(int inputDay){
	day = inputDay;
}

void Date::setMonth(int inputMonth){
	month = inputMonth;
}

void Date::setYear(int inputYear){
	year = inputYear;
}

int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}

void Date::displayDate(){
	cout << "Date: " << day << "/" << month << "/" << year << endl;
}
