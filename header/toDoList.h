#ifndef TODOLIST_HPP
#define TODOLIST_HPP

#include <list>
#include "task.h"

class toDoList {
    private:
        list<Task> *taskList;
 
    public:
        toDoList();
        toDoList(list<Task> *taskList);

        void addTask();
        void editTask(Task);
        void deleteTask(Task &);
        void displayTasks(Task);
};

#endif // TODOLIST_HPP
