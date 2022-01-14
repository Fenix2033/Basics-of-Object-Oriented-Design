//
// Created by xzejda on 02.12.2021.
//

#include "ForestStatePast.h"

std::string ForestStatePast::getDescription() {
    return "Nachazis se v minulosti";
}

std::vector<Item *> ForestStatePast::getItems() {
    return std::vector<Item *>{
        new Item("Timhle se sece trava", "Kosa"),
        new Item("Asi stribrna", "Stara mince")
    };
}

std::vector<Npc *> ForestStatePast::getNpc() {
    return std::vector<Npc *>{
        new Npc("Pozdrav panbuh","Rolnik")
    };
}

std::vector<std::string> ForestStatePast::getPossibilities() {
    return std::vector<std::string>{
        "Prozkoumej les",
        "Pozdrav rolnika",
        "Zvedni minci",
        "Podivej se na kosu"
    };
}
