//
//  main.cpp
//  Command_Vecernicek
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Vecernicek.h"
#include "Formalni.h"
#include "Neformalni.h"
#include "Nemecky.h"

int main(int argc, const char * argv[])
{
	Vecernicek* vecernicek = new Vecernicek();
	
	vecernicek->naucPozdrav(new Formalni());
    
    vecernicek->privitej();

    
    vecernicek->naucPozdrav(new Neformalni());
	
    vecernicek->privitej();
	
    vecernicek->naucPozdrav(new Nemecky());
    
    vecernicek->privitej();
    
    
	delete vecernicek;
    return 0;
}

