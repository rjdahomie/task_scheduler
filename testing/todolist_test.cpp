#include "../header/toDoList.h"
#include "../header/task.h"
#include "../header/time.h"
#include "../header/date.h"
#include "../header/assignee.hpp"
#include "../header/reminder.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(ToDoListTest, GetSize){
	ToDoList *tester = new ToDoList();
	Task taskOne;
	tester->addTask(taskOne);
	EXPECT_EQ(tester->getSize(), 1);
	delete tester;
}

TEST(ToDoListTest, AddFunctionality){
	ToDoList *tester = new ToDoList();
	Task taskOne;
	tester->addTask(taskOne);
	int returnedID = taskOne.getID();
	EXPECT_EQ(taskOne.getID(), returnedID);
	delete tester;
}

TEST(ToDoListTest, EditFunctionality_Title){
        ToDoList *tester = new ToDoList();
        Task taskOne;
        tester->addTask(taskOne);
	string returnedTitle = taskOne.getTaskTitle();
	tester->editTask();
	ASSERT_NE(returnedTitle, taskOne.getTaskTitle());
        delete tester;
}

TEST(ToDoListTest, DeleteFunctionality){
        ToDoList *tester = new ToDoList();
        Task taskOne;
        tester->addTask(taskOne);
        tester->deleteTask();
        EXPECT_EQ(tester->getSize(), 0);
        delete tester;
}

TEST(ToDoListTest, ReminderFunctionality){
        ToDoList *tester = new ToDoList();
        Task taskOne;
        tester->addTask(taskOne);
        tester->addReminder();
        EXPECT_EQ(tester->getSize(), 1);
        delete tester;
}


