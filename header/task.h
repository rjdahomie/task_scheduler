#ifndef TASK_HPP
#define TASK_HPP

class task {
    private:
	int taskID;
	string title;
	string description;
	string classification;
	string priority;
	Time duration;			//Undefined variable
	Date dueDate;			//Undefined variable
	string location;
	list<Assignee> assigneeList;	//Undefined variable
	

    public:
	Task(int task, string task title);
	Task(int taskID, string title, string description, string classification, string priority, Time duration, Date dueDate, string location, list<Assignee> assigneeList);
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
