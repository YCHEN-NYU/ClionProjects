cmake_minimum_required(VERSION 3.6)
project(SinglyLinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp __sudo__.cpp)
add_executable(SinglyLinkedList ${SOURCE_FILES})