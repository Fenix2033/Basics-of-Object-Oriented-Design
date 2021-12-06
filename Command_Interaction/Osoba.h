//
//  Osoba.h
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Command_Interaction__Osoba__
#define __Command_Interaction__Osoba__

#include <vector>
#include <iostream>
#include "Predmet.h"
using namespace std;

// Protoze Osoba musi obsahovat interakce, ale interakce potrebuje take
// znat osobu, musime resit krizovou vazbu. V tomto pripade ani nestaci
// dat include az do implementacniho souboru, protoze druha trida se
// vyskytuje uz v hlavicce. Proto musime udelat tzv. preddeklaraci.
// (Bude existovat trida Interakce, pozdeji ti ji nekdo nadefinuje.)
class Interakce;

class Osoba{
private:
	vector<Predmet*> m_predmety;
	vector<Interakce*> m_interakce;
	int m_sila;
	int m_zdravi;
	string m_jmeno;
public:
	Osoba(string jmeno, int sila);
	
	void interaguj(Osoba* druhaOsoba);
	void naucInterakci(Interakce* interakce);

	void seberPredmet(Predmet* predmet);
	Predmet* getPredmet(int index);
	void odeberPredmet(int index);
	
	void uberZdravi(int kolik);
	int getSila();
	int getZdravi();
	string getJmeno();
	
private:
	void vypisInterakce();
	int ziskejRozhodnuti();
	
};

#endif /* defined(__Command_Interaction__Osoba__) */
