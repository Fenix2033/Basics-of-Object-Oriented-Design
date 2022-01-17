//
// Created by xkudla on 05/12/2021.
//

#ifndef EXAMZOO1_1_NANITCHRIPKOVY_H
#define EXAMZOO1_1_NANITCHRIPKOVY_H
#include <iostream>
#include "Ampule.h"

class NanitChripkovy {
    std::string m_oznaceni;
    int m_utocnaSila;
    Ampule* m_vyzbroj;
public:
    NanitChripkovy(std::string oznaceni);
    void setAmpule(Ampule* vyzbroj);
    void printInfo();
};


#endif //EXAMZOO1_1_NANITCHRIPKOVY_H
