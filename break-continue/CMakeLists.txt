cmake_minimum_required(VERSION 3.15)
project(break_continue)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(break_continue main.cpp)