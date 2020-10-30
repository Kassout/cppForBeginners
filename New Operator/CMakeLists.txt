cmake_minimum_required(VERSION 3.17)
project(New_Operator)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(New_Operator main.cpp)