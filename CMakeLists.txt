CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
    src/date.cpp
    src/time.cpp
    src/assignee.cpp
    src/task.cpp
    src/toDoList.cpp
    src/reminder.cpp
    
    src/main.cpp
    
)

ADD_EXECUTABLE(manualTest
        testing/manualTesting.cpp
        src/date.cpp
        src/time.cpp
        src/assignee.cpp
        src/task.cpp
        src/toDoList.cpp
        src/reminder.cpp
)


ADD_EXECUTABLE(test
	testing/unit_test.cpp
	
)

ADD_LIBRARY(date header/date.h src/date.cpp)

ADD_LIBRARY(assignee header/assignee.hpp src/assignee.cpp)

ADD_LIBRARY(time header/time.h src/time.cpp)

ADD_LIBRARY(reminder header/reminder.hpp src/reminder.cpp)

ADD_LIBRARY(task header/task.h src/task.cpp)

ADD_LIBRARY(todolist header/toDoList.h src/toDoList.cpp)

TARGET_LINK_LIBRARIES(test date assignee time reminder task todolist)

TARGET_LINK_LIBRARIES(manualTest date assignee time reminder task todolist)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

