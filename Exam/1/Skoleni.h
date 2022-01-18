//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_1_SKOLENI_H
#define INC_1_SKOLENI_H
#include <string>

class Skoleni {
    std::string m_nazev;
    int m_pocetHodin;
public:
    Skoleni(std::string nazev, int pocetHodin);
    std::string getNazev();
};


#endif //INC_1_SKOLENI_H
