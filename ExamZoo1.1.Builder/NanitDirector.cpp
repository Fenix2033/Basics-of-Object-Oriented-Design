//
// Created by xkudla on 10/12/2021.
//

#include "NanitDirector.h"

NanitDirector::NanitDirector(NanitBuilder* builder) {
    m_builder = builder;
}

void NanitDirector::setNanitBuilder(NanitBuilder* builder){
    m_builder = builder;
}

NanitChripkovy* NanitDirector::constructNanit(std::string oznaceni, Ambule* vyzbroj){
    m_builder->createNewNanit(oznaceni, vyzbroj);
}