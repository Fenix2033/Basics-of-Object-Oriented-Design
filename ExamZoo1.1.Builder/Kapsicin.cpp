//
// Created by xkudla on 17/01/2022.
//

#include "Kapsicin.h"

Kapsicin::Kapsicin(bool ucinnost, int sila): Ampule(10){
    m_ucinnost = ucinnost;
    m_sila = sila;
}

float Kapsicin::getUtocnaSila(){
    if (m_ucinnost != 0){
        return (m_sila * m_pocetLatek)/m_ucinnost;
    } else {
        return 0;
    }
}