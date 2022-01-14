//
// Created by xzejda on 25.11.2021.
//

#include "BarbarianHeroBuilder.h"

void BarbarianHeroBuilder::setAttributes() {
    m_hero->setHealth(250);
    m_hero->setStrength(10);
    m_hero->setAgility(5);
    m_hero->setIntelligence(2);
}

void BarbarianHeroBuilder::setWeapon() {
    m_hero->setWeapon(new Weapon("Barbarian sword", 50));
}

void BarbarianHeroBuilder::setArmor() {
    m_hero->setArmor(new Armor("Barbarian basic armor", 50));
}

void BarbarianHeroBuilder::setItems() {
    m_hero->addItem(new Item("Healing potion", 1, 50));
    m_hero->addItem(new Item("Strength potion", 2, 50));
    m_hero->addItem(new Item("Barbarian neclace", 0, 250));
}
