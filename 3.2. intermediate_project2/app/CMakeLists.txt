add_executable(${EXECUTABLE_NAME} "main.cpp")
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY1_NAME}) 
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY2_NAME})