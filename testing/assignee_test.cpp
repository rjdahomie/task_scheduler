#include "gtest/gtest.h"
#include "../header/assignee.hpp"

TEST(AssigneeTest, SetterTest){
	Assignee* member = new Assignee();
	member->setName("Tostitos");
	EXPECT_EQ(member->getName(), "Tostitos");
}

TEST(AssigneeTest, SetterTest_2){
        Assignee* member = new Assignee();
        member->setName("Alex");
        EXPECT_EQ(member->getName(), "Alex");
}

TEST(AssigneeTest, SetterTest_3){
        Assignee* member = new Assignee();
        member->setName("Wonton Boosnuf");
        EXPECT_EQ(member->getName(), "Wonton Boosnuf");
}

TEST(AssigneeTest, SetterTest_4){
        Assignee* member = new Assignee();
        member->setName("I want an apple with two oranges");
        EXPECT_EQ(member->getName(), "I want an apple with two oranges");
}

TEST(AssigneeTest, SetterTest_5){
        Assignee* member = new Assignee();
        member->setName("Migraines hurt");
        EXPECT_EQ(member->getName(), "Migraines hurt");
}

TEST(AssigneeTest, Char){
        Assignee* member = new Assignee();
        member->setName("T");
        EXPECT_EQ(member->getName(), "T");
}

TEST(AssigneeTest, EmptyConstructor){
        Assignee* member = new Assignee();
        EXPECT_EQ(member->getName(), "");
}

TEST(AssigneeTest, Numbers){
        Assignee* member = new Assignee();
        member->setName("45");
        EXPECT_EQ(member->getName(), "45");
}

TEST(AssigneeTest, Special){
        Assignee* member = new Assignee();
        member->setName("#%#!@");
        EXPECT_EQ(member->getName(), "#%#!@");
}
