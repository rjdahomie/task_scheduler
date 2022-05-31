#include "../header/time.h"
#include <iostream>
#include <string>
using namespace std;

Time::Time(){
	day = 0;
	hour = 0;
	minute = 0;
}

Time::Time(int inputDay, int inputHour, int inputMinute){
	day = inputDay;
	hour = inputHour;
	minute = inputMinute;
}

void Time::setDay(int inputDay){
	day = inputDay;
}

void Time::setHour(int inputHour){
	hour = inputHour;
}

void Time::setMinute(int inputMinute){
	minute = inputMinute;
}

int Time::getDay(){
	return day;
}

int Time::getHour(){
	return hour;
}

int Time::getMinute(){
	return minute;
}





