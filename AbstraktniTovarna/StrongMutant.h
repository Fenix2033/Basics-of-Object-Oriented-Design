//
//  SilnyMutant.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__SilnyMutant__
#define __AbstraktniTovarna__SilnyMutant__

#include "Mutant.h"

class StrongMutant:public Mutant{
protected:
	int m_sila;
	int m_jedovatost;
public:
	StrongMutant(int sila, int jedovatost);
	int getAttack();
};

#endif /* defined(__AbstraktniTovarna__SilnyMutant__) */
