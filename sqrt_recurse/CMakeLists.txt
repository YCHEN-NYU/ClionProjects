cmake_minimum_required(VERSION 3.6)
project(sqrt_recurse)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(sqrt_recurse ${SOURCE_FILES})