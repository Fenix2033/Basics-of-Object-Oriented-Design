//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_HERODIRECTOR_H
#define CV9_HERODIRECTOR_H


#include "HeroBuilder.h"
#include "../Hero/Hero.h"

class HeroDirector {
    HeroBuilder* m_builder;
public:
    HeroDirector(HeroBuilder* builder);
    void setHeroBuilder(HeroBuilder* builder);
    Hero* constructHero();
};


#endif //CV9_HERODIRECTOR_H
