//
//  SkeletonKing.h
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __AbstraktniTovarna__SkeletonKing__
#define __AbstraktniTovarna__SkeletonKing__

#include "Skeleton.h"

class SkeletonKing:public Skeleton{
	int m_silaDechu;
public:
	SkeletonKing(int silaDechu);
	int getAttack();
};


#endif /* defined(__AbstraktniTovarna__SkeletonKing__) */
