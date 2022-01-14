//
// Created by xzejda on 04.11.2021.
//



#include <iostream>
#include "SpaceShip.h"

SpaceShip::SpaceShip(float coordX, float coordY,
                     std::string name, float fuelConsumptionPerBilKm) {
    m_name = name;
    m_coordinateX = coordX;
    m_coordinateY = coordY;
    m_fuelConsumptionPerBilKm = fuelConsumptionPerBilKm;
    m_fuelTank = new FuelTank(100.0,100.0);
}

SpaceShip::~SpaceShip() {
    delete m_fuelTank;
}

void SpaceShip::addWeaponSystem(WeaponSystem *weaponSystem, int slot) {
    if (0 <= slot && slot < m_weaponSystems.size()){
        if (m_weaponSystems.at(slot) != nullptr){
            std::cout << "Slot is not empty" << std::endl;
        } else {
            m_weaponSystems.at(slot) = weaponSystem;
        }
    } else {
        std::cout << "Out of slot range" << std::endl;
    }
}

void SpaceShip::addGravityPump(GravityPump *gravityPump) {
    if (m_gravityPumps.size() > 10){
        std::cout << "Max capacity reached" << std::endl;
    } else {
        m_gravityPumps.push_back(gravityPump);
    }
}

void SpaceShip::printInfoAboutPlanet(Planet *planet) {
    planet->printInfo();
}

void SpaceShip::removeWeaponSystem(int slot) {
    if (m_weaponSystems.at(slot) != nullptr){
        m_weaponSystems.at(slot) = nullptr;
    } else {
        std::cout << "Is empty" << std::endl;
    }
}

void SpaceShip::removeWeaponSystem(WeaponSystem *weaponSystem) {
    for (int i = 0; i < m_weaponSystems.size(); ++i) {
        if (weaponSystem == m_weaponSystems.at(i)){
            m_weaponSystems.at(i) = nullptr;
        }
    }
}

void SpaceShip::removeGravityPump(GravityPump *gravityPump) {
    for (int i = 0; i < m_gravityPumps.size(); ++i) {
        if (gravityPump == m_gravityPumps.at(i)){
            m_gravityPumps.erase(m_gravityPumps.begin() + i);
        }
    }
}

void SpaceShip::removeLastGravityPump() {
    m_gravityPumps.pop_back();
}

void SpaceShip::printInfo() {
    std::cout << "**** Space Ship ****" << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << std::endl;
}
