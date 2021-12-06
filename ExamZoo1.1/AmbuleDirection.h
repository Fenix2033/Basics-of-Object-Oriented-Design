//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_AMBULEDIRECTION_H
#define EXAMZOO1_1_AMBULEDIRECTION_H
#include <iostream>
#include "Ambule.h"
#include "NanitChripkovy.h"

class AmbuleDirection {
    Ambule* m_ampule;
public:
    AmbuleDirection(Ambule* ambule);
    void setAmbule(Ambule* ambule);
    NanitChripkovy* constructAmbule(std::string oznaceni);
};


#endif //EXAMZOO1_1_AMBULEDIRECTION_H
