//
//  Had.h
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Dekorator_Logovani__Had__
#define __Dekorator_Logovani__Had__

#include <iostream>
#include "Postava.h"
using namespace std;

class Had:public Postava{
	int m_jedovatost;
	
public:
	Had (int jedovatost);
	void vypocitejZraneni(IPostava* nepritel);
	int getUtocneCislo();
};

#endif /* defined(__Dekorator_Logovani__Had__) */
