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
	std::string displayDate();
};

#endif
