#include "../header/date.h"
#include "../header/time.h"
#include "../header/task.h"
#include "../header/toDoList.h"
#include "../header/reminder.hpp"
#include "../header/assignee.hpp"
#include "../header/dueDateSorted.hpp"
#include "../header/prioritySorted.hpp"
#include "../header/taskSorterStrategy.hpp"
#include "../header/idSorted.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>



using namespace std;

Date *currDate = new Date();

int main(){
        time_t ttime = time(0);
        tm *local_time = localtime(&ttime);

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

      cout << "TEST CASE 1: " << endl;

        ToDoList *tester = new ToDoList();
        tester->setTodayDate(currDate);
        Task taskOne;
        Task taskTwo;
        Task taskThree;

        taskOne.setID(1);
        taskOne.setTitle("CS111 HW");
        Date *hwDate = new Date(25, 6, 2022);
        taskOne.setDueDate(hwDate);

taskOne.setPriority("low");

        taskTwo.setID(2);
        taskTwo.setTitle("CS100 Lab");
        Date *labDate = new Date(24, 6, 2022);
        taskTwo.setDueDate(labDate);
        taskTwo.setPriority("medium");

        taskThree.setID(3);
        taskThree.setTitle("ETST001 Essay");
        Date *essayDate = new Date(23, 6, 2022);
        taskThree.setDueDate(essayDate);
        taskThree.setPriority("high");

        tester->taskList->push_back(taskOne);
        tester->taskList->push_back(taskTwo);
        tester->taskList->push_back(taskThree);


        cout << "Display All Tasks" << endl;
        cout << "---------------------------------" << endl;

        tester->displayTasks();

        cout << "Sort by ID" << endl;
        cout << "-------------------------------" << endl;


        tester->setTaskSort(new IdSorted(tester));
        tester->taskSorter();


        cout << "Sort by Due Date" << endl;
        cout << "---------------------------------" << endl;

        tester->setTaskSort(new DueDateSorted(tester));
        tester->taskSorter();

        cout << "Sort by Priority" << endl;
        cout << "-----------------------------------" << endl;

        tester->setTaskSort(new PrioritySorted(tester));
        tester->taskSorter();


        cout << "TEST CASE 2: " << endl;
        ToDoList *testerTwo = new ToDoList();
        testerTwo->setTodayDate(currDate);

Task taskFour;
        Task taskFive;
        Task taskSix;

        taskFour.setID(2);
        taskFour.setTitle("CS141 Project");
        Date *csDate = new Date(8, 7, 2022);
        taskFour.setDueDate(csDate);
        taskFour.setPriority("high");

        taskFive.setID(2);
        taskFive.setTitle("EE120A Lab");
        Date *eeDate = new Date(5, 7, 2022);
        taskFive.setDueDate(eeDate);
        taskFive.setPriority("medium");

        taskSix.setID(2);
        taskSix.setTitle("English Paper");
        Date *paperDate = new Date(4, 7, 2022);
        taskSix.setDueDate(paperDate);
        taskSix.setPriority("medium");

        testerTwo->taskList->push_back(taskFour);
        testerTwo->taskList->push_back(taskFive);
        testerTwo->taskList->push_back(taskSix);

        cout << "Display All Tasks" << endl;
        cout << "---------------------------------" << endl;

        testerTwo->displayTasks();

        cout << "Sort by ID" << endl;
        cout << "-------------------------------" << endl;


        testerTwo->setTaskSort(new IdSorted(testerTwo));
        testerTwo->taskSorter();

        cout << "Sort by Due Date" << endl;
        cout << "---------------------------------" << endl;

        testerTwo->setTaskSort(new DueDateSorted(testerTwo));
        testerTwo->taskSorter();

        cout << "Sort by Priority" << endl;
        cout << "-----------------------------------" << endl;


 testerTwo->setTaskSort(new PrioritySorted(testerTwo));
        testerTwo->taskSorter();

}
