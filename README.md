# gtest-cmake-integration

Example project to show how to integrate Google Test using CMake and Git Submodules

#### Steps to build and run

Fetch Google Test as a submodule:

    git submodule update --init

Build everything:

    mkdir build
    cd build
    cmake ..
    make

Run the tests:

    ./test