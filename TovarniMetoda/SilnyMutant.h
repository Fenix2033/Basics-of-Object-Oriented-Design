//
//  SilnyMutant.h
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __TovarniMetoda__SilnyMutant__
#define __TovarniMetoda__SilnyMutant__

#include "Mutant.h"

class SilnyMutant:public Mutant{
protected:
	int m_sila;
	int m_jedovatost;
public:
	SilnyMutant(int sila, int jedovatost);
	int getUtok();
};

#endif /* defined(__TovarniMetoda__SilnyMutant__) */
