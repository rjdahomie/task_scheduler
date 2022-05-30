#include "../header/task.h"
#include "gtest/gtest.h"
#include "../header/date.h"
#include "../header/time.h"
#include "../header/assignee.hpp"
#include "../header/toDoList.h"

using namespace std;

TEST(TaskTest, BasicFunctionality){
	Task* tester = new Task(5000, "Math HW");
	Time* date = new Time(5, 7, 13);
	Date* newDate = new Date(13, 2, 2006);
	tester->setDueDate(newDate);
	tester->setDuration(date);
	EXPECT_EQ(tester->getDuration().getDay(), 5);
	EXPECT_EQ(tester->getDueDate().convertDate(), 722233);
	delete date;
	delete newDate;
	delete tester;
}

TEST(TaskTest, BasicFunctionality_2){
	Task* tester = new Task();
	tester->setTitle("Wow look!");
	tester->setID(2540);
	Time* date = new Time(1, 1, 1);
	Date* newDate = new Date(5, 5, 5);
	EXPECT_EQ(tester->getID() , 2540);
	EXPECT_EQ(tester->getTitle(), "Wow look!");
	tester->setDueDate(newDate);
	tester->setDuration(date);
	EXPECT_EQ(tester->getDuration().getMinute(), 1);
	EXPECT_EQ(tester->getDueDate().convertDate(), 1955);
	delete date;
	delete newDate;
	delete tester;
}

TEST(TaskTest, BasicFunctionality_3){
        Task* tester = new Task();
        tester->setTitle("CS111");
        tester->setID(3200);
        Time* date = new Time(5, 3, 22);
        Date* newDate = new Date(5, 5, 2005);
        EXPECT_EQ(tester->getID() , 3200);
        EXPECT_EQ(tester->getTitle(), "CS111");
        tester->setDueDate(newDate);
        tester->setDuration(date);
        EXPECT_EQ(tester->getDuration().getMinute(), 22);
        EXPECT_EQ(tester->getDueDate().convertDate(), 721955);
        delete date;
        delete newDate;
        delete tester;
}

TEST(TaskTest, NullTestID){
	Task* tester = new Task();
	EXPECT_EQ(tester->getID(), 0);
	delete tester;
}

TEST(TaskTest, NullTestTitle){
        Task* tester = new Task();
        EXPECT_EQ(tester->getTitle(), "");
        delete tester;
}

TEST(TaskTest, NullTestDescription){
        Task* tester = new Task();
        EXPECT_EQ(tester->getDescription(), "");
        delete tester;
}

TEST(TaskTest, NullTestPriority){
        Task* tester = new Task();
        EXPECT_EQ(tester->getPriority(), "");
        delete tester;
}

TEST(TaskTest, NullTestLocation){
        Task* tester = new Task();
        EXPECT_EQ(tester->getLocation(), "");
        delete tester;
}
