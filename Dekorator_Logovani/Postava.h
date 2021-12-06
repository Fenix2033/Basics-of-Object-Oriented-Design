//
//  Postava.h
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Dekorator_Logovani__Postava__
#define __Dekorator_Logovani__Postava__

#include "IPostava.h"

class Postava:public IPostava{
protected:
	int m_zdravi;
	
public:
	virtual void vypocitejZraneni(IPostava* nepritel) = 0;
	virtual int getUtocneCislo() = 0;
	int getZdravi();
};

#endif /* defined(__Dekorator_Logovani__Postava__) */
