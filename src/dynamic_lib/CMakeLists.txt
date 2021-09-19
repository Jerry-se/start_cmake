project(dynamic_lib)
add_definitions(-DMYSDK_EXPORTS -DMYSDK_IMPLEMENTATION)
set(SRC_LIST public.h public.cpp)
add_library(${PROJECT_NAME} SHARED ${SRC_LIST})