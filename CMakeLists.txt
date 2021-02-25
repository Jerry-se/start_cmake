cmake_minimum_required(VERSION 3.5.1)

# build MSVC application with a static runtime
# enable them by setting the following variables prior to the project() command.
# if(MSVC)
#   set(CMAKE_USER_MAKE_RULES_OVERRIDE
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/c_flag_overrides.cmake)
#   set(CMAKE_USER_MAKE_RULES_OVERRIDE_CXX
#     ${CMAKE_CURRENT_SOURCE_DIR}/cmake/cxx_flag_overrides.cmake)
# endif()

project(root)

if(MSVC)
  include(cmake/msvc_static_runtime.cmake)
  add_definitions(-D_WIN32_WINNT=0x600 -D_SCL_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_WARNINGS -D_WINSOCK_DEPRECATED_NO_WARNINGS)
  set(_TEST_C_CXX_FLAGS "${_TEST_C_CXX_FLAGS} /wd4200 /wd4291 /wd4244")
endif()

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${_TEST_C_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_TEST_C_CXX_FLAGS}")

add_executable(test src/main.cpp)
# 添加子目录
add_subdirectory(src/dynamic_lib)
add_subdirectory(src/static_lib)
add_subdirectory(src/testlib)