//
// Created by xkudla on 10/12/2021.
//

#ifndef EXAMZOO1_1_AMPULEDIRECTOR_H
#define EXAMZOO1_1_AMPULEDIRECTOR_H
#include <iostream>
#include "Ampule.h"
#include "NanitChripkovy.h"

class AmpuleDirector {
    Ampule* m_builder;
public:
    AmpuleDirector(Ampule* builder);
    void setNanitBuilder(Ampule* builder);
    Ampule* getAmpule();
};


#endif //EXAMZOO1_1_AMPULEDIRECTOR_H
