cmake_minimum_required(VERSION 3.22) 

project( 
    Santuy 
    VERSION 1.0 
    LANGUAGES C CXX 
)

# Options 
set(CMAKE_CXX_STANDARD              17)
set(CMAKE_CXX_STANDARD_REQUIRED     ON) 
set(CMAKE_CXX_EXTENSIONS            OFF)

set(MY_LIBRARY Library) 
set(EXECUTABLE main) 

option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

add_subdirectory(src) 

if (COMPILE_EXECUTABLE)
    add_executable(${EXECUTABLE} main.cpp)
    target_link_libraries(${EXECUTABLE} PUBLIC ${MY_LIBRARY})
else()
    message("not compiling executable")
endif()