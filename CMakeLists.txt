cmake_minimum_required(VERSION 3.14)
project(gtest-cmake-integration)

add_subdirectory(googletest)

add_executable(test main.cpp)
target_link_libraries(test PRIVATE gtest gmock)
