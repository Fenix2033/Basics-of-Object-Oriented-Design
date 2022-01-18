//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_1_ZARAZENI_H
#define INC_1_ZARAZENI_H
#include <iostream>
#include <vector>
#include "Skoleni.h"
#include "Certifikace.h"

class Zarazeni {
    std::vector<Certifikace*> m_certifikace;
    std::vector<Skoleni*> m_skoleni;
    bool povinnyKurz();
public:
    Zarazeni();
    void addCertifikace(Certifikace* certifikace);
    void zarazeniSkoleni(Certifikace* certifikace, Skoleni* skoleni);
    bool dostSkoleni(Certifikace *certifikace);
    void printInfo(Skoleni* skoleni);
};


#endif //INC_1_ZARAZENI_H
