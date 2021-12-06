//
//  EnemyFactory.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__EnemyFactory__
#define __AbstraktniTovarna__EnemyFactory__

#include "Skeleton.h"
#include "Mutant.h"

class EnemyFactory{
public:
	virtual Skeleton* getSkeleton() = 0;
	virtual Mutant* getMutant() = 0;
};

#endif /* defined(__AbstraktniTovarna__EnemyFactory__) */
