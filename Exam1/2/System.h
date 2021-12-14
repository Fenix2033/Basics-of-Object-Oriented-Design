//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_2_SYSTEM_H
#define INC_2_SYSTEM_H
#include <vector>
#include "Lekar.h"
#include "Zaznam.h"

class System {
    std::vector<Lekar*> m_lekary;
    std::vector<Zaznam*> m_zaznamy;
public:
    System(){};
    void pridejLekar(std::string jmeno, std::string oddeleni, std::string rodneCislo);
    Lekar* getLekar(std::string jmeno);
    Zaznam* getZaznam(std::string data);
    void pridejZaznam(std::string data, std::string popis, std::string vysetreni, Lekar* leker);
    void printInfo(std::string rodneCislo);
    ~System();
};


#endif //INC_2_SYSTEM_H
