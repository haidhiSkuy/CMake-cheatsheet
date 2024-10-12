#include "hello.h"
#include "config.hpp" 
#include <iostream>

int main()
{ 
    SayHello();
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;
}