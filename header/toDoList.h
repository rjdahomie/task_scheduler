#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"
#include "taskSorterStrategy.hpp"
#include "date.h"

class TaskSorterStrategy;

class ToDoList {
    private:
        list<Task> *taskList;
	int size=0;
	Date *today = new Date();
	TaskSorterStrategy *strategy;

    public:
	ToDoList();
	ToDoList(list<Task> *taskList);
	~ToDoList();
        void addTask(Task &newTask);
        void editTask();
        void deleteTask();
        void displayTasks();
	void displayReminders(Date *inputCurrDate);
	void addReminder();
	void editReminder();
	void setTodayDate(Date *inputDate);
	int getSize();
	list<Task> getList();
	void displaySortedByID();
	void displaySortedByPriority();
	void displaySortedByDueDate();
	//START OF STRATEGY RELATED:
	void taskSorter();
	void setTaskSort(TaskSorterStrategy *newStrategy);
};

#endif // TODOLIST_HPP
