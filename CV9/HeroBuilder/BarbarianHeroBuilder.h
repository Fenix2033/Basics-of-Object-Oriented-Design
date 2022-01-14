//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_BARBARIANHEROBUILDER_H
#define CV9_BARBARIANHEROBUILDER_H


#include "HeroBuilder.h"

class BarbarianHeroBuilder: public HeroBuilder {
public:
    void setAttributes() override;
    void setWeapon() override;
    void setArmor() override;
    void setItems() override;
};


#endif //CV9_BARBARIANHEROBUILDER_H
