//
// Created by xzejda on 25.11.2021.
//

#include "HeroDirector.h"

HeroDirector::HeroDirector(HeroBuilder *builder) {
    m_builder = builder;
}

void HeroDirector::setHeroBuilder(HeroBuilder *builder) {
    m_builder = builder;
}

Hero *HeroDirector::constructHero() {
    m_builder->createHero();
    m_builder->setAttributes();
    m_builder->setWeapon();
    m_builder->setArmor();
    m_builder->setItems();
    return m_builder->getHero();
}
