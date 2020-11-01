cmake_minimum_required(VERSION 3.15)
project(sizeof)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(sizeof main.cpp)
add_executable(solution sizeof.cpp)