#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"
#include "taskSorterStrategy.hpp"

class taskSorterStrategy;

class toDoList {
    private:
        list<Task> *taskList;
	int size=0;
	// STRATEGY RELATED:
	TaskSorterStrategy *strategy;
	// END OF STARTEGY RELATED

    public:
	toDoList();
	toDoList(list<Task> *taskList);
        //toDoList(taskSorterStrategy *s=nullptr);
	
	~toDoList(){
	    delete this->strategy;
	}	



        void addTask(Task &newTask);
        void editTask(Task &curTask);
        void deleteTask();
        void displayTasks();

	int getSize(){
	    return size;
	}
	
	list<Task> getList(){
	    return *taskList;
	}
	
	void displaySortedByID(){
	    list<Task>::iterator it;
	    for(int i = 0; i < 20; i++){
	    	for(it = taskList->begin(); it != taskList->end(); ++it){
		    if(it->getID() == i){
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
