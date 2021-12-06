//
//  Mutant.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__Mutant__
#define __AbstraktniTovarna__Mutant__

class Mutant{
public:
	virtual	int getAttack() = 0;
	virtual ~Mutant(){};
	Mutant(){}
};

#endif /* defined(__AbstraktniTovarna__Mutant__) */
