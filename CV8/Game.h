//
// Created by xzejda on 11.11.2021.
//

#ifndef CV7_GAME_H
#define CV7_GAME_H


#include "World/Map.h"
#include "Character/SpaceShip.h"

class Game {
    world::Map* m_map;
    SpaceShip* m_character;
public:
    Game();
    void play();
    void mapInicialization();
    void characterInicialization();
    void mainDecisionSwitch();
};


#endif //CV7_GAME_H
