#include "SpravceZakazniku.h"

// Pozor inicializace statickych promennych musi byt v implementacnim souboru
int SpravceZakazniku::s_pocetZakazniku = 0;
vector<Zakaznik*> SpravceZakazniku::s_zakaznici = {};


vector<Zakaznik*> SpravceZakazniku::getZakaznikByJmeno(string jmenoZakaznika) {

    vector<Zakaznik*> zakazniciSDanymJmenem;
    
    /*
    for (int i=0; i<s_zakaznici.size(); i++){
        if (s_zakaznici.at(i)->getJmeno() == jmenoZakaznika){
            zakazniciSDanymJmenem.push_back(s_zakaznici.at(i));
        }
    }
     */
    
    // kapku modernejsi varianta foru ala Java/C#
    for (Zakaznik* zakaznik : s_zakaznici){
        if (zakaznik->getJmeno() == jmenoZakaznika){
            zakazniciSDanymJmenem.push_back(zakaznik);
        }
    }
    
    return zakazniciSDanymJmenem;
}


Zakaznik* SpravceZakazniku::getZakaznikById(int id) {
    
    for (Zakaznik* zakaznik : s_zakaznici){
        if (zakaznik->getId() == id){
            return zakaznik;
        }
    }
    
    return nullptr;
}

Zakaznik* SpravceZakazniku::createZakaznik(string jmenoZakaznika){
    Zakaznik* novyZakaznik = new Zakaznik(jmenoZakaznika, s_pocetZakazniku);
    s_pocetZakazniku++;
    s_zakaznici.push_back(novyZakaznik);
    return novyZakaznik;
}
