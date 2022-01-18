//
// Created by xkudla on 17.01.2022.
//

#include "MacBookMax.h"

void MacBookMax::setProcesor(){
    m_mac->setJmeno("MacBook Max");
    m_mac->setProcesor(new Procesor("M1 Pro", 12, 12, 4));
}