cmake_minimum_required(VERSION 3.17)
project(Pointer_Arithmetic)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(Pointer_Arithmetic main.cpp)