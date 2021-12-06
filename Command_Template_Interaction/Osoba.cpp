//
//  Osoba.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Osoba.h"
#include "Interakce.h"

Osoba::Osoba(string jmeno, int sila){
	m_jmeno = jmeno;
	m_sila = sila;
	m_zdravi = 100;
}

//-----------------------------------
// Sprava veci
//-----------------------------------

void Osoba::seberPredmet(Predmet* predmet){
	m_predmety.push_back(predmet);
}

Predmet* Osoba::getPredmet(int index){
	if ((index >= 0) && (index < m_predmety.size())){
		return m_predmety.at(index);
	} else {
		return nullptr;
	}
}

void Osoba::odeberPredmet(int index){
	if ((index >= 0) && (index < m_predmety.size())){
		m_predmety.erase(m_predmety.begin()+index);
	}
}

//-----------------------------------
// Sprava interakci
//-----------------------------------

void Osoba::interaguj(Osoba* druhaOsoba){
	vypisInterakce();
	int rozhodnuti = ziskejRozhodnuti();
	m_interakce.at(rozhodnuti)->interaguj(this, druhaOsoba);
}

void Osoba::naucInterakci(Interakce* interakce){
	m_interakce.push_back(interakce);
}

void Osoba::vypisInterakce(){
	for (unsigned int i=0; i<m_interakce.size(); i++){
		cout << "[" << i << "] " << m_interakce.at(i)->getPopis() << endl;
	}
}

int Osoba::ziskejRozhodnuti(){
	unsigned int rozhodnuti = 0; // unsigned - neznamenkovy - pouze prirozene cislo
	cout << "Zadej cislo jednani, ktere chces provest: ";
	cin >> rozhodnuti;
	
	if (rozhodnuti<m_interakce.size()){
		return rozhodnuti;
	} else {
		return ziskejRozhodnuti();
	}
}

//-----------------------------------
// Bezne getry
//-----------------------------------
void Osoba::uberZdravi(int kolik){
	if (m_zdravi > kolik){
		m_zdravi -= kolik;
	} else {
		m_zdravi = 0;
	}
}

int Osoba::getSila(){
	return m_sila;
}

int Osoba::getZdravi(){
	return m_zdravi;
}

string Osoba::getJmeno(){
	return m_jmeno;
}