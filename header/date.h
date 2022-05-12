#ifndef DATE_HPP
#define DATE_HPP

class Date{
    private:
        int day;
        int month;
        int year;


    public:
        Date();
        Date(int inputDay, int inputMonth, int inputYear);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay();
        int getMonth();
        int getYear();
};

#endif
