cmake_minimum_required(VERSION 3.19)
project(CV9)

set(CMAKE_CXX_STANDARD 14)

add_executable(CV9 main.cpp Hero/Weapon.cpp Hero/Weapon.h Hero/Item.cpp Hero/Item.h Hero/Armor.cpp Hero/Armor.h Hero/Hero.cpp Hero/Hero.h HeroBuilder/HeroDirector.cpp HeroBuilder/HeroDirector.h HeroBuilder/HeroBuilder.cpp HeroBuilder/HeroBuilder.h HeroBuilder/BarbarianHeroBuilder.cpp HeroBuilder/BarbarianHeroBuilder.h HeroBuilder/RogueHeroBuilder.cpp HeroBuilder/RogueHeroBuilder.h)