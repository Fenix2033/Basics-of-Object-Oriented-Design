//
//  Stav.h
//  Stav_Princ
//
//  Created by David Prochazka on 03.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Stav_Princ__Stav__
#define __Stav_Princ__Stav__

#include <iostream>

class Stav{
public:
	virtual void privitej() = 0;
	virtual void rozlucSe() = 0;
	virtual ~Stav(){};
};

#endif /* defined(__Stav_Princ__Stav__) */
