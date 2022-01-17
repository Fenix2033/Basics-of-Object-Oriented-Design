//
// Created by xkudla on 05/12/2021.
//

#include "Morfin.h"

Morfin::Morfin(int sila): Ampule(10){
    m_sila = sila;
}

float Morfin::getUtocnaSila(){
   return m_sila * m_pocetLatek;
}
