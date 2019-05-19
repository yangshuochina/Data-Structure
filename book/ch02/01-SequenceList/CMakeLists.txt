cmake_minimum_required(VERSION 3.5)
project(SequenceList C)

#set(CMAKE_C_STANDARD 99)
set(CMAKE_C_COMPILER "d:/MinGW/bin/gcc.exe")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(SOURCE_FILES SequenceList-main.c SequenceList.c SequenceList.h)
add_executable(SequenceList ${SOURCE_FILES})