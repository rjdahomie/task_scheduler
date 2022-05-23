#ifndef __IDSORTED_HPP__
#define __IDSORTED_HPP__

#include "taskSorterStrategy.hpp"

class IdSorted : public TaskSorterStrategy
{
    protected:
        //variables if any

    public:

        ~IdSorted() {
            /* ... */
        }

        void sortTasks(list<Task> *inputTaskList) override{
            list<Task>::iterator it;
	    for (int i = 0; i < inputTaskList.size(); i++){
		for (it = inputTaskList->begin(); it != inputTaskList->end(); ++it){
                    if(i == it->getID()){
			it->displayTask();
                        cout << "\n";
		    }
                }
	    }
        }
};

#endif //__IDSORTED_HPP__
