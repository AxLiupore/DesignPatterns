cmake_minimum_required(VERSION 3.26)
project(FacadePattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(FacadePattern main.cpp
        system/CokeSystem.hpp
        system/EnergySystem.hpp
        system/AimLockSystem.hpp
        cannon/Cannon.hpp
        cannon/WindCannon.hpp
        cannon/LionCannon.hpp)
