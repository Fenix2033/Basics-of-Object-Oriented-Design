//
// Created by xzejda on 25.11.2021.
//

#include "RogueHeroBuilder.h"

void RogueHeroBuilder::setAttributes() {
    m_hero->setHealth(100);
    m_hero->setStrength(5);
    m_hero->setAgility(10);
    m_hero->setIntelligence(3);
}

void RogueHeroBuilder::setWeapon() {
    m_hero->setWeapon(new Weapon("Rogue dagger", 20));
}

void RogueHeroBuilder::setArmor() {
    m_hero->setArmor(new Armor("Leather armor", 20));
}

void RogueHeroBuilder::setItems() {
    m_hero->addItem(new Item("Healing potion", 1, 50));
    m_hero->addItem(new Item("Agility potion", 2, 50));
    m_hero->addItem(new Item("Shadow rign", 0, 250));
}
