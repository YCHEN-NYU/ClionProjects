cmake_minimum_required(VERSION 3.6)
project(tictactoe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ttt.cpp ttt.h)
add_executable(tictactoe ${SOURCE_FILES})