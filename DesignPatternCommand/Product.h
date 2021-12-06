//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_PRODUCT_H
#define DESIGNPATTERNS2_PRODUCT_H
#include "Cargo.h"
#include <vector>

class Product {
    std::vector<Cargo> m_cargo;
public:
    Product();
    Cargo getCargo(int which);
    int getCountCargo();
    std::string getDescription(Cargo cargo);
    void addCargo(Cargo cargo);
};


#endif //DESIGNPATTERNS2_PRODUCT_H
