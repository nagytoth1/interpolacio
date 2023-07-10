cmake_minimum_required(VERSION 3.25)
project(interpolacio_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(interpolacio_cpp main.cpp interpolacio.cpp interpolacio.h lagrange.cpp lagrange.h)
