cmake_minimum_required(VERSION 3.6)
project(hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bank.cpp bank.h)
add_executable(hello ${SOURCE_FILES})