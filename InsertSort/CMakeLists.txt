cmake_minimum_required(VERSION 3.6)
project(InsertSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp op.cpp op.h)
add_executable(InsertSort ${SOURCE_FILES})