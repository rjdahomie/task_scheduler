#include "toDoList.h"
#include "task.h"

toDoList::toDoList(){
	list<Task> task = NULL;
}

void toDoList::addTask(){
	int inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	list<Task> newTask = new Task();

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

	cout << "\nPlease enter task Due time (EX: YEAR MONTH DAY HOUR MINUTE) : ";
	cin >> year >> month >> day >> hour >> minute;
	newTask.setDueDate(year, month, day, hour, minute);

	cout << "\nPlease enter task location: ";
	cin >> inputLocation;
	newTask.setLocation(inputLocation);
}

void toDoList::editTask(){
	int selection, inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	cout << "Please enter a number for edit.\n"
		<< "1.ID 2.title 3.description 4.priority 5.due time 6.location\n";
	cin >> selection;
	
	if (selection == 1) {
		cout << "\nPlease enter task ID: ";
		cin >> inputID;
		task.setID(inputID);
	}
	else if (selection == 2) {
		cout << "\nPlease enter task title: ";
		cin >> inputTitle;
		task.setTitle(inputTitle);
	}
	else if (selection == 3) {
		cout << "\nPlease enter task description: ";
		cin >> inputDescription;
		task.setDescription(inputDescription);
	}
	else if (selection == 4) {
		cout << "\nPlease enter task priority: ";
		cin >> inputPriority;
		task.setPriority(inputPriority);
	}
	else if (selection == 5) {
		cout << "\nPlease enter task Due time (EX: YEAR MONTH DAY HOUR MINUTE) : ";
		cin >> year >> month >> day >> hour >> minute;
		task.setDueDate(year, month, day, hour, minute);
	}
	else if (selection == 6) {
		cout << "\nPlease enter task location: ";
		cin >> inputLocation;
		task.setLocation(inputLocation);
	}
	else {
		cout << "\nWrong selection number and quit";
	}
}

void toDoList::deleteTask()
{
	task.deleteTask(); //undefine function!!!
}

void toDoList::displayTasks()
{
	task.displayTasks(); //undefine function!!!
}
