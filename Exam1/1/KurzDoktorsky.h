//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_1_KURZDOKTORSKY_H
#define INC_1_KURZDOKTORSKY_H
#include "Kurz.h"

class KurzDoktorsky:public Kurz {
    int m_minimalniPocetKreditu;
    std::string m_typStudia;
public:
    KurzDoktorsky();
    Student* vytvorStudent(std::string jmeno, int pocetKreditu);
    Kurz* vytvorKurz();
};



#endif //INC_1_KURZDOKTORSKY_H
