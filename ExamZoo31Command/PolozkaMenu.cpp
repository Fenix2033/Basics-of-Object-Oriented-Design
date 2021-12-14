//
// Created by xkudla on 14/12/2021.
//

#include "PolozkaMenu.h"

PolozkaMenu::PolozkaMenu(std::string popis){
    m_popis = popis;
}

std::string PolozkaMenu::getPopis(){
    return m_popis;
}