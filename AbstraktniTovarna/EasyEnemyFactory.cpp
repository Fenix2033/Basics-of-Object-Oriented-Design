//
//  EasyEnemyFactory.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "EasyEnemyFactory.h"

Skeleton* EasyEnemyFactory::getSkeleton(){
	return new SkeletonSoldier(15);
}

Mutant* EasyEnemyFactory::getMutant(){
	return new WeakMutant(15);
}
