//
//  Priserka.h
//  Stav_Princ
//
//  Created by David Prochazka on 03.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Stav_Princ__Priserka__
#define __Stav_Princ__Priserka__

#include <iostream>
#include "Stav.h"
#include "Zaba.h"
#include "Princ.h"
using namespace std;

class Priserka{
	Stav* m_stav;
public:
	Priserka();
	void polibek();
	void privitej();
	void rozlucSe();
	~Priserka();
};

#endif /* defined(__Stav_Princ__Priserka__) */
