#include "gtest/gtest.h"
#include "../testing/date_test.cpp"
#include "../testing/assignee_test.cpp"
#include "../testing/task_test.cpp"
#include "../testing/time_test.cpp"
#include "../testing/reminder_test.cpp"
//#include "../testing/todolist_test.cpp"

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
