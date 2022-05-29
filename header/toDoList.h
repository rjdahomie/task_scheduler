#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"
#include "taskSorterStrategy.hpp"

class TaskSorterStrategy;

class ToDoList {
    public:
        list<Task> *taskList;
	int size=0;
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
