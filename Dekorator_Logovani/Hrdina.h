//
//  Hrdina.h
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Dekorator_Logovani__Hrdina__
#define __Dekorator_Logovani__Hrdina__

#include <iostream>
#include "Postava.h"
using namespace std;

class Hrdina:public Postava{
	string m_jmeno;
	int m_sila;
	
public:
	Hrdina (string jmeno, int sila);
	void vypocitejZraneni(IPostava* nepritel);
	int getUtocneCislo();
};

#endif /* defined(__Dekorator_Logovani__Hrdina__) */
