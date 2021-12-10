//
// Created by xkudla on 05/12/2021.
//

#include "NanitChripkovy.h"

class Ampule;

NanitChripkovy::NanitChripkovy(std::string oznaceni){
    m_oznaceni = oznaceni;
    m_utocnaSila = 40;
    m_vyzbroj = nullptr;
}

void NanitChripkovy::printInfo(){
    std::cout << m_oznaceni << std::endl;
    std::cout << m_utocnaSila << std::endl;
    std::cout << m_vyzbroj << std::endl;
}

void NanitChripkovy::setAmpule(Ambule* vyzbroj){
    m_vyzbroj = vyzbroj;
}