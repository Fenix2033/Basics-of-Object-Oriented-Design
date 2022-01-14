//
// Created by xzejda on 04.11.2021.
//

#ifndef CV7_PLANET_H
#define CV7_PLANET_H


#include <string>
#include "Location.h"

class Planet: public world::Location{
    float m_coordinateX;
    float m_coordinateY;
    std::string m_name;
public:
    Planet(float coordX, float coordY, std::string name);
    float getCoordinateX();
    float getCoordinateY();
    void printInfo();
    int mineUnitOfOre();
};


#endif //CV7_PLANET_H
