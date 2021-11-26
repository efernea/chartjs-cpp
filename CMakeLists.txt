cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 11)

project(chartjs-cpp)

set(CPACK_PACKAGE_NAME "chartjs-cpp-example")

set(SRC
    examples/chartjs-cpp-examples.cpp
)

add_executable(chartjscpp_example ${SRC} ${INC})