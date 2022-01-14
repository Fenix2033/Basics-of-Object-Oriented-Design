//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_HEROBUILDER_H
#define CV9_HEROBUILDER_H


#include "../Hero/Hero.h"

class HeroBuilder {
protected:
    Hero* m_hero;
public:
    HeroBuilder();
    void createHero();
    virtual void setAttributes() = 0;
    virtual void setWeapon() = 0;
    virtual void setArmor() = 0;
    virtual void setItems() = 0;
    Hero* getHero();
};


#endif //CV9_HEROBUILDER_H
