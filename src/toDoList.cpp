#include "../header/toDoList.h"
#include "../header/task.h"
#include "../header/date.h"
#include "../header/time.h"

#include <string>

toDoList::toDoList(){
	taskList = new list<Task>;
}

void toDoList::addTask(){
	int inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	Task newTask;

	cout << "\nPlease enter task ID: ";
	cin >> inputID;
	newTask.setID(inputID);

	cout << "\nPlease enter task title: ";
	cin >> inputTitle;
	newTask.setTitle(inputTitle);

	cout << "\nPlease enter task description: ";
	cin >> inputDescription;
	newTask.setDescription(inputDescription);

	cout << "\nPlease enter task priority: ";
	cin >> inputPriority;
	newTask.setPriority(inputPriority);

	cout << "\nPlease enter task due date: ";
        cout << "\nEnter day: ";
        cin >> day;
        cout << "\nEnter month: ";
        cin >> month;
        cout << "\nEnter year: ";
        cin >> year;
        Date tempDate(day, month, year);
        newTask.setDueDate(&tempDate);

	cout << "\nPlease enter task duration: ";
	cout << "\nEnter day: ";
	cin  >> day;
	cout << "\nEnter hour: ";
	cin >> hour;
	cout << "\nEnter minute: ";
	cin >> minute;
	Time tempTime(day, hour, minute);
	newTask.setDuration(&tempTime);

	cout << "\nPlease enter task location: ";
	cin >> inputLocation;
	newTask.setLocation(inputLocation);
	
	taskList->push_back(newTask);
}

void toDoList::editTask(Task curTask){
	int selection, inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	cout << "Please enter a number for edit.\n"
		<< "1.ID 2.title 3.description 4.priority 5.due time 6.location\n";
	cin >> selection;
	
	if (selection == 1) {
		cout << "\nPlease enter task ID: ";
		cin >> inputID;
		curTask.setID(inputID);
	}
	else if (selection == 2) {
		cout << "\nPlease enter task title: ";
		cin >> inputTitle;
		curTask.setTitle(inputTitle);
	}
	else if (selection == 3) {
		cout << "\nPlease enter task description: ";
		cin >> inputDescription;
		curTask.setDescription(inputDescription);
	}
	else if (selection == 4) {
		cout << "\nPlease enter task priority: ";
		cin >> inputPriority;
		curTask.setPriority(inputPriority);
	}
	else if (selection == 5) {
		cout << "\nPlease enter task due date: ";
		cout << "\nEnter day: ";
		cin >> day;
		cout << "\nEnter month: ";
		cin >> month;
		cout << "\nEnter year: ";
		Date tempDate(day, month, year);
		curTask.setDueDate(&tempDate);
	}
	else if (selection == 6) {
		cout << "\nPlease enter task duration: ";
		cout << "\nEnter day: ";
		cin >> day;
		cout << "\nEnter hour: ";
		cin >> hour;
		cout << "\nEnter minute: ";
		cin >> minute;
		Time tempTime(day, hour, minute);
		curTask.setDuration(&tempTime);
	}
	else if (selection == 7) {
		cout << "\nPlease enter task location: ";
		cin >> inputLocation;
		curTask.setLocation(inputLocation);
	}
	else {
		cout << "\nWrong selection number and quit";
	}
}

void toDoList::deleteTask(Task &curTask)
{
	taskList->erase(curTask);
}

void toDoList::displayTasks(Task curTask)
{
	cout << "ID: " << curTask.getID << endl;
	cout << "Title: " << curTask.getTitle() << endl;
        cout << "Description: " << curTask.getDescription() << endl;
        cout << "Classification: " << curTask.getClassification() << endl;
        cout << "Priority: " << curTask.getPriority() << endl;
        cout << "Duration: " << curTask.getDuration() << endl;
        cout << "Due Date: " << curTask.getDueDate() << endl;
        cout << "Location: " <<  curTask.getLocation() << endl;
}
