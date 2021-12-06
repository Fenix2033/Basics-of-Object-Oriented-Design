//
//  Student.h
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __State_Student__Student__
#define __State_Student__Student__

#include <iostream>
#include "Studium.h"
#include "PrezencniStudium.h"
#include "DalkoveStudium.h"

class Student{
private:
	Studium* m_studium;
	float m_prumer;
	int m_semestrStudia;
public:
	Student(bool prezencniStudent);
	~Student();
	void setPrumer(float prumer);
	void zvysSemestrStudia();
	
	float getStipendium();
	int getPocetSemestruZdarma();

	void prejdiNaPrezencniStudium();
	void prejdiNaDalkoveStudium();
};

#endif /* defined(__State_Student__Student__) */
