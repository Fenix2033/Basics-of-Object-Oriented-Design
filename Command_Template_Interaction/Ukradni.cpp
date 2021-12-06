//
//  Ukradni.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Ukradni.h"

Ukradni::Ukradni(string popis):Interakce(popis){
	
}

void Ukradni::provedInterakci(Osoba* kdo, Osoba* skym){
	// zlepsena verze muze umoznit vyber predmetu
	Predmet* neco = skym->getPredmet(0);
	if (neco != nullptr){
		kdo->seberPredmet(neco);
		skym->odeberPredmet(0);
		cout << "Ukradeno: " << neco->jmeno << endl;
	} else {
		cout << "Neni nic k ukradeni" << endl;
	}
}
