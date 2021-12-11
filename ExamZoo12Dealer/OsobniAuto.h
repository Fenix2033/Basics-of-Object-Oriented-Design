//
// Created by xkudla on 11/12/2021.
//

#ifndef EXAMZOO12DEALER_OSOBNIAUTO_H
#define EXAMZOO12DEALER_OSOBNIAUTO_H
#include "Car.h"

class OsobniAuto: public Car{
    int m_pocetSedadel;
    int m_objemProstoru;
    int m_euroNorma;
public:
    OsobniAuto(std::string nazev, int objemMotoru, int spotreba,
               int pocetSedadel, int objemProstoru);
    void printInfo();
};


#endif //EXAMZOO12DEALER_OSOBNIAUTO_H
