cmake_minimum_required(VERSION 3.19)
project(CV10)

set(CMAKE_CXX_STANDARD 14)

add_executable(CV10 main.cpp Forest/Item.cpp Forest/Item.h Forest/Npc.cpp Forest/Npc.h Forest/Forest.cpp Forest/Forest.h EnumTime.h ForestState/ForestState.cpp ForestState/ForestState.h ForestState/ForestStatePast.cpp ForestState/ForestStatePast.h ForestState/ForestStateFuture.cpp ForestState/ForestStateFuture.h ForestState/ForestStatePresent.cpp ForestState/ForestStatePresent.h)