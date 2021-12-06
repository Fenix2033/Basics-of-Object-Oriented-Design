//
//  Studium.h
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __State_Student__Studium__
#define __State_Student__Studium__

class Studium{
public:
	virtual float getStipendium(float prumer) = 0;
	virtual int getPocetLetZdarma(int semestrStudia) = 0;
	virtual ~Studium(){}
};

#endif /* defined(__State_Student__Studium__) */
