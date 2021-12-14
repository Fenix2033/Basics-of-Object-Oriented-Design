//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_1_KURZMAGISTERSKY_H
#define INC_1_KURZMAGISTERSKY_H
#include "Kurz.h"

class KurzMagistersky:public Kurz {
    int m_minimalniPocetKreditu;
    std::string m_typStudia;
public:
    KurzMagistersky();
    Student* vytvorStudent(std::string jmeno, int pocetKreditu);
};


#endif //INC_1_KURZMAGISTERSKY_H
