//
// Created by xzejda on 25.11.2021.
//

#include "Weapon.h"

Weapon::Weapon(std::string name, int demage) {
    m_name = name;
    m_demage = demage;
}

std::string Weapon::getName() {
    return m_name;
}

int Weapon::getDemage() {
    return m_demage;
}
