#include "../header/reminder.hpp"
#include <string>
#include "task.h"
#include <iostream>

using namespace std;

Reminder::Reminder(){
	reminderID = 0;
	reminderTitle = "";
	active = false;
	remind = 0;
}

Reminder::Reminder(int newID, string remindTitle, int time, bool activity){
	reminderID = newID;
	reminderTitle = remindTitle;
	remind = time;
	active = activity;
}

Reminder::Reminder(Task T){
	reminderID = T.getID();
	reminderTitle = T.getTitle();
	remind = time;
	active = true;

Reminder::~Reminder(){
	delete reminderID;
	delete reminderTitle;
	delete active;
	delete remind;
}

void Reminder::setReminderID(int setID){
	reminderID = setID;
}

void Reminder::setTitle(string newTitle){
	reminderTitle = newTitle;
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

string Reminder::getTitle(){
	return reminderTitle;
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

void Reminder::editReminder(){
	int choice = 0;
	int oneAndThree;
	string input;
	cout << "1: Change ID" << endl;
	cout << "2: Change Title" << endl;
	cout << "3: Change Time(in days)" << endl;
	cout << "4: Change Status" << endl;
	cin >> choice;
	if(choice = 1){
		cin >> oneAndThree;
		reminderID = oneAndThree;
	}else if(choice = 2){
		cin >> input;
		reminderTitle = input;
	}else if(choice = 3){
		cin >> oneAndThree;
		remind = oneAndThree;
	}else if(choice = 4){
		cout << "True or False(input F or T)" << endl;
		cin >> input;
		if(input = "F" || input = "f"){
			active = false;
		}else if(input = "T" || input = "t"){
			active = true;
		}
	}
}

void Reminder::deleteReminder(Reminder R){
	delete R;
}

void Reminder::displayReminder(){
	cout << reminderTitle << ": Due in " << remind << " days." << endl;
}

