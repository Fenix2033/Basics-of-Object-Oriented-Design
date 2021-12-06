//
//  SkeletonKing.cpp
//  AbstraktniTovarna
//
//  Created by David Prochazka on 30.11.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "SkeletonKing.h"

SkeletonKing::SkeletonKing(int silaDechu){
	m_silaDechu = silaDechu;
}

int SkeletonKing::getAttack(){
	return m_silaDechu;
}