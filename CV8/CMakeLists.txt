cmake_minimum_required(VERSION 3.19)
project(CV7)

set(CMAKE_CXX_STANDARD 14)

add_executable(CV7 main.cpp World/Planet.cpp World/Planet.h Character/SpaceShip.cpp Character/SpaceShip.h Character/GravityPump.cpp Character/GravityPump.h Character/WeaponSystem.cpp Character/WeaponSystem.h Character/FuelTank.cpp Character/FuelTank.h World/Location.h World/Location.cpp World/Map.h World/Map.cpp Game.cpp Game.h)