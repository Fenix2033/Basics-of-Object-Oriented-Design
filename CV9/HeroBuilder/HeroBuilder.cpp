//
// Created by xzejda on 25.11.2021.
//

#include "HeroBuilder.h"

HeroBuilder::HeroBuilder() {
    m_hero = nullptr;
}

void HeroBuilder::createHero() {
    m_hero = new Hero();
}

Hero *HeroBuilder::getHero() {
    return m_hero;
}
