#include "gtest/gtest.h"
#include "../header/assignee.hpp"

TEST(AssigneeTest, SetterTest){
	Assignee* member = new Assignee();
	member->setName("Tostitos");
	EXPECT_EQ(member->getName(), "Tostitos");
}

