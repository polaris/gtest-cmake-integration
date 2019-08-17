cmake_minimum_required(VERSION 3.14)
project(ray)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# set(COMPILER_WARNING_FLAGS
#         "-Weverything -Wno-c++98-compat -Wno-unused-variable -Wno-unused-value -Wno-c++98-c++11-compat-binary-literal -Wno-missing-prototypes")
# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILER_WARNING_FLAGS}")

add_subdirectory(googletest)

add_executable(test main.cpp)
target_link_libraries(test PRIVATE gtest gmock)
