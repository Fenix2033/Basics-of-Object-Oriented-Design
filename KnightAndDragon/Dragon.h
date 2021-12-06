//
// Created by xkudla on 14/09/2021.
//

#ifndef KNIGHTANDDRAGON_DRAGON_H
#define KNIGHTANDDRAGON_DRAGON_H
#include <iostream>
#include <vector>
#include "Knight.h"

class Dragon {
    class DragonHead{
        int m_health;
        int m_damage;
    public:
        DragonHead(int health, int damage);
        int getHealth();
        int getDamage();
        void takeDamageHead(int damageKnight);
    };

    int m_armorPoint;
    std::vector<DragonHead*> m_dragonHead;

public:
    Dragon(int armorPoint);
    int getArmorPoint();
    int getDamageAllHead();
    void takeDamage(int damageKnight, int orderHead);
    void printInfo();
    ~Dragon();
};


#endif //KNIGHTANDDRAGON_DRAGON_H
