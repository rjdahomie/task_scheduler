#include "../header/toDoList.h"
#include "../header/task.h"

ToDoList::ToDoList(){
	taskList = new list<Task>;
}
/*
ToDoList::ToDoList(TaskSorterStrategy s) {
        taskList = new list<Task>;
        strategy = s;
}
*/
void ToDoList::addTask(Task &newTask){
	int inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	cout << "\nPlease enter task ID: ";
	cin >> inputID;
	newTask.setID(inputID);

	cout << "\nPlease enter task title: ";
	cin >> inputTitle;
	newTask.setTitle(inputTitle);

	cout << "\nPlease enter task description: ";
	cin >> inputDescription;
	newTask.setDescription(inputDescription);
	
	cout << "\nPlease enter task classification: ";
	cin >> inputClassification;
	newTask.setClassification(inputClassification);

	cout << "\nPlease enter task priority: ";
	cin >> inputPriority;
	newTask.setPriority(inputPriority);

	cout << "\nPlease enter task Due Date: " << endl;
	cout << "Enter day: ";
	cin >> day;
	cout << endl << "Enter month: ";
	cin >> month;
	cout << endl << "Enter year: ";
	cin >> year;
	Date tempDate(day, month, year);
	newTask.setDueDate(&tempDate);

	cout << "\nPlease enter task duration: " << endl;
	cout << "How many days will this task take: ";
	cin >> day;
	cout << endl << "How many hours will this task take you: ";
	cin >> hour;
	cout << endl << "How many minutes will this task take you: ";
	cin >> minute;
	Time tempTime(day, hour, minute);
	newTask.setDuration(&tempTime);
	
	cout << "\nPlease enter task location: ";
	cin >> inputLocation;
	newTask.setLocation(inputLocation);

	cout << "\nHow many people are assigned to this task: ";
	int assigneeNum;
	cin >> assigneeNum;
	cout << endl;
	for (int i = 0; i < assigneeNum; i++){
	    newTask.addAssignee();
	}
	size++;
	taskList->push_back(newTask);
}

void ToDoList::editTask(Task &curTask){
	int selection, inputID, year, month, day, hour, minute;
	string inputTitle, inputDescription, inputClassification, inputPriority, inputLocation;

	cout << "Please enter a number for edit.\n"
		<< "1.ID 2.title 3.description 4.classification 5.priority 6.due time 7.duration 8.location 9.assignees\n";
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
	else if (selection ==4){
		cout << "\nPlease enter task classification: ";
		cin >> inputClassification;
		curTask.setClassification(inputClassification);
	}
	else if (selection == 5) {
		cout << "\nPlease enter task priority: ";
		cin >> inputPriority;
		curTask.setPriority(inputPriority);
	}
	else if (selection == 6) {
		cout << "\nPlease enter task Due time: ";
		cout << "\nEnter day: ";
		cin >> day;
		cout << "\nEnter month: ";
		cin >> month;
		cout << "\nEnter year: ";
		Date tempDate(day, month, year);
		curTask.setDueDate(&tempDate);
	}
	else if (selection == 7) {
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
	else if (selection == 8) {
		cout << "\nPlease enter task location: ";
		cin >> inputLocation;
		curTask.setLocation(inputLocation);
	}
	else if (selection == 9) {
		int tempSelect = 0;
		cout << "\nEnter 1 for adding assignee, Enter 2 for removing assignee: ";
		cin >> tempSelect;
		if (tempSelect == 1){
			curTask.addAssignee();
		} else if (tempSelect == 2){
			curTask.deleteAssignee();
		} else {
			cout << "\nWrong selection number and quit";
		}
	}
	else {
		cout << "\nWrong selection number and quit";
	}
}

void ToDoList::deleteTask()
{
	cout << "Enter the ID of the task you want removed: " << endl;
    	int tempID;
    	cin >> tempID;
    	list<Task>::iterator it;
    	for (it = taskList->begin(); it != taskList->end(); ++it){
        	if(it->getID() == tempID){
	    		it = taskList->erase(it);
			size--;
		}
    	}
    cout << "\n";
}

void ToDoList::displayTasks()
{
    	cout << "Your Tasks: " << endl;
    	list<Task>::iterator it;
    	for (it = taskList->begin(); it != taskList->end(); ++it){
        	it->displayTask();
		cout << "\n";
    	}
    cout << "\n";
}

void ToDoList::displayReminders(Date inputCurrDate)
{
    	cout << "Your Reminders: " << endl;
    	list<Task>::iterator it;
    	for (it = taskList->begin(); it != taskList->end(); ++it){
        	it->displayReminders(inputCurrDate);
		cout << "\n";
    	}
    cout << "\n";
}
