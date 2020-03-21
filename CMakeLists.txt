cmake_minimum_required(VERSION 2.8)
# this should be the name of the homework
project(Cafemk2)

include_directories(.)


set(CMAKE_CXX_STANDARD 11)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Werror -pthread")
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  # using Visual Studio C++
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
endif()

add_subdirectory(googletest)

set(UNIT_TESTS test/test.cpp)
set(MAIN_FILE src/main.cpp)
add_executable(demo ${MAIN_FILE} src/Main.cpp)

add_executable(demo-test ${UNIT_TESTS} src/Register.cpp)
target_link_libraries(demo-test gtest ${CMAKE_THREAD_LIBS_INIT})
