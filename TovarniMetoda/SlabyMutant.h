//
//  SlabyMutant.h
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __TovarniMetoda__SlabyMutant__
#define __TovarniMetoda__SlabyMutant__

#include "Mutant.h"

class SlabyMutant:public Mutant{
protected:
	int m_sila;
public:
	SlabyMutant(int sila);
	int getUtok();
};


#endif /* defined(__TovarniMetoda__SlabyMutant__) */
