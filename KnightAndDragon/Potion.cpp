//
// Created by xkudla on 14/09/2021.
//

#include "Potion.h"

Potion::Potion(int bonusHealth){
    m_bonusHealth = bonusHealth;
}

int Potion::getBonusHealth(){
    return m_bonusHealth;
}
