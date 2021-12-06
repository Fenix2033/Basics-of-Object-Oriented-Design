//
//  Mutant.cpp
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Mutant.h"
// zde zcela vyjimecne includujeme jine hlavickove soubory, nez vlastni
#include "SlabyMutant.h"
#include "SilnyMutant.h"

Mutant* Mutant::getMutant(int level){
	switch(level){
		case 1:
			return new SlabyMutant(10);
			break;
		case 2:
			return new SilnyMutant(10, 10);
			break;
		default:
			cerr << "Tato uroven neni podporovana" << endl;
			return nullptr;
			break;
	}
}