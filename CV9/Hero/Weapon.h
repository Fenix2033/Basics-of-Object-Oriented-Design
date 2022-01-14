//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_WEAPON_H
#define CV9_WEAPON_H


#include <string>

class Weapon {
    std::string m_name;
    int m_demage;
public:
    Weapon(std::string name, int demage);
    std::string getName();
    int getDemage();
};


#endif //CV9_WEAPON_H
