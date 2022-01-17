//
// Created by xkudla on 10/12/2021.
//

#include "AmpuleDirector.h"

AmpuleDirector::AmpuleDirector(Ampule* builder) {
    m_builder = builder;
}

void AmpuleDirector::setNanitBuilder(Ampule* builder){
    m_builder = builder;
}

Ampule* AmpuleDirector::getAmpule(){
    return m_builder;
}