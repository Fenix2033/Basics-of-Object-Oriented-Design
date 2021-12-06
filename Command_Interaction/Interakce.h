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
	virtual void interaguj(Osoba* kdo, Osoba* skym) = 0;
	string getPopis();
};


#endif /* defined(__Command_Interaction__Interakce__) */
