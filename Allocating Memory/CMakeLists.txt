cmake_minimum_required(VERSION 3.17)
project(Allocating_Memory)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Allocating_Memory main.cpp)