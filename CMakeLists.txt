cmake_minimum_required(VERSION 3.10)
project(IoT_SecureSense)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(IoT_SecureSense
    src/main.cpp
    src/sensor.cpp
)

