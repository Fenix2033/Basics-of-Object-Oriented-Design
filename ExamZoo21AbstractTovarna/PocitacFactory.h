//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_POCITACFACTORY_H
#define EXAMZOO21ABSTRACTTOVARNA_POCITACFACTORY_H
#include "Procesor.h"
#include "PlotnovyDisk.h"

class PocitacFactory {
public:
    virtual Procesor* getProcesor() = 0;
    virtual PlotnovyDisk* getDisk() = 0;
};


#endif //EXAMZOO21ABSTRACTTOVARNA_POCITACFACTORY_H
