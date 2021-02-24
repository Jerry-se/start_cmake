project(static_lib)
set(SRC_LIST public.h public.cpp)
add_library(${PROJECT_NAME} STATIC ${SRC_LIST})