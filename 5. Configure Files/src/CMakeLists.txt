add_library(${MY_LIBRARY} STATIC "hello.cpp") 
target_include_directories(
    ${MY_LIBRARY} PUBLIC 
    "./"
     "${CMAKE_BINARY_DIR}/configured_files/include"
    )