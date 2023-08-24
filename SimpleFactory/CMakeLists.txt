cmake_minimum_required(VERSION 3.24)
project(FactoryPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(FactoryPattern main.cpp AbstractSmile.hpp SheepSmile.hpp LionSmile.hpp BatSmile.hpp Factory.hpp)
