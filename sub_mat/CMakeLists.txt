cmake_minimum_required(VERSION 3.6)
project(sub_mat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp get_submat.cpp get_submat.h)
add_executable(sub_mat ${SOURCE_FILES})