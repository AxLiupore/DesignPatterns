cmake_minimum_required(VERSION 3.24)
project(DecoratorPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(DecoratorPattern main.cpp solider/Solider.hpp solider/Teach.hpp fruit/DevilFruit.hpp fruit/DarkFruit.hpp fruit/QuakeFruit.hpp fruit/PieFruit.hpp)
