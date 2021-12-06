//
// Created by xkudla on 14/09/2021.
//

#ifndef KNIGHTANDDRAGON_ARMOR_H
#define KNIGHTANDDRAGON_ARMOR_H
#include <iostream>

class Armor {
    std::string m_name;
    int m_weight;
    int m_armorPoint;
public:
    Armor(std::string name, int weight, int armorPoint);
    std::string getName();
    int getArmorPoint();
};


#endif //KNIGHTANDDRAGON_ARMOR_H
