cmake_minimum_required(VERSION 3.28)
project(grafomatriz)

set(CMAKE_CXX_STANDARD 17)

add_executable(grafomatriz main.cpp
        Node.cpp
        Node.h
        Graph.cpp
        Graph.h
)
