cmake_minimum_required(VERSION 3.24)
project(AdapterPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(AdapterPattern main.cpp foreigner/Forigner.hpp foreigner/American.hpp foreigner/French.hpp panda/Panda.hpp chopper/AbstractChopper.hpp chopper/EnglishChopper.hpp chopper/FrenchChopper.hpp)
