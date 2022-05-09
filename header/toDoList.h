#ifndef TODOLIST_HPP
#define TODOLIST_HPP

class toDoList {
    private:
        list<Task> taskList; //undefine variable!!!!!!

    public:
        toDoList();
        toDoList(list<Task> taskList); //undefine variable!!!!!!

        void addTask();
        void editTask();
        void deleteTask();
        void displayTasks();
};

#endif // TODOLIST_HPP
