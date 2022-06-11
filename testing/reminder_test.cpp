#include "../header/reminder.hpp"
#include "gtest/gtest.h"
#include "../header/date.h"
#include "../header/task.h"


TEST(ReminderTest, RemindFunctionality){
	Reminder* tester = new Reminder("Math HW", 5, true);
	EXPECT_EQ(tester->getTitle(), "Math HW");
	EXPECT_EQ(tester->getStatus(), true);
	EXPECT_EQ(tester->getDay(), 5);
	delete tester;
}

TEST(ReminderTest, RemindFunctionality_2){
        Reminder* tester = new Reminder("English HW", 3, true);
        EXPECT_EQ(tester->getTitle(), "English HW");
        EXPECT_EQ(tester->getStatus(), true);
        EXPECT_EQ(tester->getDay(), 3);
	delete tester;
}	

TEST(ReminderTest, RemindFunctionality_3){
        Reminder* tester = new Reminder("CS HW", 1, true);
        EXPECT_EQ(tester->getTitle(), "CS HW");
        EXPECT_EQ(tester->getStatus(), true);
        EXPECT_EQ(tester->getDay(), 1);
	delete tester;
}

TEST(ReminderTest, RemindFunctionality_False){
        Reminder* tester = new Reminder("Math HW", 5, false);
        EXPECT_EQ(tester->getTitle(), "Math HW");
        EXPECT_EQ(tester->getStatus(), false);
        EXPECT_EQ(tester->getDay(), 5);
	delete tester;
}

TEST(ReminderTest, RemindFunctionality_4){
        Reminder* tester = new Reminder("Math HW", 5, true);
        EXPECT_EQ(tester->getTitle(), "Math HW");
        EXPECT_EQ(tester->getStatus(), true);
        EXPECT_EQ(tester->getDay(), 5);
	delete tester;
}

TEST(ReminderTest, Null){
        Reminder* tester = new Reminder();
        EXPECT_EQ(tester->getTitle(), "");
        EXPECT_EQ(tester->getStatus(), false);
        EXPECT_EQ(tester->getDay(), 0);
        delete tester;
}


