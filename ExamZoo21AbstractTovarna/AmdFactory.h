//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_AMDFACTORY_H
#define EXAMZOO21ABSTRACTTOVARNA_AMDFACTORY_H
#include "PocitacFactory.h"
#include "ProcesorAmd.h"
#include "PlotnovyDisk.h"

class AmdFactory : public PocitacFactory{
    int m_frekvence;
    int m_cache;
    int m_zapisRychlost;
    int m_zapisHloubka;
public:
    AmdFactory(int frekvence, int cache, int zapisRychlost, int zapisHloubka);
    Procesor* getProcesor();
    PlotnovyDisk* getDisk();
};


#endif //EXAMZOO21ABSTRACTTOVARNA_AMDFACTORY_H
