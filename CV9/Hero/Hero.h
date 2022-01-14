//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_HERO_H
#define CV9_HERO_H

#include <vector>
#include "Armor.h"
#include "Weapon.h"
#include "Item.h"

class Hero {
    int m_health;
    int m_strength;
    int m_agility;
    int m_intelligence;
    Weapon* m_weapon;
    Armor* m_armor;
    std::vector<Item*> m_items;
public:
    Hero();
    void setWeapon(Weapon* weapon);
    void setArmor(Armor* armor);
    void addItem(Item* item);
    void remItem(int position);
    int getAttackDemage();
    int getDefence();
    void printInfo();
    void setHealth(int health);
    void setStrength(int strength);
    void setAgility(int agility);
    void setIntelligence(int intelligence);
};


#endif //CV9_HERO_H
