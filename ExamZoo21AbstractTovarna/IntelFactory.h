//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_INTELFACTORY_H
#define EXAMZOO21ABSTRACTTOVARNA_INTELFACTORY_H

#include "PocitacFactory.h"
#include "ProcesorIntel.h"
#include "PlotnovyDisk.h"

class IntelFactory: public PocitacFactory{
    int m_frekvence;
    int m_zapisRychlost;
    int m_zapisHloubka;
public:
    IntelFactory(int frekvence, int zapisRychlost, int zapisHloubka);
    Procesor* getProcesor();
    PlotnovyDisk* getDisk();
};


#endif //EXAMZOO21ABSTRACTTOVARNA_INTELFACTORY_H
