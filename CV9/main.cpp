#include <iostream>
#include "HeroBuilder/HeroDirector.h"
#include "HeroBuilder/BarbarianHeroBuilder.h"
#include "HeroBuilder/RogueHeroBuilder.h"


int main() {
    HeroDirector* heroDirector = new HeroDirector(new BarbarianHeroBuilder());
    heroDirector->setHeroBuilder(new RogueHeroBuilder);
    Hero* hero = heroDirector->constructHero();

    hero->printInfo();

    delete heroDirector;
    delete hero;
    return 0;
}
