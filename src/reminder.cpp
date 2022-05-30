#include "../header/reminder.hpp"
#include <string>
#include "../header/task.h"
#include "../header/date.h"
#include <iostream>

using namespace std;

Reminder::Reminder(){
    reminderTitle = "";
    active = false;
    remind = 0;
}

Reminder::Reminder(string remindTitle, int remindTime, bool activity){
    reminderTitle = remindTitle;
    remind = remindTime;
    active = activity;
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

void Reminder::displayReminder(){
    cout << reminderTitle << ": Due in " << remind << " days." << endl;
}

