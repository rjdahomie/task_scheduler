#ifndef __PRIORITYSORTED_HPP__
#define __PRIORITYSORTED_HPP__

#include "taskSorterStrategy.hpp"
#include "task.h"
#include <list>
#include "toDoList.h"

using namespace std;

class PrioritySorted : public TaskSorterStrategy
{
    protected:
	ToDoList *currList;
    public:
	
	PrioritySorted(ToDoList* inputList){
	    currList = inputList;
	}

        ~PrioritySorted() {
            
        }

        void sortTasks(){
            list<Task> temp = currList->getList();
	    list<Task>::iterator it;
	    if (temp.size() == 0) {
		cout << "Task List is empty" << endl;
	    }
	    else if (temp.size() == 1) {
	 	currList->displayTasks();
	    }
	    else {
		currList->displaySortedByPriority();
	    }
	}
};

#endif // __PRIORITYSORTED_HPP__
