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

        void addTask(Task &newTask);
        void editTask(Task &curTask);
        void deleteTask();
        void displayTasks();
};

#endif // TODOLIST_HPP
