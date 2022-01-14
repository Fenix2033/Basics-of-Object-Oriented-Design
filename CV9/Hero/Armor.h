//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_ARMOR_H
#define CV9_ARMOR_H


#include <string>

class Armor {
    std::string m_name;
    int m_defencePoints;
public:
    Armor(std::string name, int defencePoints);
    std::string getName();
    int getDefencePoints();
};


#endif //CV9_ARMOR_H
