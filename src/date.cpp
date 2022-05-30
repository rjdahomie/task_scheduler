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
    cout << "Date: " << month << "/" << day << "/" << year << endl;
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
    //Testing: cout << "Day: " << day << " Month: " << monthDays << " Year: " << yearDays << " Total days: " << totalDays << endl;
    return totalDays;
}

int Date::check_leap_year(int year)
{
    if( year%4==0 && year%100!=0 || year%400==0 )
    return 1;
    
    else
    return 0;
}

int Date::no_of_days_in_month(int month, int year)
{
    // jan, march, may, july, aug, oct, dec contains 31 days
    if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
        return 31;
        
    // april, jun, sept, nov contains 30 days
    if( month==4 || month==6 || month==9 || month==11 )
        return 30;
    
    if( month==2 )
    {
        int n=check_leap_year(year);
        if(n==1)    // if year is a leap year then Feb will contain 29 days, otherwise it contains 28 days
	return 29;
        
        else
        return 28;
    }
}

int Date::difference_of_days(int day1,int month1, int year1, int day2, int month2, int year2)
{
    if(year1==year2)
    {
        if(month1==month2)
        {
            if(day1==day2)      //for same dates
                return 0;
            else
                return (day1-day2);  //for same year, same month but diff days
        }
        else if(month1<month2)
        {
            int result=0;
            for(int i=month1; i<month2; i++)
            result=result+no_of_days_in_month(i,year1);
            if(day1==day2)      //for same year, same day but diff month 
                return result;
            else if(day1<day2)
            {
                result=result+(day2-day1);
                return result;
            }
            else
            {
                result=result-(day1-day2);
                return result;
            }
        }
        else
	{
	   int result=0;
            for(int i=month2; i<month1; i++)
            result=result+no_of_days_in_month(i,year1);
                
            if(day1==day2)
                return result;
            else if(day2<day1)
            {
                result=result+(day1-day2);
                return result;
            }
            else
            {
                result=result-(day2-day1);
                return result;
            }
        }
    }
    else if(year1<year2)
    {
        int temp=0;
        for(int i=year1; i<year2; i++)
        {
            if(check_leap_year(i))
                temp=temp+366;
            else
                temp=temp+365;
        }
        
        if(month1==month2)      
        {
	    if(day1==day2)      //for same month, same day but diff year
                return temp;
            else if(day1<day2)
                return temp+(day2-day1);
            else
                return temp-(day1-day2);
        }
        else if(month1<month2)
        {
            int result=0;
            for(int i=month1; i<month2; i++)
            result=result+no_of_days_in_month(i,year2);
	    if(day1==day2)      // for same day, diff year and diff month
                return temp+result;
            else if(day1<day2)
            {
                result=result+(day2-day1);
                return temp+result;
            }
            else
            {
                result=result-(day1-day2);
                return temp+result;
            }
        }
        else
        {
	    int result=0;
            for(int i=month2; i<month1; i++)
            result=result+no_of_days_in_month(i,year2);
                
            if(day1==day2)
                return temp-result;
            else if(day2<day1)
            {
                result=result+(day1-day2);
                return temp-result;
            }
            else
            {
                result=result-(day2-day1);
                return temp-result;
            }
        }
    }
    else
    {
        int temp=0;
        for(int i=year2; i<year1; i++)
        {
            if(check_leap_year(i))
                temp=temp+366;
            else
                temp=temp+365;
        }
        
        if(month1==month2)
	{
            if(day1==day2)      // for same day, same month but diff year
                return temp;
            else if(day2<day1)
                return temp+(day1-day2);
            else
                return temp-(day2-day1);
        }
        else if(month2<month1)
        {
            int result=0;
            for(int i=month2; i<month1; i++)
            result=result+no_of_days_in_month(i,year1);
                
            if(day1==day2)
                return temp+result;
            else if(day2<day1)
            {
                result=result+(day1-day2);
                return temp+result;
            }
            else
            {
                result=result-(day2-day1);
                return temp+result;
            }
        }
        else
        {
            int result=0;
            for(int i=month1; i<month2; i++)
            result=result+no_of_days_in_month(i,year1);
                
            if(day1==day2)      // for same day, diff year and diff month
                return temp-result;
            else if(day1<day2)
            {
                result=result+(day2-day1);
                return temp-result;
            }
            else
            {
                result=result-(day1-day2);
                return temp-result;
            }
        }
    }
}
