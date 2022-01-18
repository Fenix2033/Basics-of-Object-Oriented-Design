//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_1_CERTIFIKACE_H
#define INC_1_CERTIFIKACE_H
#include <string>
#include <vector>
#include "Skoleni.h"

class Certifikace {
    std::string m_jmeno;
    int m_pocetSkoleni ;
    std::vector<Skoleni*> m_skoleni;
public:
    Certifikace(std::string jmeno, int pocetSkoleni);
    int getPocetSkoleni();
    std::string getJmeno();
    void addSkoleni(Skoleni* skoleni);
    std::vector<Skoleni*> getSkoleni();
};


#endif //INC_1_CERTIFIKACE_H
