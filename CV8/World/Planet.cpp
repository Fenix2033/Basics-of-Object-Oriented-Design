//
// Created by xzejda on 04.11.2021.
//

#include <iostream>
#include "Planet.h"

Planet::Planet(float coordX, float coordY, std::string name): world::Location(name) {
    m_name = name;
    m_coordinateX = coordX;
    m_coordinateY = coordY;
}

float Planet::getCoordinateX() {
    return m_coordinateX;
}

float Planet::getCoordinateY() {
    return m_coordinateY;
}

void Planet::printInfo() {
    std::cout << "Planet: " << m_name << std::endl;
    std::cout << "Coordinates: [" << m_coordinateX << ","
    << m_coordinateY << "]" << std::endl;
}

int Planet::mineUnitOfOre() {
    return 0;
}
