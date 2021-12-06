//
//  SlabyMutant.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "WeakMutant.h"

WeakMutant::WeakMutant(int sila){
	m_sila = sila;
}

int WeakMutant::getAttack(){
	return m_sila;
}