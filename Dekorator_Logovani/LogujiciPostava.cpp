//
//  LogujiciPostava.cpp
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "LogujiciPostava.h"

LogujiciPostava::LogujiciPostava (IPostava* obalenaPostava){
	m_postava = obalenaPostava;
}

void LogujiciPostava::vypocitejZraneni(IPostava* nepritel){
	ofstream out("log.txt");
	if (!out.is_open()){
		cerr << "Nelze logovat! Soubor nelze vytvorit" << endl;
	} else {
		out << "Prave zacal boj" << endl;
		out << "Nepritel ma ut.: " << nepritel->getUtocneCislo() << endl;
		out << "Branici se ma ut.: " << m_postava->getUtocneCislo() << endl;
	}
	m_postava->vypocitejZraneni(nepritel);
}

// Jak kod vylepsit, abych neopakoval neustale to otevreni a test?
int LogujiciPostava::getUtocneCislo(){
	ofstream out("log.txt");
	if (!out.is_open()){
		cerr << "Nelze logovat! Soubor nelze vytvorit" << endl;
	} else {
		cout << "Vraci se utocne cislo" << endl;
	}
	return m_postava->getUtocneCislo();
}

int LogujiciPostava::getZdravi(){
	return m_postava->getZdravi();
}