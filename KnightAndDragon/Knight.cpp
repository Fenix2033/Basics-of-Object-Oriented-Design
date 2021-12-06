//
// Created by xkudla on 14/09/2021.
//

#include "Knight.h"

Knight::Knight(int health, int damage, int armorPoint){
    m_health = health;
    m_damage = damage;
    m_armorPoint = armorPoint;
}

int Knight::getHealth(){
    return m_health;
}

int Knight::getDamage(){
    return m_damage;
}

int Knight::getArmorPoint(){
    return m_armorPoint;
}

void Knight::takeArmor(Armor* armor){
    if (m_armor == nullptr){
        m_armor = armor;
        m_armorPoint += m_armor->getArmorPoint();
    } else {
        std::cout << "You already have armor" << std::endl;
    }

}

void Knight::takeWeapon(Weapon* weapon){
    if (m_weapon == nullptr){
        m_weapon = weapon;
        m_damage += m_weapon->getDamage();
    } else {
        std::cout << "You already have weapon" << std::endl;
    }
}

void Knight::takePotion(Potion* potion){
    m_potion.push_back(potion);
}

void Knight::drinkPotion(){
    if (m_potion.size() > 0){
        m_health += m_potion.at(m_potion.size()-1)->getBonusHealth();
        m_potion.pop_back();
    }
}

void Knight::takeDamage(int dragonDamage){
    if (m_health > 0){
        m_health -= dragonDamage - m_armorPoint;
    } if (m_health <= 0){
        std::cout << "Knight is dead" << std::endl;
        Knight::~Knight();
    }
}

void Knight::printInfo(){
    std::cout << "----------------------------Knight----------------------------" << std::endl;
    std::cout << "Health: " << m_health << std::endl;
    std::cout << "Damage: " << m_damage << std::endl;
    std::cout << "Armor point: " << m_armorPoint << std::endl;
    std::cout << "Weapon: " << m_weapon->getName() << std::endl;
    std::cout << "Armor: " << m_armor->getName() << std::endl;
    std::cout << "Potion: " << m_potion.size() << std::endl;
}
