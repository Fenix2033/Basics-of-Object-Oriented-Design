//
// Created by xzejda on 04.11.2021.
//

#ifndef CV7_WEAPONSYSTEM_H
#define CV7_WEAPONSYSTEM_H


class WeaponSystem {
    int m_numOfProjectilesPerSeconds;
    float m_demagePerProjectile;
public:
    WeaponSystem(int numberOfProjectilesPerProjectile,
                 float demagePerProjectile);
    float getDemagePerSecond();
};


#endif //CV7_WEAPONSYSTEM_H
