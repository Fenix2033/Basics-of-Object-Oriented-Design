//
// Created by xzejda on 25.11.2021.
//

#include "Item.h"

Item::Item(std::string name, int type, int value) {
    m_name = name;
    m_bonusType = type;
    m_bonusValue = value;
}

std::string Item::getName() {
    return m_name;
}

int Item::getBonusType() {
    return m_bonusType;
}

int Item::getBonusValue() {
    return m_bonusValue;
}
