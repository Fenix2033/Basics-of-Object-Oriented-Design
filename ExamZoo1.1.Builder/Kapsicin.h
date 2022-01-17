//
// Created by xkudla on 17/01/2022.
//

#ifndef EXAMZOO1_1_KAPSICIN_H
#define EXAMZOO1_1_KAPSICIN_H
#include <iostream>
#include "Ampule.h"


class Kapsicin: public Ampule {
    bool m_ucinnost;
    int m_sila;
public:
    Kapsicin(bool ucinnost, int sila);
    float getUtocnaSila() override;
};


#endif //EXAMZOO1_1_KAPSICIN_H
