//
// Created by xkudla on 05/12/2021.
//

#include "AmbuleDirection.h"

AmbuleDirection::AmbuleDirection(Ambule* ambule){
    m_ampule = ambule;
}

void AmbuleDirection::setAmbule(Ambule* ambule){
    m_ampule = ambule;
}

NanitChripkovy* AmbuleDirection::constructAmbule(std::string oznaceni){
    m_ampule->createNewNanit(oznaceni);

    return m_ampule->getNanit();
}