cmake_minimum_required(VERSION 3.17)
project(FirstExample)

set(CMAKE_CXX_STANDARD 20)

add_executable(FirstExample main.cpp NewModule.cpp A.hpp)