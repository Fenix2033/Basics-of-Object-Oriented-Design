//
// Created by xkudla on 10/12/2021.
//

#include "NanitBuilder.h"

NanitBuilder::NanitBuilder(){
    m_nanit = nullptr;
}

void NanitBuilder::createNewNanit(std::string oznaceni, Ambule* ambule){
    m_nanit = new NanitChripkovy(oznaceni);
    m_nanit->setAmpule(ambule);
}

NanitChripkovy* NanitBuilder::getNanit() const{
    return m_nanit;
}