#ifndef __TASKSORTEDSTRATEGY_HPP__
#define __TASKSORTEDSTRATEGY_HPP__

class TaskSorterStrategy
{
public:
    virtual ~TaskSorterStrategy() {
        /* ... */
    }
    virtual void sortTasks(list<Task> *inputTaskList) = 0;
    //Might need to add taskList as a parameter
    //might need to add a const at the end
    //might need to pass in by reference
};

#endif //__SELECT_HPP__
