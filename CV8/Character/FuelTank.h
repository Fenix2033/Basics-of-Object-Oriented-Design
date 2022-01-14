//
// Created by xzejda on 04.11.2021.
//

#ifndef CV7_FUELTANK_H
#define CV7_FUELTANK_H


class FuelTank {
    float m_fuelCapacity;
    float m_actualFuel;
public:
    FuelTank(float fuelCapacity, float actualFuel);
    float getFuelCapacity();
    float getActualFuel();
    void addFuel(float fuel);
};


#endif //CV7_FUELTANK_H
