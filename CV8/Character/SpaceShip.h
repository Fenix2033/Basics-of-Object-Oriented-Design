//
// Created by xzejda on 04.11.2021.
//

#ifndef CV7_SPACESHIP_H
#define CV7_SPACESHIP_H


#include <string>
#include <array>
#include <vector>
#include "FuelTank.h"
#include "WeaponSystem.h"
#include "GravityPump.h"
#include "../World/Planet.h"

class SpaceShip {
    float m_coordinateX;
    float m_coordinateY;
    std::string m_name;
    float m_fuelConsumptionPerBilKm;
    FuelTank* m_fuelTank;
    std::array<WeaponSystem*, 3> m_weaponSystems = {};
    std::vector<GravityPump*> m_gravityPumps;
public:
    SpaceShip(float coordX, float coordY, std::string name,
              float fuelConsumptionPerBilKm);
    ~SpaceShip();
    void addWeaponSystem(WeaponSystem* weaponSystem, int slot);
    void addGravityPump(GravityPump* gravityPump);
    void printInfoAboutPlanet(Planet* planet);
    void removeWeaponSystem(int slot);
    void removeWeaponSystem(WeaponSystem* weaponSystem);
    void removeGravityPump(GravityPump* gravityPump);
    void removeLastGravityPump();
    void printInfo();
};


#endif //CV7_SPACESHIP_H
