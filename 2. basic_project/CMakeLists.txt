cmake_minimum_required(VERSION 3.22) 

project(
    BasicProject
    VERSION 1.0.0
    LANGUAGES CXX 
)

add_library(Library STATIC my_lib.cpp)

add_executable(Executable main.cpp) 

target_link_libraries(Executable PUBLIC Library)