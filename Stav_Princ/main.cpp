//
//  main.cpp
//  Stav_Princ
//
//  Created by David Prochazka on 03.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Priserka.h"


int main(int argc, const char * argv[])
{
    Priserka* pepa = new Priserka();
    pepa->privitej();
    pepa->polibek();
    pepa->privitej();
    
    delete pepa;
    return 0;
}

