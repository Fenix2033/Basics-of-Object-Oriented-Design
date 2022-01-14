//
// Created by xzejda on 02.12.2021.
//

#include "ForestStatePresent.h"

std::string ForestStatePresent::getDescription() {
    return "Nachazis se v pritomnosti.";
}

std::vector<Item *> ForestStatePresent::getItems() {
    return std::vector<Item *>{
        new Item("Pracka s rozbitym sklem", "Rozbita pracka"),
        new Item("Siska z borovice", "Siska")
    };
}

std::vector<Npc *> ForestStatePresent::getNpc() {
    return std::vector<Npc *>{
        new Npc("Dobry den", "Lesnik")
    };
}

std::vector<std::string> ForestStatePresent::getPossibilities() {
    return std::vector<std::string>{
        "Prozkoumej les", "Pozdrav lesnika", "Koukni se na pracku", "Seber sisku"
    };
}
