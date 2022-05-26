#ifndef __TASKSORTEDSTRATEGY_HPP__
#define __TASKSORTEDSTRATEGY_HPP__

class TaskSorterStrategy
{
public:
    virtual ~TaskSorterStrategy() {
        /* ... */
    }
    virtual void sortTasks() = 0;
};

#endif //__SELECT_HPP__
