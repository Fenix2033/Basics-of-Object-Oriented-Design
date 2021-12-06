//
//  Interakce.h
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Command_Interaction__Interakce__
#define __Command_Interaction__Interakce__

#include <iostream>
#include "Osoba.h"
using namespace std;

class Interakce{
	string m_popis;
public:
	Interakce(string popis);
	void interaguj(Osoba* kdo, Osoba* skym);
	string getPopis();
private:
	void vypisStavOsoby(Osoba* koho);
	void vypisPopisAkce();
	
	virtual void provedInterakci(Osoba* kdo, Osoba* skym) = 0;
	
};


#endif /* defined(__Command_Interaction__Interakce__) */
