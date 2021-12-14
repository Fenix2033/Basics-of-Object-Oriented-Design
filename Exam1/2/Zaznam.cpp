//
// Created by xkudla on 14.12.2021.
//

#include "Zaznam.h"

Zaznam::Zaznam(std::string data, std::string popis, std::string vysetreni, Lekar* leker){
    m_data = data;
    m_popis = popis;
    m_vysetreni = vysetreni;
    m_lekar = leker;
}

std::string Zaznam::getPopis(){
    return m_data;
}