# cmakestudy
CMake Cookbook

## 0 CMake指令
### 0.1 设置CMake所需的最低版本 如果使用的CMake版本低于该版本 就会发出致命错误
`cmake_minimum_required(VERSION 3.21 FATAL_ERROR)`

### 0.2 声明项目名称和支持的编程语言
`project(cmakestudy LANGUAGES CXX)`

### 0.3 引入逻辑变量 赋值OFF
`set(USE_LIBRARY OFF)`

### 0.4 打印
`message(STATUS "Compile sources into a library? ${USE_LIBRARY}")`

### 0.5 引入变量
`list(APPEND _sources Message.h Message.cpp)`

### 0.6 编译库
`add_library()`

### 0.7 创建可执行目标
`add_executable()`

### 0.8 将目标库链接到可执行目标上
`target_link_libraries()`

## 1 单个源文件编译为可执行文件
### 1.1 编写CMakeLists文件
### 1.2 生成构建器
`cmake -H. -Bbuild`
-H表示当前目录中搜索CMakeLists.txt文件

-Bbuild告诉CMake在build的目录中生成所有的文件

### 1.3 构建项目
`cmake --build ./build/`