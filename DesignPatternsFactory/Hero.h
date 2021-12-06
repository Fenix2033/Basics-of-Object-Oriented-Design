//
// Created by xkudla on 06/11/2021.
//

#ifndef DESIGNPATTERNS1_HERO_H
#define DESIGNPATTERNS1_HERO_H
#include <iostream>
#include "ErrorLog.h"

enum class Class{
    Knight, Frontier, Thief
};

class Hero {
    Class m_class;
    int m_strength;
    int m_dexterity;
    int m_endurance;
    int m_id;
    std::string m_name;

    Hero(Class Class, int strength, int dexterity, int endurance, int id, std::string name);


public:

    std::string getNameClass();
    int newId();
    int getId();
    void printInfo();
    static Hero* createHero(Class Class, int id, std::string name); //Factory Method
};


#endif //DESIGNPATTERNS1_HERO_H
