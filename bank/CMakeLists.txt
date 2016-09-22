cmake_minimum_required(VERSION 3.6)
project(bank)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bank.cpp Account.cpp frontPage.cpp frontPage.h)
add_executable(bank ${SOURCE_FILES})