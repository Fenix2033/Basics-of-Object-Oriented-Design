//
//  IPostava.h
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef Dekorator_Logovani_IPostava_h
#define Dekorator_Logovani_IPostava_h

class IPostava{
public:
	virtual void vypocitejZraneni(IPostava* nepritel) = 0;
	virtual int getUtocneCislo() = 0;
	virtual int getZdravi() = 0;
};

#endif
