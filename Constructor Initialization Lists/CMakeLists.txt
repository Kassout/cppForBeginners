cmake_minimum_required(VERSION 3.17)
project(Constructor_Initialization_Lists)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(project_sources
        main.cpp
        Person.cpp
        )

add_executable(Constructor_Initialization_Lists ${project_sources})