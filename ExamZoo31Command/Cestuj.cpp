//
// Created by xkudla on 14/12/2021.
//

#include "Cestuj.h"

Cestuj::Cestuj(std::string popis): PolozkaMenu(popis){}

void Cestuj::prikaz(Hrdina* hrdina){
    hrdina->setPenize(-50);
    hrdina->setZkusenosti(25);
}