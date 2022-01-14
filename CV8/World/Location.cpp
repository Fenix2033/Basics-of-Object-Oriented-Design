//
//  Location.cpp
//  Projekt do ZOO ZS2013
//
//  Created by David Prochazka on 12/6/12.
//  Copyright (c) 2012 David Prochazka. All rights reserved.
//

#include "Location.h"

world::Location::Location(std::string description){
    if (description == ""){
        std::cerr << "world::Location::Location - snazite se do popisu pole nastavit prazdnou hodnotu" << std::endl;
    }
    m_description = description;
}


std::string world::Location::getDescription(){
    return m_description;
}