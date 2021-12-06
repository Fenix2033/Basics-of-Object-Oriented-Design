//
// Created by xkudla on 14/09/2021.
//

#ifndef KNIGHTANDDRAGON_WEAPON_H
#define KNIGHTANDDRAGON_WEAPON_H
#include <iostream>

class Weapon {
    std::string m_name;
    int m_damage;
public:
    Weapon(std::string name, int damage);
    std::string getName();
    int getDamage();
};


#endif //KNIGHTANDDRAGON_WEAPON_H
