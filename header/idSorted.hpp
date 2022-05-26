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
        //variables if any
        toDoList *currList;

    public:
	IdSorted(toDoList *inputList){
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
	    } else if (temp.size() > 1){
		currList->displaySortedByID();
	    }
	


	}


/*
            list<Task>::iterator it;
	    for (int i = 0; i < currList->getSize(); i++){
		for (it = currList->getList().begin(); it != currList->getList().end(); ++it){
                    if(i == it->getID()){
			it->displayTask();
                        cout << "\n";
		    }
                }
	    }
*/
	
};

#endif //__IDSORTED_HPP__
