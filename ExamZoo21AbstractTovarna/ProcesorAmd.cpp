//
// Created by xkudla on 13/12/2021.
//

#include "ProcesorAmd.h"

ProcesorAmd::ProcesorAmd(int frekvence, int cache){
    m_frekvence = frekvence;
    m_cache = cache;
}

int ProcesorAmd::getVykon(){
    return m_frekvence + (m_cache * 10);
}