//
// Created by xkudla on 14/09/2021.
//

#include "Armor.h"

Armor::Armor(std::string name, int weight, int armorPoint){
    m_name = name;
    m_weight = weight;
    m_armorPoint = armorPoint;
}

int Armor::getArmorPoint(){
    return m_armorPoint;
}

std::string Armor::getName(){
    return m_name;
}