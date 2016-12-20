cmake_minimum_required(VERSION 3.6)
project(TwoSum_001)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp two_sum.cpp two_sum.h)
add_executable(TwoSum_001 ${SOURCE_FILES})