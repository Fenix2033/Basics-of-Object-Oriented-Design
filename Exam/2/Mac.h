//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_2_MAC_H
#define INC_2_MAC_H
#include "Procesor.h"
#include "iostream"

class Mac {
    int m_unikatneCislo;
    std::string m_jmeno;
    int m_pamet;
    Procesor* m_procesor;
public:
    Mac(int unikatneCislo, int pamet);
    void setProcesor(Procesor* procesor);
    void setJmeno(std::string jmeno);
    void printInfo();
};


#endif //INC_2_MAC_H
