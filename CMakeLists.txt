cmake_minimum_required(VERSION 3.13)
project(gl-ab)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRCS source/*.cpp)
file(GLOB_RECURSE HDRS include/*.h)
file(GLOB_RECURSE TST test/*.hpp)

set(STB_SRC lib/stb/stb_image.h)

include_directories(include)

include_directories(lib/glm/glm)
include_directories(lib/googletest)
include_directories(lib/stb)

add_subdirectory(lib/glfw)

add_library(gl-ab ${SRCS} ${HDRS})
add_executable(gl-ab-test main_test.cpp ${TST} ${SRCS} ${HDRS})

target_link_libraries(gl-ab gtest gtest_main glfw GLEW GL GLU)
link_directories(lib/glfw)