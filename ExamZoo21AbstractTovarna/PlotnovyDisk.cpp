//
// Created by xkudla on 13/12/2021.
//

#include "PlotnovyDisk.h"

PlotnovyDisk::PlotnovyDisk(int zapisRychlost, int zapisHloubka){
    m_zapisRychlost = zapisRychlost;
    m_zapisHloubka = zapisHloubka;
}

float PlotnovyDisk::getRychlost() const{
    return m_zapisRychlost + (m_zapisRychlost / m_zapisHloubka);
}