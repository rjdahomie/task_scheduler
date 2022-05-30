#include "../header/time.h"
#include "gtest/gtest.h"

TEST(TimeTest, TimeSetUp_1){
	Time* tester = new Time(5, 7, 6);
	EXPECT_EQ(tester->getDay(), 5);
	EXPECT_EQ(tester->getHour(), 7);
	EXPECT_EQ(tester->getMinute(), 6);
	delete tester;
}

TEST(TimeTest, TimeSetUp_2){
	Time* tester = new Time(5, 7, 6);
	tester->setDay(10);
	tester->setHour(17);
	EXPECT_EQ(tester->getDay(), 10);
	EXPECT_EQ(tester->getHour(), 17);
	delete tester;
}

TEST(TimeTest, TimeSetUp_3){
        Time* tester = new Time();
        tester->setDay(10);
        tester->setHour(17);
        EXPECT_EQ(tester->getDay(), 10);
        EXPECT_EQ(tester->getHour(), 17);
	delete tester;
}

TEST(TimeTest, TimeSetUp_4){
        Time* tester = new Time();
        tester->setDay(13);
        tester->setHour(20);
        EXPECT_EQ(tester->getDay(), 13);
        EXPECT_EQ(tester->getHour(), 20);
        delete tester;
}

TEST(TimeTest, TimeSetUp_5){
        Time* tester = new Time();
        tester->setDay(1);
        tester->setHour(0);
        EXPECT_EQ(tester->getDay(), 1);
        EXPECT_EQ(tester->getHour(), 0);
        delete tester;
}

TEST(TimeTest, TimeSetUp_6){
        Time* tester = new Time(5, 5 ,5);
        tester->setDay(10);
        tester->setHour(17);
        EXPECT_EQ(tester->getDay(), 10);
        EXPECT_EQ(tester->getHour(), 17);
        delete tester;
}

TEST(TimeTest, TimeSetUp_7){
        Time* tester = new Time(12, 12, 12);
        EXPECT_EQ(tester->getDay(), 12);
        EXPECT_EQ(tester->getHour(), 12);
        delete tester;
}

TEST(TimeTest, TimeSetUp_8){
        Time* tester = new Time();
        tester->setDay(230);
        tester->setHour(317);
	tester->setMinute(512);
        EXPECT_EQ(tester->getDay(), 230);
        EXPECT_EQ(tester->getHour(), 317);
	EXPECT_EQ(tester->getMinute(), 512);
        delete tester;
}

TEST(TimeTest, NullConstructor){
        Time* tester = new Time();
        EXPECT_EQ(tester->getDay(), 0);
        EXPECT_EQ(tester->getHour(), 0);
        delete tester;
}

TEST(TimeTest, NullConstructor_2){
        Time* tester = new Time();
        EXPECT_EQ(tester->getMinute(), 0);
        delete tester;
}


