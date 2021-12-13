//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_PROCESORAMD_H
#define EXAMZOO21ABSTRACTTOVARNA_PROCESORAMD_H
#include "Procesor.h"

class ProcesorAmd: public Procesor{
    int m_frekvence;
    int m_cache;
public:
    ProcesorAmd(int frekvence, int cache);
    int getVykon();
};


#endif //EXAMZOO21ABSTRACTTOVARNA_PROCESORAMD_H
