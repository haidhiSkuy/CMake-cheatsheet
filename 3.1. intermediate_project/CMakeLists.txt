cmake_minimum_required(VERSION 3.22) 

project(
    IntermediateProject 
    VERSION 1.0.0 
    LANGUAGES C CXX 
)

add_subdirectory(src) # list source first
add_subdirectory(app)