//
// Created by xkudla on 07/11/2021.
//

#include "Action.h"

Action::Action(std::string description){
    m_description = description;
}

std::string Action::getDescription(){
    return m_description;
};