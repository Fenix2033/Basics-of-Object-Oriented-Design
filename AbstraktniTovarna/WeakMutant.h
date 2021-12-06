//
//  SlabyMutant.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__SlabyMutant__
#define __AbstraktniTovarna__SlabyMutant__

#include "Mutant.h"

class WeakMutant:public Mutant{
protected:
	int m_sila;
public:
	WeakMutant(int sila);
	int getAttack();
};


#endif /* defined(__AbstraktniTovarna__SlabyMutant__) */
