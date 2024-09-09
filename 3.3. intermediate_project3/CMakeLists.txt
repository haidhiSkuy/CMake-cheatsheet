cmake_minimum_required(VERSION 3.22) 

project(
    IntermediateProject 
    VERSION 1.0.0 
    LANGUAGES C CXX 
)

SET(EXECUTABLE_NAME Executable)
SET(LIBRARY1_NAME Library1)
SET(LIBRARY2_NAME Library2)

add_subdirectory(src)
add_subdirectory(app)