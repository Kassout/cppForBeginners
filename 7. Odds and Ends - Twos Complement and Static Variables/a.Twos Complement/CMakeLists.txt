cmake_minimum_required(VERSION 3.17)
project(Twos_Complement)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(project_sources
        main.cpp
        )

add_executable(Twos_Complement ${project_sources})