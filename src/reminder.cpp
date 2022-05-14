#include "../header/reminder.hpp"
#include <string>

using namespace std;

Reminder::Reminder(){
	reminderID = 0;
	active = false;
	remind = 0;
}

Reminder::Reminder(int newID, int time, bool activity){
	reminderID = newID;
	remind = time;
	active = activity;
}

Reminder::~Reminder(){
	delete reminderID;
	delete active;
	delete remind;
}

void Reminder::setReminderID(int setID){
	reminderID = setID;
}

void Reminder::setStatus(bool newStatus){
	active = newStatus;
}

void Reminder::setDay(int newTime){
	remind = newTime;
}

int Reminder::getReminderID(){
	return reminderID;
}

bool Reminder::getStatus(){
	return active;
}

int Reminder::getDays(){
	return remind;
}

void Reminder::addReminder(int newID, int time, bool activity){
	new Reminder(newID, time, activity);
}

void Reminder::deleteReminder(Reminder R){
	delete R;
}

void Reminder::displayReminder(){
	cout << reminderID << ": Due in " << remind << " days." << endl;
}

