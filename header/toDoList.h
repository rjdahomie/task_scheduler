#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"

class toDoList {
    private:
        list<Task> *taskList;
	int size = 0;
 
    public:
        toDoList();
        toDoList(list<Task> *taskList);

        void addTask();
        void editTask(Task);
        void deleteTask(Task &);
        void displayTasks(Task);

	void displaySortedByID();
	void displaySortedByPriority();
	void displaySortedByDueDate();
};

#endif // TODOLIST_HPP
