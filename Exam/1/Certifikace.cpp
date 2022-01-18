//
// Created by xkudla on 17.01.2022.
//

#include "Certifikace.h"

Certifikace::Certifikace(std::string jmeno, int pocetSkoleni){
    m_jmeno = jmeno;
    m_pocetSkoleni = pocetSkoleni;
}

int Certifikace::getPocetSkoleni(){
    return m_pocetSkoleni;
}

std::string Certifikace::getJmeno(){
    return getJmeno();
}

void Certifikace::addSkoleni(Skoleni* skoleni){
    m_skoleni.push_back(skoleni);
}

std::vector<Skoleni*> Certifikace::getSkoleni(){
    return m_skoleni;
}