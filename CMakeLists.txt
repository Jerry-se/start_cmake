cmake_minimum_required(VERSION 3.5.1)

# build MSVC application with a static runtime
set(CMAKE_USER_MAKE_RULES_OVERRIDE
  ${CMAKE_CURRENT_SOURCE_DIR}/c_flag_overrides.cmake)
set(CMAKE_USER_MAKE_RULES_OVERRIDE_CXX
  ${CMAKE_CURRENT_SOURCE_DIR}/cxx_flag_overrides.cmake)

project(root)
add_executable(test src/main.cpp)
# 添加子目录
add_subdirectory(src/dynamic_lib)
add_subdirectory(src/static_lib)
add_subdirectory(src/testlib)