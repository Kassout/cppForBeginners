cmake_minimum_required(VERSION 3.17)
project(Inheritance)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(project_sources
        main.cpp
        )

add_executable(Inheritance ${project_sources})