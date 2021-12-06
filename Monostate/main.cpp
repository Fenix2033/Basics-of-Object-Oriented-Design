//
//  main.cpp
//  Monostate
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Zakaznik.h"
#include "SpravceZakazniku.h"

int main(int argc, const char * argv[])
{
	Zakaznik* novyZakaznik = SpravceZakazniku::createZakaznik("Pepa");
	
	Zakaznik* kupec = SpravceZakazniku::getZakaznikById(0);
    std::vector<Zakaznik*> zakazniciPepa = SpravceZakazniku::getZakaznikByJmeno("Pepa");
	cout << "Jmeno nalezeneho zakaznika: " << kupec->getJmeno() << endl;
	
    return 0;
}

