//
//  Interakce.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Interakce.h"

Interakce::Interakce(string popis){
	m_popis = popis;
}

string Interakce::getPopis(){
	return m_popis;
}

void Interakce::interaguj(Osoba* kdo, Osoba* skym){
	vypisPopisAkce();
	vypisStavOsoby(kdo);
	vypisStavOsoby(skym);
	
	provedInterakci(kdo, skym);
	
	vypisStavOsoby(kdo);
	vypisStavOsoby(skym);
}

void Interakce::vypisStavOsoby(Osoba* koho){
	cout << "Jmeno: " << koho->getJmeno() <<
			", sila: " << koho->getSila() <<
			", zivot: " << koho->getZdravi() << endl;
}

void Interakce::vypisPopisAkce(){
	cout << "Akce: " << m_popis << endl;
}
