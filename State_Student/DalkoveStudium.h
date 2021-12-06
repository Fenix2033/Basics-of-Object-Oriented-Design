//
//  DalkoveStudium.h
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __State_Student__DalkoveStudium__
#define __State_Student__DalkoveStudium__

#include "Studium.h"

class DalkoveStudium : public Studium{
public:
	float getStipendium(float prumer);
	int getPocetLetZdarma(int semestrStudia);
};

#endif /* defined(__State_Student__DalkoveStudium__) */
