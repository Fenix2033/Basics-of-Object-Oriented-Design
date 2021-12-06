//
//  SlabyMutant.cpp
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "SlabyMutant.h"

SlabyMutant::SlabyMutant(int sila){
	m_sila = sila;
}

int SlabyMutant::getUtok(){
	return m_sila;
}