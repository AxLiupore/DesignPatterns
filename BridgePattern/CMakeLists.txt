cmake_minimum_required(VERSION 3.24)
project(BridgePattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(BridgePattern main.cpp team/AbstractTeam.hpp team/CaoMaoTeam.hpp team/SmokerTeam.hpp ship/AbstrachShip.hpp ship/Merry.hpp ship/HaiJunShip.hpp)
