//
// Created by xkudla on 06/11/2021.
//

#include "Hero.h"

Hero::Hero(Class Class, int strength, int dexterity, int endurance, int id, std::string name){
    m_class = Class;
    m_strength = strength;
    m_dexterity = dexterity;
    m_endurance = endurance;
    m_id = id;
    m_name = name;
}

std::string Hero::getNameClass(){
    if(m_class == Class::Knight){
        return "Knight";
    } else if (m_class == Class::Frontier){
        return "Frontier";
    } else if (m_class == Class::Thief){
        return "Thief";
    } else {
        return "Wrong class";
    }
}


int Hero::getId(){
    return m_id;
}

void Hero::printInfo(){
    std::cout << "Class: " << getNameClass() << std::endl;
    std::cout << "Strength: " << m_strength << std::endl;
    std::cout << "Dexterity: " << m_dexterity << std::endl;
    std::cout << "Endurance: " << m_endurance << std::endl;
    std::cout << "Name: " << m_name << std::endl;
}

Hero* Hero::createHero(Class Class, int id, std::string name){
    Hero* newHero = nullptr;

    if (name == ""){
        ErrorLog* errorLog = ErrorLog::getErrorLog();
        errorLog->addError(Error{"Hero", "createHero", "Not name"});
    }

    if(Class == Class::Knight){
        newHero = new Hero(Class, 10, 10, 10, id, name);
    } else if (Class == Class::Frontier){
        newHero = new Hero(Class, 5, 5, 20, id, name);
    } else if (Class == Class::Thief){
        newHero = new Hero(Class, 5, 20, 5, id, name);
    } else {
        std::cout << "Wrong class" << std::endl;
    }

    return newHero;
}