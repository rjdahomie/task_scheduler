#include "../header/task.h"
#include <string>
#include <list>

using namespace std;

Task::Task(){
    taskID = 0;
    title = "";
    description = "";
    classification = "";
    priority = "";
    duration = new Time();
    dueDate = new Date();
    location = "";
    assigneeList = new list<Assignee>;
    remind = new Reminder();
}

Task::Task(int inputTaskID, string inputTitle){
    taskID = inputTaskID;
    title = inputTitle;
    description = "";
    classification = "";
    priority = "";
    duration = new Time();
    dueDate = new Date();
    location = "";
    assigneeList = new list<Assignee>;
    remind = new Reminder();
}

Task::Task(int inputTaskID, string inputTitle, string inputDescription, string inputClassification, string inputPriority, Time *inputDuration, Date *inputDueDate, string inputLocation, list<Assignee> *inputAssigneeList, Reminder *inputRemind){
    taskID = inputTaskID;
    title = inputTitle;
    description = inputDescription;
    classification = inputClassification;
    priority = inputPriority;
    duration = inputDuration;
    dueDate = inputDueDate;
    location = inputLocation;
    assigneeList = inputAssigneeList;
    remind = inputRemind;
}

/*
Task::~Task(){
    //Might need to go through the list and delete all one by one
    //delete[] assigneeList;
    delete duration;
    delete dueDate;
}
*/

void Task::setID(int inputID){
    taskID = inputID;
}

int Task::getID(){
    return taskID;
}

void Task::setTitle(string inputTitle){
    title = inputTitle;
}

string Task::getTaskTitle(){
    return title;
}

void Task::setDescription(string inputDescription){
    description = inputDescription;
}

string Task::getDescription(){
    return description;
}

void Task::setClassification(string inputClassification){
    classification = inputClassification;
}

string Task::getClassification(){
    return classification;
}

void Task::setPriority(string inputPriority){
    priority = inputPriority;
}

string Task::getPriority(){
    return priority;
}

void Task::setDuration(Time *inputTime){
    duration = inputTime;
}

Time Task::getDuration(){
    return *duration;
}

void Task::setDueDate(Date *inputDate){
    dueDate = inputDate;
}

Date Task::getDueDate(){
    return *dueDate;
}

void Task::setLocation(string inputLocation){
    location = inputLocation;
}

string Task::getLocation(){
    return location;
}

void Task::addAssignee(){
    cout << "Enter the name of the new assignee: " << endl;
    string name;
    cin >> name;
    Assignee person(name);
    assigneeList->push_back(person);
    cout << "Added." << endl;
}

void Task::deleteAssignee(){
    cout << "Enter the name of the assignee you want removed: " << endl;
    string name;
    cin >> name;
    list<Assignee>::iterator it;
    for (it = assigneeList->begin(); it != assigneeList->end(); ++it){
        if(it->getName() == name){
	    it = assigneeList->erase(it);
	}
    }
    cout << "\n";
}

void Task::displayAssignees(){
    list<Assignee>::iterator it;
    for (it = assigneeList->begin(); it != assigneeList->end(); ++it){
        cout << it-> getName() << " | ";
    }
    cout << "\n";
}

void Task::addReminder(){
    cout << "Enter name of the reminder: " << endl;
    string remindTitle;
    cin.ignore();
    getline(cin,remindTitle);
    remind->setTitle(remindTitle);
    cout << "How many days before the dueDate do you want to be reminded? " << endl;
    int days;
    cin >> days;
    //remind->setTitle(remindTitle);
    remind->setDay(days);
    remind->setStatus(true);
    cout << "Reminder set." << endl;   
}

void Task::editReminder(){
    int choice = 0;
    int days;
    string inputTitle;
    cout << "1: Change Title" << endl;
    cout << "2: Change Time(in days)" << endl;
    cout << "3: Change Status" << endl;
    cin >> choice;
    if(choice == 1){
	cout << "Please enter the new reminder title: ";
	cin >> inputTitle;
	remind->setTitle(inputTitle);
	cout << "Reminder has been updated." << endl;
    }else if(choice == 2){
	cout << "Please enter new number of days in advance that you want to be reminded: ";
	cin >> days;
	remind->setDay(days);
	cout << "Reminder has been updated." << endl;
    }else if(choice == 3){
	cout << "Active or Non-Active(input T or F)" << endl;
	string selection;
	cin >> selection;
	    if(selection == "F" || selection == "f"){
	        remind->setStatus(false);
	    }else if(selection == "T" || selection == "t"){
	    	remind->setStatus(true);
	    }else{
	    cout << "Selection not valid. Please try again. " << endl;
	}
    }
}

void Task::displayTask(){
    cout << getID() << " | " << getTaskTitle() << " | Due ";
    getDueDate().displayDate();
    cout << "Description: " << getDescription() << endl;
    cout << "Classification: " << getClassification() << endl;
    cout << "Priority: " << getPriority() << endl;
    cout << "Task Duration: ";
    getDuration().displayTime();
    cout << "Location: " << getLocation() << endl;
    cout << "Assignees: ";
    displayAssignees();
}

void Task::displayReminder(Date inputCurrDate){
    int day1 = this->getDueDate().getDay();
    int month1 = this->getDueDate().getMonth();
    int year1 = this->getDueDate().getYear();
    int day2 = inputCurrDate.getDay();
    int month2 = inputCurrDate.getMonth();
    int year2 = inputCurrDate.getYear();
    int daysLeft = 0;
    daysLeft = inputCurrDate.difference_of_days(day1, month1, year1, day2, month2, year2);
    //Testing: int daysLeft = this->getDueDate().convertDate() - inputCurrDate.convertDate();
    if((remind->getStatus() == true) && (daysLeft <= remind->getDay())){
        cout << "You have a reminder " << remind->getTitle() << " | " << "Due in : " << daysLeft << " days.";
    }
}
