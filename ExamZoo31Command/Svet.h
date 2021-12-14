//
// Created by xkudla on 14/12/2021.
//

#ifndef EXAMZOO31COMMAND_SVET_H
#define EXAMZOO31COMMAND_SVET_H
#include <vector>
#include <iostream>
#include "Hrdina.h"
#include "IpolozkaMenu.h"


class Svet {
    Hrdina* hrac;
    IpolozkaMenu* menu;
public:
    Svet();
    void vypisAkce();
    IpolozkaMenu* getMenu();
    void akce();
};


#endif //EXAMZOO31COMMAND_SVET_H
