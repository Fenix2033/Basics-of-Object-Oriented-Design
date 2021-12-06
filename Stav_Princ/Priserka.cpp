//
//  Priserka.cpp
//  Stav_Princ
//
//  Created by David Prochazka on 03.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Priserka.h"

Priserka::Priserka(){
	m_stav = new Zaba();
}

void Priserka::polibek(){
	delete m_stav;
	m_stav = new Princ();
}

void Priserka::privitej(){
	m_stav->privitej();
}

void Priserka::rozlucSe(){
	m_stav->rozlucSe();
}

Priserka::~Priserka(){
	delete m_stav;
}