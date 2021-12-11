//
// Created by xkudla on 10/12/2021.
//

#include "Sklad.h"

Sklad::Sklad(int pocetMist){
    m_pocetMist = pocetMist;
}

void Sklad::pridej(Car* car){
    if (m_auta.size() <= m_pocetMist - 1){
        m_auta.push_back(car);
    } else {
        std::cout << "No place" << std::endl;
    }
}

void Sklad::printInfo(){
    for(int i = 0; i < m_auta.size(); i++){
        m_auta.at(i)->printInfo();
    }
}