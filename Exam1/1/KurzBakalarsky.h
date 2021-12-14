//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_1_KURZBAKALARSKY_H
#define INC_1_KURZBAKALARSKY_H
#include "Kurz.h"
#include "Student.h"

class KurzBakalarsky:public Kurz{
    int m_minimalniPocetKreditu;
    std::string m_typStudia;
public:
    KurzBakalarsky();
    Student* vytvorStudent(std::string jmeno, int pocetKreditu);
    Kurz* vytvorKurz();
};


#endif //INC_1_KURZBAKALARSKY_H
