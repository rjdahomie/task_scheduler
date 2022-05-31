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
	Task* taskOne = new Task();
	tester->addTask(taskOne);
	EXPECT_EQ(tester->getSize(), 1);
}
