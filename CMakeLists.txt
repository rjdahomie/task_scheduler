CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
    src/date.cpp
    src/time.cpp
    src/assignee.cpp
    src/task.cpp
    src/toDoList.cpp



    src/mymain.cpp
)

ADD_EXECUTABLE(test
	testing/unit_test.cpp
)

ADD_LIBRARY(date header/date.h src/date.cpp)

ADD_LIBRARY(assignee header/assignee.hpp src/assignee.cpp)

TARGET_LINK_LIBRARIES(test date assignee)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

