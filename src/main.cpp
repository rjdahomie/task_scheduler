#include "../header/assignee.hpp"
#include "../header/date.h"
#include "../header/reminder.hpp"
#include "../header/task.h"
#include "../header/time.h"
#include "../header/toDoList.h"
#include <iostream>
#include <string>

using namespace std;
void displayMenu(){
    cout << "Menu:  1. Add Task             4. Add Reminder"          << endl;
    cout << "       2. Edit Task            5. Edit Reminder"         << endl;
    cout << "       3. Remove Task          6. View Tasks"            << endl;
    cout << "       7. Change today's date"                           << endl;
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
    else if (menuChoice == 6){
	cout << "Diplay methods: " << endl;
	cout << "1. Latest Addition" << endl;
	cout << "2. Sorted by ID" << endl;
	cout << "3. Sorted by priority" << endl;
	cout << "4. Sorted by dueDate" << endl;
	cout << "Enter method number: ";
	cin >> menuChoice;
	if(menuChoice == 1){
	    inputToDoList->displayTasks();
	} else if (menuChoice == 2){

	} else if (menuChoice == 3){

	} else if (menuChoice == 4){

	} else {
	    cout << "Method not found." << endl;
	}
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
    Date currDate(temp1, temp2, temp3);
    //----------------------------------------------
    
    //TodoList initilization
    ToDoList *userTaskList = new ToDoList();
    //----------------------------------------------
    
    while(1==1){
        mainMenu(userTaskList);
    }








    return 0;
}
