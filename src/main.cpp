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
    cout << "Menu:  1. Add Task             4. Add Reminder"    << endl;
    cout << "       2. Edit Task            5. Edit Reminder"   << endl;
    cout << "       3. Remove Task          6. Remove Reminder" << endl;
    cout << "	    Enter desired number: "			<< endl;
}


int main(){

    int choice;
    int menuchoice;
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

    cout << "Welcome to Add Task" << endl;
    cout << "To add a Task press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }
    if (choice = 2){

    cout << "Welcome to Edit Task" << endl;
    cout << "To edit a Task press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }
    if (choice = 3){

    cout << "Welcome to Remove Task" << endl;
    cout << "To remove a Task press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }
    if (choice = 4){

    cout << "Welcome to Add Reminder" << endl;
    cout << "To add a Reminder press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }
    if (choice = 5){

    cout << "Welcome to Edit Reminder" << endl;
    cout << "To edit a Reminder press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }
    if (choice = 6){

    cout << "Welcome to Remove Reminder" << endl;
    cout << "To remove a Reminder press 1" << endl;
    cout << "To go back to the menu press 2" << endl;
    cin >> menuchoice;
    }


    return 0;
}
