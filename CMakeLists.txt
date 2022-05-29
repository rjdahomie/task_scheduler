CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(main
    src/date.cpp
    src/time.cpp
    src/assignee.cpp
    src/task.cpp
    src/toDoList.cpp
    src/reminder.cpp

    src/mymain.cpp
)

ADD_LIBRARY(date header/date.h src/date.cpp)

ADD_LIBRARY(assignee header/assignee.hpp src/assignee.cpp)

ADD_LIBRARY(reminder header/reminder.hpp src/reminder.cpp)

TARGET_LINK_LIBRARIES(date assignee reminder)

