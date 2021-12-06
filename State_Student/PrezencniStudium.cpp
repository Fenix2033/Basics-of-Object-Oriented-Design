//
//  PrezencniStudium.cpp
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "PrezencniStudium.h"

float PrezencniStudium::getStipendium(float prumer){
	float koeficientZnamky = 4.0-prumer;
	return koeficientZnamky*1000;
}

int PrezencniStudium::getPocetLetZdarma(int semestrStudia){
	int kolikSemestruZbyva = 6-semestrStudia;
	
	if (kolikSemestruZbyva < 0){
		return 0;
	} else {
		return kolikSemestruZbyva;
	}
}