//
// Created by xzejda on 11.11.2021.
//

#include "Game.h"

Game::Game() {
    m_map = nullptr;
    m_character = nullptr;
}

void Game::mapInicialization() {
    world::Location* planet = new Planet(10.0,30.0,"Earth");
    world::Location* planet1 = new Planet(15.0,20.0,"Jupiter");
    world::Location* planet2 = new Planet(20.0,10.0,"Neptun");
    world::Location* planet3 = new Planet(25.0,25.0,"Mars");

    m_map = new world::Map(2,2);
    m_map->insertLocationIntoMap(0,0,planet);
    m_map->insertLocationIntoMap(0,1,planet1);
    m_map->insertLocationIntoMap(1,0,planet2);
    m_map->insertLocationIntoMap(1,1,planet3);
}

void Game::characterInicialization() {
    std::cout<< "Vitej ve vesmirnem simulatoru.." << std::endl;
    std::cout << "Jak se bude jmenovat tvoje lod?" << std::endl;
    std::string name;
    std::cin >> name;
    SpaceShip* spaceShip = new SpaceShip(0.0,0.0,name,
                                         10.0);
    m_character = spaceShip;
}

void Game::mainDecisionSwitch() {
    int decision = 0;

    while (decision != 99) {
        std::cout << "Co chces delat? [0] - napoveda, [1] - vypis mapu, [2] - "
                     "vypis lod, [99] - ukoncit hru " << std::endl;
        std::cin >> decision;
        switch (decision) {
            case 0:
                std::cout << "Tady bude napoveda.." << std::endl;
                break;
            case 1:
                m_map->printMap();
                break;
            case 2:
                m_character->printInfo();
                break;
            default:
                break;
        }
    }
}

void Game::play() {
    mapInicialization();
    characterInicialization();
    mainDecisionSwitch();
}
