//
// Created by xkudla on 17.01.2022.
//

#include "MacBook.h"

void MacBook::setProcesor(){
    m_mac->setJmeno("MacBook");
    m_mac->setProcesor(new Procesor("M1", 8, 8, 4));
}