//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_2_ZAZNAM_H
#define INC_2_ZAZNAM_H
#include <iostream>
#include "Lekar.h"

class Zaznam {
    std::string m_data;
    std::string m_popis;
    std::string m_vysetreni;
    Lekar* m_lekar;
public:
    Zaznam(std::string data, std::string popis, std::string vysetreni, Lekar* leker);
    std::string getPopis();
};


#endif //INC_2_ZAZNAM_H
