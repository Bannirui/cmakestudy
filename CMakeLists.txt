#设置CMake所需的最低版本 如果使用的CMake版本低于该版本 就会发出致命错误
cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

#声明项目名称和支持的编程语言
project(cmakestudy LANGUAGES CXX)

#引入逻辑变量 赋值OFF
set(USE_LIBRARY OFF)
# 打印
message(STATUS "Compile sources into a library? ${USE_LIBRARY}")
# 引入变量
list(APPEND _sources Message.h Message.cpp)

if (USE_LIBRARY)
    add_library(message ${_sources})
    add_executable(main main.cpp)
    target_link_libraries(main message)
else ()
    add_executable(main main.cpp ${_sources})
endif ()