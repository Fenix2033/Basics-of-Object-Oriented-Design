//
//  HardEnemyFactory.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "HardEnemyFactory.h"

Skeleton* HardEnemyFactory::getSkeleton(){
	return new SkeletonKing(20);
}

Mutant* HardEnemyFactory::getMutant(){
	return new StrongMutant(20, 10);
}