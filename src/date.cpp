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

int Date::convertDate(){
	int yearDays = 0;
	int monthDays = 0;
	int totalDays = 0;
	yearDays = year*365;
	if(month == 1 || month == 3 ||month == 5 ||month == 6 ||month == 7 ||month == 10 ||month == 12){
	    monthDays = month*31;
	} else if (month == 4 || month == 6 || month == 9 || month == 10){
	    monthDays = month*30;
	} else if (month == 2){
	    monthDays = month*28;
	} else {
	    monthDays = month*30;
	}
	totalDays = day+monthDays+yearDays;
	return totalDays;
}
