#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"
#include "taskSorterStrategy.hpp"

class taskSorterStrategy;

class toDoList {
    private:
        list<Task> *taskList;

	// STRAT CHANGES:
	TaskSorterStrategy *strategy;
	// END OF START CHANGES

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



	//START OF STRAT CHANGES
	void taskSorter(){
	    strategy->sortTasks(taskList);
	}
	void setTaskSort(TaskSorterStrategy *news) {
	    this->strategy = news;
	}
	//END OF STRAT CHANGES
};

#endif // TODOLIST_HPP
