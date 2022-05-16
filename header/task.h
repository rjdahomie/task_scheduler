#ifndef TASK_HPP
#define TASK_HPP
#include <string>
#include <list>
#include "assignee.hpp"
#include "time.h"
#include "date.h"

using namespace std;

class Task {
    private:
        string description;
        string classification;
        string priority;
        Time duration;         		
        string location;
        list<Assignee> assigneeList;

    protected:
	int taskID;
	string title;
	Date dueDate;

    public:
        Task();
	Task(int inputTaskID, int inputTitle);
        Task(int inputTaskID, string inputTitle, string inputDescription, string inputClassification, string inputPriority, Time inputDuration, Date inputDueDate, string inputLocation, list<Assignee> inputAssigneeList);
        void setID(int);
        int getID();
        void setTitle(string);
        string getTitle();
        void setDescription(string);
        string getDescription();
        void setClassification(string);
        string getClassification();
        void setPriority(string);
        string getPriority();
        void setDuration(Time);
        Time getDuration();
        void setDueDate(Date);
        Date getDueDate();
        void setLocation(string);
        string getLocation();
        void addAssignee();
        void deleteAssignee();
        void displayTask();
};

#endif //TASK_HPP

