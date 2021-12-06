//
//  Bojuj.h
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Command_Interaction__Bojuj__
#define __Command_Interaction__Bojuj__

#include "Osoba.h"
#include "Interakce.h"

class Bojuj:public Interakce{
public:
	Bojuj(string popis);
	void interaguj(Osoba* kdo, Osoba* skym);
};

#endif /* defined(__Command_Interaction__Bojuj__) */
