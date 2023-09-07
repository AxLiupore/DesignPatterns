cmake_minimum_required(VERSION 3.26)
project(FlyweightPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(FlyweightPattern main.cpp
        body/FlyWeightBody.hpp
        body/SharedBombBody.hpp
        body/UniqueBomb.hpp
        bomb/LaunchBomb.hpp
        bomb/BombBodyFactory.hpp)
