#ifndef REMINDER_HPP
#define REMINDER_HPP

//#include "../header/task.h"
#include <string>

using namespace std;

class Reminder{
	private:
		bool active;
		int remind;
		string reminderTitle;
	public:
		Reminder();
		Reminder(string newTitle, int newRemind, bool status);
		~Reminder();
		void setTitle(string);
		void setStatus(bool);
		void setDay(int);
		string getTitle();
		bool getStatus();
		int getDay();
		void displayReminder();
};

#endif 
