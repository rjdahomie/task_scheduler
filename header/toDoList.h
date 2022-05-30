#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"
#include "taskSorterStrategy.hpp"
#include "date.h"

class TaskSorterStrategy;

class ToDoList {
    public:
        list<Task> *taskList;
	int size=0;
	Date *today = new Date();
	// STRATEGY RELATED:
	TaskSorterStrategy *strategy;
	// END OF STARTEGY RELATED

    public:
	ToDoList();
	ToDoList(list<Task> *taskList);
        //toDoList(taskSorterStrategy *s=nullptr);
	
	~ToDoList(){
	    //iterate
	  //  list<Task>::iterator it;
	  //  for(auto&& t : taskList) {
	//	delete t;
	    //}
	    //for(it = taskList.begine(); it != taskList.end(); i++){
		//Task *temp = taskList->pop_front();
	//	delete it;
	    //}
	    //delete tasklist
	    delete taskList;
	    delete this->strategy;
	}	



        void addTask(Task &newTask);
        void editTask();
        void deleteTask();
        void displayTasks();
	void displayReminders(Date *inputCurrDate);
	void addReminder();
	void editReminder();
	
	void setTodayDate(Date *inputDate){
	    today->setDay(inputDate->getDay());
	    today->setMonth(inputDate->getMonth());
	    today->setYear(inputDate->getYear());
	}
	int getSize(){
	    return size;
	}
	
	list<Task> getList(){
	    return *taskList;
	}
	
	void displaySortedByID(){
	    list<Task>::iterator it;
	    //cout << taskList->size() << endl;
	    for(int i = 0; i < 20; i++){
	    	for(it = taskList->begin(); it != taskList->end(); ++it){
		    //cout << "I: " << i << " " << "ID: " << it->getID() << endl;
		    if(it->getID() == i){
		        it->displayTask();
			cout << "\n";
		    }	
		}
		//cout << "EXITED 2nd" << endl;
	    }
	    //cout << "EXITED 1st" << endl;
	}
	
	void displaySortedByPriority(){
	    list<Task>::iterator it;
	    for(int i = 0; i < 3; i++){
		for(it = taskList->begin(); it != taskList->end(); ++it){
		    if(i==0){
			if(it->getPriority() == "high" || it->getPriority() == "High"){
			    it->displayTask();
			    cout << "\n";
			}
		    }
		    if(i==1){
			if(it->getPriority() == "medium" || it->getPriority() == "Medium"){
                            it->displayTask();
                            cout << "\n";
                        }
                    }
		    if(i==2){
			if(it->getPriority() == "low" || it->getPriority() == "Low"){
                            it->displayTask();
                            cout << "\n";
                        }
                    }
		}
	    }
	}
	
	void displaySortedByDueDate(){
	    list<Task>::iterator it;
	    int day1 = today->getDay();
	    int day2 = 0;
	    int month1 = today->getMonth();
	    int month2 = 0;
	    int year1 = today->getYear();
	    int year2 = 0;
	    int diff = 0;
	    for(int i = 0; i < 365; i++){
	    	for(it = taskList->begin(); it != taskList->end(); ++it){
		    day2 = it->getDueDate().getDay();
		    month2 = it->getDueDate().getMonth();
		    year2 = it->getDueDate().getYear();
		    diff = today->difference_of_days(day1, month1, year1, day2, month2, year2);
		    if(diff == i){
		        it->displayTask();
			cout << "\n";
		    }	
		}
	    }
	}
	
	//START OF STRATEGY RELATED:
	void taskSorter(){
	    this->strategy->sortTasks();
	}

	void setTaskSort(TaskSorterStrategy *newStrategy) {
	    this->strategy = newStrategy;
	}
	//END OF STRATEGY RELATED
};

#endif // TODOLIST_HPP
