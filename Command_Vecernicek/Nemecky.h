//
//  Nemecky.hpp
//  Command_Vecernicek
//
//  Created by David on 07.12.2020.
//  Copyright © 2020 David Prochazka. All rights reserved.
//

#ifndef Nemecky_hpp
#define Nemecky_hpp

#include <iostream>
#include "Pozdrav.h"
using namespace std;

class Nemecky : public Pozdrav {
public:
    void privitani();
    void rozlouceniSe();
};

#endif /* Nemecky_hpp */
