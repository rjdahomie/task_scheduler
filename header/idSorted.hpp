#ifndef __IDSORTED_HPP__
#define __IDSORTED_HPP__

#include "taskSorterStrategy.hpp"
#include "task.h"
#include <list>
#include "toDoList.h"

using namespace std;

class IdSorted : public TaskSorterStrategy
{
    protected:
        ToDoList *currList;

    public:
	IdSorted(ToDoList *inputList){
	   currList = inputList;
	}

        ~IdSorted() {
            /* ... */
        }

        void sortTasks() override{
	    list<Task> temp = currList->getList();
	    list<Task>::iterator it;
	    if(temp.size() == 0){
		cout << "Task List is empty" << endl;
	    } else if (temp.size() == 1){
		currList->displayTasks();
	    } else {
		currList->displaySortedByID();
	    }
	}
};

#endif //__IDSORTED_HPP__
