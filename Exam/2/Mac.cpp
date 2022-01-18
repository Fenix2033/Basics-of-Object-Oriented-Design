//
// Created by xkudla on 17.01.2022.
//

#include "Mac.h"

Mac::Mac(int unikatneCislo, int pamet){
    m_unikatneCislo = unikatneCislo;
    m_pamet = pamet;
}

void Mac::setProcesor(Procesor* procesor){
    m_procesor = procesor;
}

void Mac::printInfo(){
    std::cout << "Nazev: " << m_jmeno << std::endl;
    std::cout << "Pamet: " << m_pamet << std::endl;
    std::cout << "Unikatne Cilso: " << m_unikatneCislo << std::endl;
    if (m_procesor != nullptr){
        std::cout << "Nazev procesora: " << m_procesor->getJmeno() << std::endl;
        std::cout << "Počet výpočetních jader: " << m_procesor->getPocetJader() << std::endl;
        std::cout << "Počet grafických jader: " << m_procesor->getPocetGJader() << std::endl;
        std::cout << "Počet jader neurálního enginu: " << m_procesor->getPocetEJader() << std::endl;
    } else {
        std::cout << "bez procesora" << std::endl;
    }
    std::cout << "            " << std::endl;
}

void Mac::setJmeno(std::string jmeno){
    m_jmeno = jmeno;
}