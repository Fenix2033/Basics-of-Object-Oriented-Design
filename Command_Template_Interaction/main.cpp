//
//  main.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Osoba.h"
#include "Bojuj.h"
#include "Ukradni.h"

int main(int argc, const char * argv[])
{
	Osoba* artus = new Osoba("Artus", 30);
	Osoba* lancelot = new Osoba("Lancelot", 20);
	lancelot->seberPredmet(new Predmet("Boty"));
	
	artus->naucInterakci(new Bojuj("boj"));
	artus->naucInterakci(new Ukradni("kradez"));
	
	artus->interaguj(lancelot);
	
	delete artus;
	delete lancelot;
    return 0;
}

