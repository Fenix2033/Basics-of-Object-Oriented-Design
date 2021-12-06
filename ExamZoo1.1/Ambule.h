//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_AMBULE_H
#define EXAMZOO1_1_AMBULE_H
#include <iostream>
#include "NanitChripkovy.h"

class Ambule {
protected:
    int m_pocetLatek;
    NanitChripkovy* m_nanit;
public:
    Ambule(int pocetLatek);
    virtual float getUtocnaSila() = 0;
    void createNewNanit(std::string oznaceni);
    NanitChripkovy* getNanit();
};


#endif //EXAMZOO1_1_AMBULE_H
