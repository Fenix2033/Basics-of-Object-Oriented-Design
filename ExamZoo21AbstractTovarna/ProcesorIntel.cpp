//
// Created by xkudla on 13/12/2021.
//

#include "ProcesorIntel.h"

ProcesorIntel::ProcesorIntel(int frekvence){
    m_frekvence = frekvence;
}

int ProcesorIntel::getVykon(){
    return m_frekvence * 3;
}