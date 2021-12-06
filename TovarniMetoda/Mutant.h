//
//  Mutant.h
//  TovarniMetoda
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __TovarniMetoda__Mutant__
#define __TovarniMetoda__Mutant__

#include <iostream>
using namespace std;

class Mutant{
public:
	virtual	int getUtok() = 0;
	static Mutant* getMutant(int level);
	virtual ~Mutant(){};
protected:
	Mutant(){};
};

#endif /* defined(__TovarniMetoda__Mutant__) */
