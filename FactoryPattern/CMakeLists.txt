cmake_minimum_required(VERSION 3.24)
project(FactoryPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(FactoryPattern main.cpp thing/AbstractSmile.hpp thing/SheepSmile.hpp thing/LionSmile.hpp thing/BatSmile.hpp factory/AbstractFactory.hpp factory/SheepFactory.hpp factory/LionFactory.hpp factory/BatFactory.hpp)
