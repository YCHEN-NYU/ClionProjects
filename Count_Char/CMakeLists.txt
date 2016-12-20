cmake_minimum_required(VERSION 3.6)
project(Count_Char)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp count_all.h count_all.cpp)
add_executable(Count_Char ${SOURCE_FILES})