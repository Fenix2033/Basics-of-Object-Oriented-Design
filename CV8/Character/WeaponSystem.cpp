//
// Created by xzejda on 04.11.2021.
//

#include "WeaponSystem.h"

WeaponSystem::WeaponSystem(int numberOfProjectilesPerSecond,
                           float demagePerProjectile) {
    m_demagePerProjectile = demagePerProjectile;
    m_numOfProjectilesPerSeconds = numberOfProjectilesPerSecond;
}

float WeaponSystem::getDemagePerSecond() {
    return m_demagePerProjectile * m_numOfProjectilesPerSeconds;
}
