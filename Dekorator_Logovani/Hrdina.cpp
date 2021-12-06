//
//  Hrdina.cpp
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Hrdina.h"

Hrdina::Hrdina (string jmeno, int sila){
	m_sila = sila;
	m_jmeno = jmeno;
	m_zdravi = 100;
}

void Hrdina::vypocitejZraneni(IPostava* nepritel){
	if (m_sila < nepritel->getUtocneCislo()){
		m_zdravi -= (nepritel->getUtocneCislo()-m_sila);
	}
}

int Hrdina::getUtocneCislo(){
	return m_sila;
}