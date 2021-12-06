//
// Created by xkudla on 07/11/2021.
//

#include "Product.h"

Product::Product(){

}

Cargo Product::getCargo(int which){
    return m_cargo.at(which);
}

int Product::getCountCargo(){
    return m_cargo.size();
}

void Product::addCargo(Cargo cargo){
    m_cargo.push_back(cargo);
}

std::string Product::getDescription(Cargo cargo){
    return cargo.description;
}