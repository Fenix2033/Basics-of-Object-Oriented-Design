//
// Created by xkudla on 14.12.2021.
//

#include "System.h"

void System::pridejLekar(std::string jmeno, std::string oddeleni, std::string rodneCislo) {
    m_lekary.push_back(new Lekar(jmeno, oddeleni, rodneCislo));
}

void System::pridejZaznam(std::string data, std::string popis, std::string vysetreni, Lekar* leker){
        m_zaznamy.push_back(new Zaznam(data, popis, vysetreni, leker));
}


Lekar* System::getLekar(std::string rodneCislo){
    for(int i = 0; i < m_lekary.size(); i++){
        if(rodneCislo == m_lekary.at(i)->getName()){
            return m_lekary.at(i);
        }
    }
}

void System::printInfo(std::string rodneCislo){
    for(int i = 0; i < m_zaznamy.size(); i++){
        if (rodneCislo == m_lekary.at(i)->getRodneCislo()){
            std::cout << "Popis: " << m_zaznamy.at(i)->getPopis() << std::endl;
        }
    }
}

System::~System(){
    m_lekary.erase(m_lekary.begin(), m_lekary.end());
    m_zaznamy.erase( m_zaznamy.begin(),  m_zaznamy.end());
}

