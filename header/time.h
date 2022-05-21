#ifndef TIME_HPP
#define TIME_HPP

class Time{
    private:
        int day;
        int hour;
        int minute;

        public:
           void setDay(int inputDay);
           void setHour(int inputHour);
           void setMinute(int inputMinute);
           int getDay();
           int getHour();
           int getMinute();
	   void displayDate();

};

#endif
