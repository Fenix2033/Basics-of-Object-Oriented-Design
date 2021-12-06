//
//  SilnyMutant.cpp
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "SilnyMutant.h"

SilnyMutant::SilnyMutant(int sila, int jedovatost){
	m_sila = sila;
	m_jedovatost = jedovatost;
}

int SilnyMutant::getUtok(){
	return m_sila+m_jedovatost;
}