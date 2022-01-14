//
// Created by xzejda on 04.11.2021.
//

#include "GravityPump.h"

GravityPump::GravityPump(float fuelSavePerBilKm) {
    m_fuelSavePerBilKm = fuelSavePerBilKm;
}

float GravityPump::getFuelSavePerBilKm() {
    return m_fuelSavePerBilKm;
}
