#include "../header/assignee.hpp"
#include "../header/date.h"
//#include "../header/reminder.hpp"
#include "../header/task.h"
#include "../header/time.h"
#include "../header/toDoList.h"
#include <iostream>
#include <string>
#include "../header/taskSorterStrategy.hpp"

using namespace std;
void displayMenu(){
    cout << "Menu:  1. Add Task             4. Add Reminder"    << endl;
    cout << "       2. Edit Task            5. Edit Reminder"   << endl;
    cout << "       3. Remove Task          6. Remove Reminder" << endl;
    cout << "	    Enter desired number: "			<< endl;
}


int main(){
    toDoList *tempList = new toDoList();
    Task newTask;
    tempList->addTask(newTask);
    tempList->displayTasks();
    cout << "_____________________________________________________" << endl;
    //Everything works up to this point

    tempList->setTaskSort(new IdSorted(tempList)); //??????












    int choice;
    cout << "What is the date today? " << endl;
    int temp1, temp2, temp3;
    cout << "Day: ";
    cin >> temp1;
    cout << endl; 
    cout << "Month: ";
    cin >> temp2;
    cout << endl;
    cout << "Year: ";
    cin >> temp3;
    cout << endl;
    Date currDate(temp1, temp2, temp3);
    displayMenu();

    cin >> choice;

    if (choice = 1){ 
    }
    if (choice = 2){
    }
    if (choice = 3){
    }
    if (choice = 4){
    }
    if (choice = 5){
    }
    if (choice = 6){
    }

    return 0;
}
