//
//  Student.cpp
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Student.h"

Student::Student(bool prezencniStudent){
	m_semestrStudia = 1;
	m_prumer = 0.0;
	if (prezencniStudent){
		m_studium = new PrezencniStudium();
	} else {
		m_studium = new DalkoveStudium();
	}
}

Student::~Student(){
	delete m_studium;
}

void Student::setPrumer(float prumer){
	m_prumer = prumer;
}

void Student::zvysSemestrStudia(){
	m_semestrStudia++;
}

float Student::getStipendium(){
	return m_studium->getStipendium(m_prumer);
}

int Student::getPocetSemestruZdarma(){
	return m_studium->getPocetLetZdarma(m_semestrStudia);
}

void Student::prejdiNaPrezencniStudium(){
	delete m_studium;
	m_studium = new PrezencniStudium();
}

void Student::prejdiNaDalkoveStudium(){
	delete m_studium;
	m_studium = new DalkoveStudium();
}
