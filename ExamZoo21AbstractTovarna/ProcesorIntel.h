//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_PROCESORINTEL_H
#define EXAMZOO21ABSTRACTTOVARNA_PROCESORINTEL_H
#include "Procesor.h"

class ProcesorIntel: public Procesor{
    int m_frekvence;
public:
    ProcesorIntel(int frekvence);
    int getVykon();
};


#endif //EXAMZOO21ABSTRACTTOVARNA_PROCESORINTEL_H
