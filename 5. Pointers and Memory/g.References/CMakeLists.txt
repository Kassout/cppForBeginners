cmake_minimum_required(VERSION 3.17)
project(References)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(References main.cpp)