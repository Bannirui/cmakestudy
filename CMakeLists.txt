#设置CMake所需的最低版本 如果使用的CMake版本低于该版本 就会发出致命错误
cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

#声明项目名称和支持的编程语言
project(cmakestudy LANGUAGES CXX)

#指示CMake创建一个新目标 这个可执行文件是通过编译和链接源文件生成的 CMake将为编译器使用默认设置 自动选择生成工具
add_executable(cmake-study main.cpp)