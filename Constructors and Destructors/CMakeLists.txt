cmake_minimum_required(VERSION 3.17)
project(Constructors_and_Destructors)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(project_sources
        main.cpp
        Cat.cpp
        )

add_executable(Constructors_and_Destructors ${project_sources})