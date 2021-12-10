//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_1_NANITBUILDER_H
#define EXAMZOO1_1_NANITBUILDER_H
#include <iostream>
#include "NanitChripkovy.h"
#include "Ambule.h"



class NanitBuilder {
protected:
    NanitChripkovy* m_nanit;
public:
    NanitBuilder();
    void createNewNanit(std::string oznaceni, Ambule* vyzbroj);
    NanitChripkovy* getNanit() const;
};


#endif //EXAMZOO1_1_NANITBUILDER_H
