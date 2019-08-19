cmake_minimum_required(VERSION 3.14)

project(gtest-cmake-integration)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(test
    Client.cpp
    Client.h
    ClientTest.cpp
    FactorialTest.cpp
    Interface.h
    main.cpp
    MockInterface.h
)

target_include_directories(test PRIVATE
    "googletest/googletest/include"
    "googletest/googlemock/include"
)

target_link_libraries(test PRIVATE
    gtest
    gmock
)

target_compile_options(test PRIVATE
    -pedantic-errors
    -Werror
    -Wall
    -Wextra
    -Wconversion
    -Wsign-conversion
    -Wshadow
)

add_subdirectory(googletest)
