//
//  LogujiciPostava.h
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Dekorator_Logovani__LogujiciPostava__
#define __Dekorator_Logovani__LogujiciPostava__

#include <iostream>
#include <fstream>
#include "Postava.h"
using namespace std;

class LogujiciPostava:public IPostava{
	IPostava* m_postava;
	
public:
	LogujiciPostava (IPostava* obalenaPostava);
	void vypocitejZraneni(IPostava* nepritel);
	int getUtocneCislo();
	int getZdravi();
};

#endif /* defined(__Dekorator_Logovani__LogujiciPostava__) */
