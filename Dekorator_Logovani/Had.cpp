//
//  Had.cpp
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Had.h"

Had::Had (int jedovatost){
	m_jedovatost = jedovatost;
	m_zdravi = 100;
}

void Had::vypocitejZraneni(IPostava* nepritel){
	m_zdravi -= nepritel->getUtocneCislo();
}

int Had::getUtocneCislo(){
	return m_jedovatost;
}