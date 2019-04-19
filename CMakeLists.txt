cmake_minimum_required(VERSION 3.13)
project(rrts)

set(CMAKE_CXX_STANDARD 17)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/project/resources/
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/.)

# temp - will change to sets when finished development
file(GLOB_RECURSE SRCS source/*.cpp)
file(GLOB_RECURSE HDRS include/*.h)
file(GLOB_RECURSE TST test/*.hpp)

set(STB_SRC lib/stb/stb_image.h)

include_directories(include)

include_directories(lib/glm/glm)
include_directories(lib/stb)


