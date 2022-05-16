#ifndef REMINDER_HPP
#define REMINDER_HPP

#include "task.h"
#include "date.h"
#include <string>

using namespace std;

class Reminder : public Task{
	private:
		int reminderID;
		bool active;
		int remind;
		string reminderTitle;
	public:
		Reminder();
		Reminder(int newReminderID, string newTitle, int newRemind, bool status);
		Reminder(Task T);
		~Reminder();
		void setReminderID(int);
		void setTitle(string);
		void setStatus(bool);
		void setDay(int);
		int getReminderID();
		string getTitle();
		bool getStatus();
		int getDays();
		void addReminder();
		void editReminder();
		void deleteReminder();
		void checkRemind(Date curr, Date due);
		void displayReminder();
};

#endif 
