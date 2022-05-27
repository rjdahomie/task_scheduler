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
	int counter = 0;
	while(day > 30){
		counter++;
		day -= 30;
	}
	month += counter;
	counter = 0;
	while(month > 12){
		counter++;
		month -= 12;
	}
	year += counter;
}

void Date::setDay(int inputDay){
	day = inputDay;
	int counter = 0;
	while(day > 30){
		counter++;
		day -= 30;
	}
	month += counter;
}

void Date::setMonth(int inputMonth){
	month = inputMonth;
	int counter = 0;
	while( month > 12){
		counter++;
		month -= 12;
	}
	year += counter;
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

std::string Date::displayDate(){
	return "Date: " + std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}

int Date::convertDate(){
	return (year * 360) + (month * 30) + (day);
}
