//
// Created by xkudla on 14/09/2021.
//

#include "Dragon.h"

Dragon::DragonHead::DragonHead(int health, int damage){
    m_health = health;
    m_damage = damage;
}

int Dragon::DragonHead::getHealth(){
    return m_health;
}

int Dragon::DragonHead::getDamage(){
    return m_damage;
}

void Dragon::DragonHead::takeDamageHead(int damageKnight){
    if (m_health > 0){
        m_health -= damageKnight;
    } if (m_health <= 0){
        std::cout << "Dragon head is dead" << std::endl;
    }
}

Dragon::Dragon(int armorPoint){
    m_armorPoint = armorPoint;
    DragonHead* first = new DragonHead(75, 25);
    DragonHead* second = new DragonHead(105, 35);
    m_dragonHead = {first, second};
}

int Dragon::getArmorPoint(){
    return m_armorPoint;
}

int Dragon::getDamageAllHead(){
    return m_dragonHead.at(0)->getDamage() + m_dragonHead.at(1)->getDamage();
}

void Dragon::takeDamage(int damageKnight, int orderHead){
    if (m_dragonHead.at(orderHead)->getHealth() > 0){
        m_dragonHead.at(orderHead)->takeDamageHead(damageKnight - m_armorPoint);
    } if (m_dragonHead.at(0)->getHealth() <= 0 and m_dragonHead.at(1)->getHealth() <= 0) {
        std::cout << "Dragon is dead" << std::endl;
        Dragon::~Dragon();
    }
}

void Dragon::printInfo(){
    std::cout << "----------------------------Dragon----------------------------" << std::endl;
    std::cout << "Armor Point: " << m_armorPoint << std::endl;
    std::cout << "Health first head: " << m_dragonHead.at(0)->getHealth() << std::endl;
    std::cout << "Health second head: " << m_dragonHead.at(1)->getHealth() << std::endl;
    std::cout << "Damage first head: " << m_dragonHead.at(0)->getDamage() << std::endl;
    std::cout << "Damage second head: " << m_dragonHead.at(1)->getDamage() << std::endl;
}

Dragon::~Dragon(){
    delete m_dragonHead.at(0);
    delete m_dragonHead.at(1);
}