#ifndef TIME_HPP
#define TIME_HPP

class Time{
    private:
        int day;
        int hour;
        int minute;


    public:
        Time();
        Time(int inputDay, int inputHour, int inputMinute);
        void setDay(int);
        void setHour(int);
        void setMinute(int);
        int getDay();
        int getHour();
        int getMinute();
};

#endif
