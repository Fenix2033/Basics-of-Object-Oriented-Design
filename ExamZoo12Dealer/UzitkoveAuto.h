//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_2_DEALER_UZITKOVEAUTO_H
#define EXAMZOO1_2_DEALER_UZITKOVEAUTO_H
#include "Car.h"

class UzitkoveAuto: public Car{
    int m_hmotnost;
    int m_objemNadrze;
    int m_dojezd;
public:
    UzitkoveAuto(std::string nazev, int objemMotoru, int spotreba, int hmotnost, int objemNadrze);
    void printInfo();
};


#endif //EXAMZOO1_2_DEALER_UZITKOVEAUTO_H
