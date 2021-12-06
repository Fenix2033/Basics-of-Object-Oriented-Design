//
// Created by xkudla on 06/11/2021.
//

#ifndef DESIGNPATTERNS1_HEROLOG_H
#define DESIGNPATTERNS1_HEROLOG_H
#include "Hero.h"
#include <vector>

class HeroLog { // Monostate
    static int s_countHero;
    static std::vector<Hero*> s_hero;

    HeroLog(){}
public:
    static std::vector<Hero*> getHeroName(Class Class);
    static Hero* getHeroId(int id);
    static Hero* addHero(Class Class, std::string nameHero);
};


#endif //DESIGNPATTERNS1_HEROLOG_H
