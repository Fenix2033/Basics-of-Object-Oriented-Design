//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_AMPULE_H
#define EXAMZOO1_1_AMPULE_H
#include <iostream>
#include "NanitChripkovy.h"

class Ampule{
protected:
    int m_pocetLatek;
public:
    Ampule(int pocetLatek);
    virtual float getUtocnaSila() = 0;
};


#endif //EXAMZOO1_1_AMPULE_H
