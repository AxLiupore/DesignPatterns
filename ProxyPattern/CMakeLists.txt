cmake_minimum_required(VERSION 3.26)
project(ProxyPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProxyPattern main.cpp
        proxy/Communication.hpp
        proxy/Speaker.hpp
        proxy/DenDenMushi.hpp)
