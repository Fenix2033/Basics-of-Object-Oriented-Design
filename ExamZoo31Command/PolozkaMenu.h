//
// Created by xkudla on 14/12/2021.
//

#ifndef EXAMZOO31COMMAND_POLOZKAMENU_H
#define EXAMZOO31COMMAND_POLOZKAMENU_H
#include <iostream>
#include "Hrdina.h"

class PolozkaMenu {
    std::string m_popis;
public:
    PolozkaMenu(std::string popis);
    virtual void prikaz(Hrdina* hrdina) = 0;
    std::string getPopis();
};


#endif //EXAMZOO31COMMAND_POLOZKAMENU_H
