//
// Created by xkudla on 14/12/2021.
//

#include "Svet.h"

Svet::Svet(){
    hrac = new Hrdina();
    menu = new IpolozkaMenu();
}

void Svet::vypisAkce(){
    std::cout << "Zivot: " << hrac->getZivot() << std::endl;
    std::cout << "Sila: " << hrac->getSila() << std::endl;
    std::cout << "Obrana: " << hrac->getObrana() << std::endl;
    std::cout << "Penize: " << hrac->getPenize() << std::endl;
    std::cout << "Zkusensti: " << hrac->getZkusenosti() << std::endl;
    menu->vypisAkce();
}

IpolozkaMenu* Svet::getMenu() {
    return menu;
}

void Svet::akce(){
    menu->akce(hrac);
}