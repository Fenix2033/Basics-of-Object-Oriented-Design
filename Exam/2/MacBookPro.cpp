//
// Created by xkudla on 17.01.2022.
//

#include "MacBookPro.h"

void MacBookPro::setProcesor(){
    m_mac->setJmeno("MacBook Pro");
    m_mac->setProcesor(new Procesor("M1 Pro", 12, 8, 4));
}