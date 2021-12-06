//
//  VypisujiciPostava.cpp
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "VypisujiciPostava.h"

VypisujiciPostava::VypisujiciPostava (IPostava* obalenaPostava){
	m_postava = obalenaPostava;
}

void VypisujiciPostava::vypocitejZraneni(IPostava* nepritel){
	cout << "Prave zacal boj" << endl;
	cout << "Nepritel ma ut.: " << nepritel->getUtocneCislo() << endl;
	cout << "Branici se ma ut: " << m_postava->getUtocneCislo() << endl;
	m_postava->vypocitejZraneni(nepritel);
}

int VypisujiciPostava::getUtocneCislo(){
    cout << "Vraci se utocne cislo" << endl;
	return m_postava->getUtocneCislo();
}

int VypisujiciPostava::getZdravi(){
    cout << "Vraci se zdravi" << endl;
	return m_postava->getZdravi();
}
