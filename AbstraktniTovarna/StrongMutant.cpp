//
//  SilnyMutant.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "StrongMutant.h"

StrongMutant::StrongMutant(int sila, int jedovatost){
	m_sila = sila;
	m_jedovatost = jedovatost;
}

int StrongMutant::getAttack(){
	return m_sila+m_jedovatost;
}