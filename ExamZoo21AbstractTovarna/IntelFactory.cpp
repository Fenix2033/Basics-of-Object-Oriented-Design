//
// Created by xkudla on 13/12/2021.
//

#include "IntelFactory.h"

IntelFactory::IntelFactory(int frekvence, int zapisRychlost, int zapisHloubka){
    m_frekvence = frekvence;
    m_zapisRychlost = zapisRychlost;
    m_zapisHloubka = zapisHloubka;
}

Procesor* IntelFactory::getProcesor(){
    return new ProcesorIntel(m_frekvence);
}

PlotnovyDisk* IntelFactory::getDisk(){
    return new PlotnovyDisk(m_zapisRychlost, m_zapisHloubka);
}