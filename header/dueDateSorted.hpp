#ifndef __DUEDATESORTED_HPP__
#define __DUEDATESORTED_HPP__

#include "taskSorterStrategy.hpp"
#include "task.h"
#include <list>
#include "toDoList.h"
#include "date.h"

using namespace std;

class DueDateSorted : public TaskSorterStrategy
{
    protected:
	ToDoList *currList;

    public:
	DueDateSorted(ToDoList *inputList){
	    currList = inputList;
	}

        ~DueDateSorted() {
            /* ... */
        }

        void sortTasks()
        {
            list<Task> temp = currList->getList();
	    list<Task>::iterator it;
	    if(temp.size() == 0){
		cout << "Task List is empty" << endl;
	    } else if (temp.size() == 1){
		currList->displayTasks();
	    } else {
		currList->displaySortedByDueDate();
	    }
        }
};
#endif
