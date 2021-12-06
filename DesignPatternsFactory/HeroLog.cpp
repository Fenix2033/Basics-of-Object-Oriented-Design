//
// Created by xkudla on 06/11/2021.
//

#include "HeroLog.h"

//std::vector<Hero*> HeroLog::getHeroName(Class Class){
//
//    std::vector<Hero*> thisNameClassHero;
//
//    for (Hero* hero : s_hero){
//        if (hero->getNameClass() == "Knight" or "Frontier" or "Thief"){
//            thisNameClassHero.push_back(hero);
//        }
//    }
//
//    return thisNameClassHero;
//}
//
//Hero* HeroLog::getHeroId(int id){
//
//    for (Hero* hero : s_hero){
//        if (hero->getId() == id){
//            return hero;
//        }
//    }
//
//    return nullptr;
//}
//
//Hero* HeroLog::addHero(Class Class, std::string nameHero){
//    Hero* newHero = Hero::createHero(Class, s_countHero, nameHero);
//    s_countHero++;
//    s_hero.push_back(newHero);
//    return newHero;
//}