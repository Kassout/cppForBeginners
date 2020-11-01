cmake_minimum_required(VERSION 3.17)
project(Classes)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(project_sources
        main.cpp
        Cat.cpp
        )

add_executable(Classes ${project_sources})