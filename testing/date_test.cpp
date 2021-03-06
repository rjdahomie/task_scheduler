#include "../header/date.h"
#include "../src/date.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(DateTest, DisplayDay){
	Date tester(26, 5, 2022);
	int day = tester.getDay();
	EXPECT_EQ(day, 26);
}

TEST(DateTest, DisplayMonth){
	Date tester(26, 5, 2022);
	int month = tester.getMonth();
	EXPECT_EQ(month, 5);
}

TEST(DateTest, DisplayYear){
	Date tester(26, 5, 2022);
	int year = tester.getYear();
	EXPECT_EQ(year, 2022);
}

TEST(DateTest, DisplayDate){
	Date tester(26, 5, 2022);
	EXPECT_EQ(tester.displayDateString(), "Date: 5/26/2022");
}

TEST(DateTest, ConvertDate){
	Date tester(26, 5, 2022);
	int result = tester.convertDate();
	EXPECT_EQ(result, 738211);
}

TEST(DateTest, EdgeCaseDay){
	Date tester(52, 5, 2022);
	EXPECT_EQ(tester.displayDateString(), "Date: 5/52/2022");
}

TEST(DateTest, EdgeCaseMonth){
	Date tester(23, 15, 2022);
	EXPECT_EQ(tester.displayDateString(), "Date: 15/23/2022");
}

