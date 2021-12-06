//
//  Princ.h
//  Stav_Princ
//
//  Created by David Prochazka on 03.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Stav_Princ__Princ__
#define __Stav_Princ__Princ__

#include <iostream>
#include "Stav.h"
using namespace std;

class Princ:public Stav{
public:
	void privitej();
	void rozlucSe();
};

#endif /* defined(__Stav_Princ__Princ__) */
