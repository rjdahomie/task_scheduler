#ifndef DATE_HPP
#define DATE_HPP

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
	
	int check_leap_year(int year);
	int no_of_days_in_month(int month, int year);
	int difference_of_days(int day1,int month1, int year1, int day2, int month2, int year2);
};

#endif
