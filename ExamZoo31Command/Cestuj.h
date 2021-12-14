//
// Created by xkudla on 14/12/2021.
//

#ifndef EXAMZOO31COMMAND_CESTUJ_H
#define EXAMZOO31COMMAND_CESTUJ_H
#include "PolozkaMenu.h"
#include "Hrdina.h"

class Cestuj: public PolozkaMenu{
public:
    Cestuj(std::string popis);
    void prikaz(Hrdina* hrdina);
};


#endif //EXAMZOO31COMMAND_CESTUJ_H
