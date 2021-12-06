//
//  EasyEnemyFactory.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__EasyEnemyFactory__
#define __AbstraktniTovarna__EasyEnemyFactory__

#include "EnemyFactory.h"
#include "SkeletonSoldier.h"
#include "WeakMutant.h"

class EasyEnemyFactory:public EnemyFactory{
public:
	Skeleton* getSkeleton();
	Mutant* getMutant();
};

#endif /* defined(__AbstraktniTovarna__EasyEnemyFactory__) */
