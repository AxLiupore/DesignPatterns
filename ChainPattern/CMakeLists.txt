cmake_minimum_required(VERSION 3.26)
project(ChainPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChainPattern main.cpp
        manager/AbstractManager.hpp
        manager/Manager.hpp
        manager/CEO.hpp
        manager/BOSS.hpp
        people/DaCongMing.hpp)
