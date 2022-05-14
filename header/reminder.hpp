#ifndef REMINDER_HPP
#ifndef REMINDER_HPP
#define REMINDER_HPP

using namespace std;

class Reminder {
	private:
		int reminderID;
		bool active;
		int remind;
	public:
		Reminder();
		Reminder(int newReminderID, int newRemind, bool status);
		void setReminderID(int);
		void setStatus(bool);
		void setDay(int);
		int getReminderID();
		bool getStatus();
		int getDays();
		void addReminder();
		void editReminder(); //Not sure how to implement or why when we have setters.
		void deleteReminder();
		void checkRemind(); // Will be implemented once Time and Date are fully made.
		void displayReminder();
};

#endif 
