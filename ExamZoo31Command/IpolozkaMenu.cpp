//
// Created by xkudla on 14/12/2021.
//


#include "IpolozkaMenu.h"


void IpolozkaMenu::pridejPolozku(PolozkaMenu* polozka){
    m_polozkyMenu.push_back(polozka);
}

void IpolozkaMenu::vypisAkce(){
    for (int i = 0; i < m_polozkyMenu.size(); i++){
        std::cout << "Popis: " << m_polozkyMenu.at(i)->getPopis() << std::endl;
    }
}

void IpolozkaMenu::akce(Hrdina* hrdina){
    m_polozkyMenu.at(input())->prikaz(hrdina);
}

int IpolozkaMenu::input(){
    std::cout << "Akce: " << std::endl;
    int input;
    std::cin >> input;
    return input;
}