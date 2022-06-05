//
// Created by dingrui on 2022/6/5.
//

#include <iostream>

std::string say_hello()
{
    return std::string("hello, CMake world");
}

int main()
{
    std::cout << say_hello() << std::endl;
    return EXIT_SUCCESS;
}