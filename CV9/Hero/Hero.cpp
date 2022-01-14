//
// Created by xzejda on 25.11.2021.
//

#include <iostream>
#include "Hero.h"

Hero::Hero() {
    m_health = 0;
    m_strength = 0;
    m_agility = 0;
    m_intelligence = 0;
    m_weapon = nullptr;
    m_armor = nullptr;
    m_items = {};
}

void Hero::setWeapon(Weapon *weapon) {
    m_weapon = weapon;
}

void Hero::setArmor(Armor *armor) {
    m_armor = armor;
}

void Hero::addItem(Item *item) {
    if (m_items.size() < 5){
        m_items.push_back(item);
    } else {
        std::cout << "Inventar je zaplneny" << std::endl;
    }
}
void Hero::remItem(int position) {
    if (0 <= position && position < m_items.size()){
        if (m_items.at(position) != nullptr){
            m_items.erase(m_items.begin() + position);
        } else {
            std::cout << "Na dane pozici nemas predmet" << std::endl;
        }
    } else {
        std::cout << "Na dane pozici nemas predmet" << std::endl;
    }
}
int Hero::getAttackDemage() {
    if (m_weapon != nullptr){
        return m_weapon->getDemage();
    } else {
        return 0;
    }
}

int Hero::getDefence() {
    if (m_armor != nullptr){
        return m_armor->getDefencePoints();
    } else {
        return 0;
    }
}

void Hero::printInfo() {
    std::cout << "***HERO***" << std::endl;
    std::cout << "Health: " << m_health << std::endl;
    std::cout << "Strength: " << m_strength << std::endl;
    std::cout << "Agility: " << m_agility << std::endl;
    std::cout << "Intelligence: " << m_intelligence << std::endl;
    if (m_weapon != nullptr){
        std::cout << "Weapon: " << m_weapon->getName()
        << " demage: " << m_weapon->getDemage() << std::endl;
    } else {
        std::cout << "No weapon" << std::endl;
    }
    if (m_armor != nullptr){
        std::cout << "Armor: " << m_armor->getName()
        << " defence: " << m_armor->getDefencePoints() << std::endl;
    } else {
        std::cout << "No armor" << std::endl;
    }
    for (int i = 0; i < m_items.size(); ++i) {
        std::cout << i << " - " << m_items.at(i)->getName() << std::endl;
    }
    std::cout << std::endl;
}

void Hero::setHealth(int health) {
    m_health = health;
}

void Hero::setStrength(int strength) {
    m_strength = strength;
}

void Hero::setAgility(int agility) {
    m_agility = agility;
}

void Hero::setIntelligence(int intelligence) {
    m_intelligence = intelligence;
}
