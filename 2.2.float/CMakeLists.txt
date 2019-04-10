cmake_minimum_required(VERSION 3.0)

project(2.2.float)

#file(GLOB_RECURSE FILES_INCLUDE *.hpp *.h )
#file(GLOB_RECURSE FILES_SOURCES *.cpp *.c)
#include_directories(.)

add_executable(2.2.0.float 2.2.0.float.cpp)
add_executable(2.2.2.intToFloat 2.2.2.intToFloat.cpp)
add_library(2.2.2.2.getFloat SHARED 2.2.2.2.getFloat.cpp)

