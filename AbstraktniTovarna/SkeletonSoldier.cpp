//
//  SkeletonSoldier.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "SkeletonSoldier.h"

SkeletonSoldier::SkeletonSoldier(int silaKosti){
	m_silaKosti = silaKosti;
}

int SkeletonSoldier::getAttack(){
	return 10*m_silaKosti;
}