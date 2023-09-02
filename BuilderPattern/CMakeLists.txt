cmake_minimum_required(VERSION 3.24)
project(BuilderModel)

set(CMAKE_CXX_STANDARD 14)

add_executable(BuilderModel main.cpp ship/SunnyShip.hpp ship/MerryShip.hpp builder/ShipBuilder.hpp builder/SunnyBuilder.hpp builder/MerryBuilder.hpp director/Director.hpp)
