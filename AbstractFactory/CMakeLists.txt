cmake_minimum_required(VERSION 3.24)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp body/ShipBody.hpp body/WoodBody.hpp body/IronBody.hpp body/MetalBody.hpp engine/Engine.hpp engine/HumanEngine.hpp engine/DieselEngine.hpp engine/NuclearEngine.hpp weapon/Weapon.hpp weapon/GunWeapon.hpp weapon/Cannon.hpp weapon/LaserWeapon.hpp ship/Ship.hpp factory/AbstractFactory.hpp factory/BasicFactory.hpp factory/StandardFactory.hpp factory/UltimataFactory.hpp)
