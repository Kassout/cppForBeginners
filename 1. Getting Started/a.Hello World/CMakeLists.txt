cmake_minimum_required(VERSION 3.15)
project(Hello_World)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable( Hello_World main.cpp)