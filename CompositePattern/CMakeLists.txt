cmake_minimum_required(VERSION 3.24)
project(CompositePattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(CompositePattern main.cpp team/AbstractTeam.hpp team/LeafTeam.hpp team/ManagerTeam.hpp)
