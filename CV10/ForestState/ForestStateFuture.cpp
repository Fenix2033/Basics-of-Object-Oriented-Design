//
// Created by xzejda on 02.12.2021.
//

#include "ForestStateFuture.h"

std::string ForestStateFuture::getDescription() {
    return "Nachazis se v budoucnosti";
}

std::vector<Item *> ForestStateFuture::getItems() {
    return std::vector<Item *>{
        new Item("Zari a leskne se", "Vesmirna lod"),
        new Item("Pracka zarostla mechem", "Pracka")
    };
}

std::vector<Npc *> ForestStateFuture::getNpc() {
    return std::vector<Npc *>{
        new Npc("%)*&#_)&$_)&","Mimozemstan")
    };
}

std::vector<std::string> ForestStateFuture::getPossibilities() {
    return std::vector<std::string>{
        "Prohledej les",
        "Mrkni na pracku",
        "Bez k mimozemstanovi",
        "Bez do lodi"
    };
}
