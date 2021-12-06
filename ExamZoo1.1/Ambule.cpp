//
// Created by xkudla on 05/12/2021.
//

#include "Ambule.h"

Ambule::Ambule(int pocetLatek){
    m_pocetLatek = pocetLatek;
    m_nanit = nullptr;
}

void Ambule::createNewNanit(std::string oznaceni){
    m_nanit = new NanitChripkovy(oznaceni);
}

NanitChripkovy* Ambule::getNanit(){
    return m_nanit;
}