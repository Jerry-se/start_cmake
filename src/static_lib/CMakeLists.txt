PROJECT(static_lib)
SET(SRC_LIST public.h public.cpp)
add_library(static_lib STATIC ${SRC_LIST})