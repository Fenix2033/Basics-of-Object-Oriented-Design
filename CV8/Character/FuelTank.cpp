//
// Created by xzejda on 04.11.2021.
//

#include "FuelTank.h"

FuelTank::FuelTank(float fuelCapacity, float actualFuel) {
    m_fuelCapacity = fuelCapacity;
    m_actualFuel = actualFuel;
}

float FuelTank::getFuelCapacity() {
    return m_fuelCapacity;
}

float FuelTank::getActualFuel() {
    return m_actualFuel;
}

void FuelTank::addFuel(float fuel) {
    if(m_actualFuel + fuel > m_fuelCapacity){
        m_actualFuel = m_fuelCapacity;
    } else {
        m_actualFuel += fuel;
    }
}
