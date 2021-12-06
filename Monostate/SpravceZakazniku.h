#ifndef SPRAVCE_ZAKAZNIKU_H
#define SPRAVCE_ZAKAZNIKU_H

#include <iostream>
#include <vector>
#include "Zakaznik.h"
using namespace std;

class SpravceZakazniku {

private:
	static int s_pocetZakazniku;
	static vector<Zakaznik*> s_zakaznici;

    SpravceZakazniku(){}
public:
	static vector<Zakaznik*> getZakaznikByJmeno(string jmenoZakaznika);
	static Zakaznik* getZakaznikById(int id);
    static Zakaznik* createZakaznik(string jmenoZakaznika);
};


#endif
