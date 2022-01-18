//
// Created by xkudla on 17.01.2022.
//

#include "MacDirector.h"

MacDirector::MacDirector(MacBuilder* builder){
    m_builder = builder;
}

void MacDirector::setMacBuilder(MacBuilder* builder){
    m_builder = builder;
}

Mac* MacDirector::constructMac(int unikatneCislo, int pamet){
    m_builder->creatMac(unikatneCislo, pamet);
    m_builder->setProcesor();
    return m_builder->getMac();
}