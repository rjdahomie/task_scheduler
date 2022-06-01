#include "../header/assignee.hpp"
#include "../header/date.h"
#include "../header/reminder.hpp"
#include "../header/task.h"
#include "../header/time.h"
#include "../header/toDoList.h"
#include "../header/taskSorterStrategy.hpp"
#include "../header/idSorted.hpp"
#include "../header/prioritySorted.hpp"
#include "../header/dueDateSorted.hpp"
#include <iostream>
#include <string>
#include <ctime>

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
	    inputToDoList->setTaskSort(new PrioritySorted(inputToDoList));
            inputToDoList->taskSorter();
	} else if (menuChoice == 4){
	    inputToDoList->setTodayDate(currDate);
	    inputToDoList->setTaskSort(new DueDateSorted(inputToDoList));
	    inputToDoList->taskSorter();
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
    else {
	cout << "Not a valid input. Please try again." << endl;
    }
}

int main(){
    //Time library initialization:
    time_t ttime = time(0);
    tm *local_time = localtime(&ttime);

    //Current Date initialization:
    cout << "Today is " << endl;
    int monInput = 1 + local_time->tm_mon;
    int dayInput = local_time->tm_mday;
    int yrInput = 1900 + local_time->tm_year;

    cout << "Month: " << monInput << endl;
    cout << "Day: " << dayInput << endl;
    cout << "Year: " << yrInput << endl << endl;
    currDate->setMonth(monInput);
    currDate->setDay(dayInput);
    currDate->setYear(yrInput);
    //----------------------------------------------
    
    //TodoList initilization
    ToDoList *userTaskList = new ToDoList();
    //----------------------------------------------
    
    while(1==1){
        mainMenu(userTaskList);
    }

    return 0;
}
