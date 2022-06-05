# cmakestudy
CMake Cookbook

## 1 单个源文件编译为可执行文件
### 1.1 编写CMakeLists文件
### 1.2 生成构建器

```shell
cmake -H. -Bbuild
```
-H表示当前目录中搜索CMakeLists.txt文件

-Bbuild告诉CMake在build的目录中生成所有的文件

### 1.3 构建项目
  
```shell
cmake --build ./build/
```