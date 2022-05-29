#include "../header/reminder.hpp"
#include <string>
#include "../header/task.h"
#include "../header/time.h"
#include <iostream>

using namespace std;

Reminder::Reminder(){
	reminderTitle = "";
	active = false;
	remind = 0;;
}

Reminder::Reminder(string remindTitle, int remindTime, bool activity){
	reminderTitle = remindTitle;
	remind = remindTime;
	active = activity;
}

Reminder::Reminder(Task T, int length){
	reminderTitle = T.getTitle();
	remind = length;
	active = true;

Reminder::~Reminder(){
	delete reminderTitle;
	delete active;
	delete remind;
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

string Reminder::getTitle(){
	return reminderTitle;
}

bool Reminder::getStatus(){
	return active;
}

int Reminder::getDay(){
	return remind;
}

void Reminder::addReminder(string title, int time, bool activity){
	new Reminder(title, time, activity);
}

void Reminder::editReminder(){
	int choice = 0;
	int time;
	string input;
	cout << "1: Change Title" << endl;
	cout << "2: Change Time(in days)" << endl;
	cout << "3: Change Status" << endl;
	cin >> choice;
	if(choice = 1){
		cin >> input;
		reminderTitle = input;
	}else if(choice = 2){
		cin >> time;
		remind = time;
	}else if(choice = 3){
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

