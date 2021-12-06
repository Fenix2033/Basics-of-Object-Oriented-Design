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
#include "PokrocileKradeni.h"

int main(int argc, const char * argv[])
{
	Osoba* artus = new Osoba("Artus", 20);
	Osoba* lancelot = new Osoba("Lancelot", 20);
	lancelot->seberPredmet(new Predmet("Boty"));
    lancelot->seberPredmet(new Predmet("Plast"));
    lancelot->seberPredmet(new Predmet("Mec"));
    lancelot->seberPredmet(new Predmet("Dyka"));

    
	artus->naucInterakci(new Bojuj("boj"));
	artus->naucInterakci(new Ukradni("kradez"));
    artus->naucInterakci(new PokrocileKradeni("pokrocila kradez"));
	
	artus->interaguj(lancelot);
	//artus->interaguj(lancelot);
	
	delete artus;
	delete lancelot;
    return 0;
}

