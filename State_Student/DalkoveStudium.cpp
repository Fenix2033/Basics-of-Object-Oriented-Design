//
//  DalkoveStudium.cpp
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "DalkoveStudium.h"

float DalkoveStudium::getStipendium(float prumer){
	float koeficientZnamky = 4.0-prumer;
	return koeficientZnamky*100;
}

// dalkovy student si plati kazdy semestr
int DalkoveStudium::getPocetLetZdarma(int semestrStudia){
	return 0;
}