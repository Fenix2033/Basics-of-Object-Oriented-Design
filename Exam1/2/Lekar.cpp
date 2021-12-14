//
// Created by xkudla on 14.12.2021.
//

#include "Lekar.h"

Lekar::Lekar(std::string jmeno, std::string oddeleni, std::string rodneCislo){
    m_jmeno = jmeno;
    m_oddeleni = oddeleni;
    m_rodneCislo = rodneCislo;
}

std::string Lekar::getName(){
    return m_jmeno;
}

std::string Lekar::getRodneCislo(){
    return m_rodneCislo;
}