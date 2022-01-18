//
// Created by xkudla on 17.01.2022.
//

#include "Procesor.h"

Procesor::Procesor(std::string jmeno, int pocetJader, int pocetGJader, int pocetEJader){
    m_jmeno = jmeno;
    m_pocetJader = pocetJader;
    m_pocetGJader = pocetGJader;
    m_pocetEJader = pocetEJader;
}

std::string Procesor::getJmeno(){
    return m_jmeno;
}

int Procesor::getPocetJader(){
    return m_pocetJader;
}

int Procesor::getPocetGJader(){
    return m_pocetGJader;
}

int Procesor::getPocetEJader(){
    return  m_pocetEJader;
}