#ifndef DATE_HPP
#define DATE_HPP

#include <string>

class Date{
    public:
        int day;
        int month;
        int year;
        Date();
        Date(int inputDay, int inputMonth, int inputYear);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay();
        int getMonth();
        int getYear();
	int convertDate();
	void displayDate();
	std::string displayDateString(){return "Date: " +std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);}
	int check_leap_year(int year);
	int no_of_days_in_month(int month, int year);
	int difference_of_days(int day1,int month1, int year1, int day2, int month2, int year2);
};

#endif
