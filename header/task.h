fndef TASK_HPP
#define TASK_HPP
#include <string>
//#include "assignee.hpp"
//#include "time.h"
//#include "date.h"

using namespace std;

class task {
    private:
        int taskID;
        string title;
        string description;
        string classification;
        string priority;
        Time duration;         		//Undefned
        Date dueDate;          		//Undesined
        string location;
        list<Assignee> assigneeList;	//Undefined


    public:
        Task();
        Task(int inputTask, string inputTitle);
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

