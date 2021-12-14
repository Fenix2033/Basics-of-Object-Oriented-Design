//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_2_LEKAR_H
#define INC_2_LEKAR_H
#include <iostream>

class Lekar {
    std::string m_jmeno;
    std::string m_oddeleni;
    std::string m_rodneCislo;
public:
    Lekar(std::string jmeno, std::string oddeleni, std::string rodneCislo);
    std::string getName();
    std::string getRodneCislo();
};


#endif //INC_2_LEKAR_H
