//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_MORFIN_H
#define EXAMZOO1_1_MORFIN_H
#include <iostream>
#include "Ampule.h"


class Morfin: public Ampule{
    int m_sila;
public:
    Morfin(int sila);
    float getUtocnaSila() override;
};


#endif //EXAMZOO1_1_MORFIN_H
