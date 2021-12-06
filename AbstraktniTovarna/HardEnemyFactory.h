//
//  HardEnemyFactory.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__HardEnemyFactory__
#define __AbstraktniTovarna__HardEnemyFactory__

#include "EnemyFactory.h"
#include "SkeletonKing.h"
#include "StrongMutant.h"


class HardEnemyFactory:public EnemyFactory{
public:
	Skeleton* getSkeleton();
	Mutant* getMutant();
};

#endif /* defined(__AbstraktniTovarna__HardEnemyFactory__) */
