//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_2_DEALER_SKLAD_H
#define EXAMZOO1_2_DEALER_SKLAD_H
#include "Car.h"
#include "UzitkoveAuto.h"
#include <vector>

class Sklad {
    int m_pocetMist;
    std::vector<Car*> m_auta;
public:
    Sklad(int pocetMist);
    void pridej(Car* car);
    void printInfo();
};


#endif //EXAMZOO1_2_DEALER_SKLAD_H
