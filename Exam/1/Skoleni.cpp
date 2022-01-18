//
// Created by xkudla on 17.01.2022.
//

#include "Skoleni.h"

Skoleni::Skoleni(std::string nazev, int pocetHodin){
    m_nazev = nazev;
    m_pocetHodin = pocetHodin;
}

std::string Skoleni::getNazev(){
    return m_nazev;
}