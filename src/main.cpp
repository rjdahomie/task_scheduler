#include "../header/assignee.hpp"
#include "../header/date.h"
#include "../header/reminder.hpp"
#include "../header/task.h"
#include "../header/time.h"
#include "../header/toDoList.h"
#include "../header/taskSorterStrategy.hpp"
#include "../header/idSorted.hpp"
#include <iostream>
#include <string>

using namespace std;

//GLobal Date
Date *currDate = new Date();

void displayMenu(){
    cout << "Today's ";
    currDate->displayDate();
    cout << "Menu:  1. Add Task             4. Add Reminder"          << endl;
    cout << "       2. Edit Task            5. Edit Reminder"         << endl;
    cout << "       3. Remove Task          6. Display"               << endl;
    cout << "       7. Change today's date  8. Quit"                  << endl;
    cout << "Enter desired number: "			              << endl;
}

void mainMenu(ToDoList* inputToDoList){
    int menuChoice;
    displayMenu();
    cin >> menuChoice;
    if (menuChoice == 1) {
        Task newTask;
	inputToDoList->addTask(newTask);
    }
    else if (menuChoice == 2){
	inputToDoList->editTask();
    }
    else if(menuChoice == 3){
	inputToDoList->deleteTask();
    }
    else if(menuChoice == 4){
	inputToDoList->addReminder();
    }
    else if(menuChoice == 5){
	inputToDoList->editReminder();
    }
    else if (menuChoice == 6){
	cout << "Diplay methods: " << endl;
	cout << "1. Task by earliest Addition" << endl;
	cout << "2. Task by sorted ID" << endl;
	cout << "3. Task by sorted priority" << endl;
	cout << "4. Task by sorted dueDate" << endl;
	cout << "5. Reminders" << endl;
	cout << "Enter method number: ";
	cin >> menuChoice;
	cout << endl;
	if(menuChoice == 1){
	    inputToDoList->displayTasks();
	} else if (menuChoice == 2){
	    inputToDoList->setTaskSort(new IdSorted(inputToDoList));
	    inputToDoList->taskSorter();
	} else if (menuChoice == 3){

	} else if (menuChoice == 4){

	} else if (menuChoice == 5){
	    inputToDoList->displayReminders(currDate);
	} else {
	    cout << "Method not found." << endl;
	}
    }
    else if (menuChoice == 7){
	int day;
	int month;
	int year;
	cout << "Enter new date: " << endl;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	currDate->setDay(day);
	currDate->setMonth(month);
	currDate->setYear(year);
	currDate->displayDate();
	cout << endl;
    }
    else if (menuChoice == 8){
	abort();
    }
}

int main(){
    //Current Date initialization:
    cout << "What is the date today? " << endl;
    int temp1, temp2, temp3;
    cout << "Day: ";
    cin >> temp1;
    cout << "Month: ";
    cin >> temp2;
    cout << "Year: ";
    cin >> temp3;
    cout << endl;
    currDate->setDay(temp1);
    currDate->setMonth(temp2);
    currDate->setYear(temp3);
    //----------------------------------------------
    
    //TodoList initilization
    ToDoList *userTaskList = new ToDoList();
    //----------------------------------------------
    
    while(1==1){
        mainMenu(userTaskList);
    }








    return 0;
}
