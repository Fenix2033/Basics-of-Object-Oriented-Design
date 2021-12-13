//
// Created by xkudla on 13/12/2021.
//

#include "AmdFactory.h"

AmdFactory::AmdFactory(int frekvence, int cache, int zapisRychlost, int zapisHloubka){
    m_frekvence = frekvence;
    m_cache = cache;
    m_zapisRychlost = zapisRychlost;
    m_zapisHloubka = zapisHloubka;
}

Procesor* AmdFactory::getProcesor(){
    return new ProcesorAmd(m_frekvence, m_cache);
}

PlotnovyDisk* AmdFactory::getDisk(){
    return new PlotnovyDisk(m_zapisRychlost, m_zapisHloubka);
}