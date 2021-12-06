//
// Created by xkudla on 14/09/2021.
//

#ifndef KNIGHTANDDRAGON_KNIGHT_H
#define KNIGHTANDDRAGON_KNIGHT_H
#include <vector>
#include <iostream>
#include "Armor.h"
#include "Weapon.h"
#include "Potion.h"
#include "Dragon.h"

class Knight {
    int m_health;
    int m_damage;
    int m_armorPoint;
    Armor* m_armor;
    Weapon* m_weapon;
    std::vector<Potion*> m_potion;
public:
    Knight(int health, int damage, int armorPoint);
    int getHealth();
    int getDamage();
    int getArmorPoint();
    void takeArmor(Armor* armor);
    void takeWeapon(Weapon* weapon);
    void takePotion(Potion* potion);
    void takeDamage(int dragonDamage);
    void drinkPotion();
    void printInfo();
};


#endif //KNIGHTANDDRAGON_KNIGHT_H
