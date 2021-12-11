//
// Created by xkudla on 10/12/2021.
//

#include "Car.h"

Car::Car(std::string nazev, int objemMotoru, int spotreba){
     m_nazev = nazev;
     m_objemMotoru = objemMotoru;
     m_spotreba = spotreba;
}

std::string Car::getNazev() {
    return m_nazev;
}

int Car::getObjemMotoru(){
    return m_objemMotoru;
}

int Car::getSpotreba(){
    return m_spotreba;
}

void Car::printInfo(){

}