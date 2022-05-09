#ifndef TIME_HPP
#define TIME_HPP


class time{
        private:
           int time;
           int hour;
           int minute;


        public:
           void setDay(int);
           void setHour(int);
           void setMinute(int);
           int getDay();
           int getHour();
           int getMinute()
};

#endif

