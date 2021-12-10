//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_AMBULE_H
#define EXAMZOO1_1_AMBULE_H
#include <iostream>
#include "NanitBuilder.h"

class Ambule: public NanitBuilder{
protected:
    int m_pocetLatek;
public:
    Ambule(int pocetLatek);
    virtual float getUtocnaSila() = 0;
};


#endif //EXAMZOO1_1_AMBULE_H
