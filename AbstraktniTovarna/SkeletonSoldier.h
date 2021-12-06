//
//  SkeletonSoldier.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__SkeletonSoldier__
#define __AbstraktniTovarna__SkeletonSoldier__

#include "Skeleton.h"

class SkeletonSoldier:public Skeleton{
	int m_silaKosti;
public:
	SkeletonSoldier(int silaKosti);
	int getAttack();
};


#endif /* defined(__AbstraktniTovarna__SkeletonSoldier__) */
