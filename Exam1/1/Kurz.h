//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_1_KURZ_H
#define INC_1_KURZ_H

#include "Student.h"

class Kurz {
public:
    virtual Student* vytvorStudent(std::string jmeno, int pocetKreditu) = 0;
    virtual Kurz* vytvorKurz() = 0;
};


#endif //INC_1_KURZ_H
