//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_1_NANITDIRECTOR_H
#define EXAMZOO1_1_NANITDIRECTOR_H
#include <iostream>
#include "NanitBuilder.h"
#include "NanitChripkovy.h"

class NanitDirector {
    NanitBuilder* m_builder;
public:
    NanitDirector(NanitBuilder* builder);
    void setNanitBuilder(NanitBuilder* builder);
    NanitChripkovy* constructNanit(std::string oznaceni, Ambule* vyzbroj);
};


#endif //EXAMZOO1_1_NANITDIRECTOR_H
