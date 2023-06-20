cmake_minimum_required(VERSION 3.24)
project(car)

set(CMAKE_CXX_STANDARD 17)

add_executable(car main.cpp MyCar.h MyCar.cpp ManageCars.cpp)
