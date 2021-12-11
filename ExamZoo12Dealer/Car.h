//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_2_DEALER_AUTO_H
#define EXAMZOO1_2_DEALER_AUTO_H
#include <iostream>

class Car {
    std::string m_nazev;
    int m_objemMotoru;
    int m_spotreba;
public:
    Car(std::string nazev, int objemMotoru, int spotreba);
    std::string getNazev();
    int getObjemMotoru();
    int getSpotreba();
    virtual void printInfo();
};


#endif //EXAMZOO1_2_DEALER_AUTO_H
