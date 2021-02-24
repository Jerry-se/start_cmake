cmake_minimum_required(VERSION 3.5.1)
project(root)
add_executable(test src/main.cpp)
# 添加子目录
add_subdirectory(src/static_lib)
add_subdirectory(src/testlib)