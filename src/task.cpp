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
}

Task::Task(int inputTaskID, string inputTitle, string inputDescription, string inputClassification, string inputPriority, Time *inputDuration, Date *inputDueDate, string inputLocation, list<Assignee> *inputAssigneeList){
    taskID = inputTaskID;
    title = inputTitle;
    description = inputDescription;
    classification = inputClassification;
    priority = inputPriority;
    duration = inputDuration;
    dueDate = inputDueDate;
    location = inputLocation;
    assigneeList = inputAssigneeList;
}

Task::~Task(){
    //Might need to go through the list and delete all one by one
    delete[] assigneeList;
    delete duration;
    delete dueDate;
}

void Task::setID(int inputID){
    taskID = inputID;
}

int Task::getID(){
    return taskID;
}

void Task::setTitle(string inputTitle){
    title = inputTitle;
}

string Task::getTitle(){
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
    
}

void Task::deleteAssignee(){

}

void Task::displayTask(){
    cout << getID() << " | " << getTitle();
}
