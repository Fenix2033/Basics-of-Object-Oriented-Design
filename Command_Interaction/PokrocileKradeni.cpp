//
//  PokrocileKradeni.cpp
//  Command_Interaction
//
//  Created by David on 07.12.2020.
//  Copyright © 2020 David Prochazka. All rights reserved.
//

#include "PokrocileKradeni.h"


PokrocileKradeni::PokrocileKradeni(string popis):Interakce(popis){
    
}

void PokrocileKradeni::interaguj(Osoba* kdo, Osoba* skym){
    cout << "Zacina pokrocila kradez zbozi postavou " << kdo->getJmeno() << " od " << skym->getJmeno() << endl;
    
    int pocetPredmetu = vypisPredmetyAVratPocet(skym);
    
    // co chces ukrast
    int indexKradenehoPredmetu = getIndexKradenehoPredmetu(pocetPredmetu);
    
    // co se bude krast - ziskani ukazatele
    Predmet* kradenyPredmet = skym->getPredmet(indexKradenehoPredmetu);
    
    // zlepsena verze muze umoznit vyber predmetu
    kdo->seberPredmet(kradenyPredmet);
    skym->odeberPredmet(indexKradenehoPredmetu);
    cout << "Ukradeno: " << kradenyPredmet->jmeno << endl;
    
    cout << "Konci kradez zbozi postavou " << kdo->getJmeno() << " od " << skym->getJmeno() << endl;
}

int PokrocileKradeni::vypisPredmetyAVratPocet(Osoba* skym){
    int kolikatyPredmet = 0;
    Predmet* neco = skym->getPredmet(kolikatyPredmet);
    
    // vypise seznam predmetu
    while(neco != nullptr){
        cout << "[" << kolikatyPredmet << "] " << neco->jmeno << endl;
        kolikatyPredmet++;
        neco = skym->getPredmet(kolikatyPredmet);
    }
    
    return kolikatyPredmet;
}

int PokrocileKradeni::getIndexKradenehoPredmetu(int pocetPredmetu){
    cout << "Zadej cislo predmetu: ";
    int kteryPredmetKrast = 0;
    cin >> kteryPredmetKrast;

    if (kteryPredmetKrast >= pocetPredmetu){
        return getIndexKradenehoPredmetu(pocetPredmetu);
    } else {
        return kteryPredmetKrast;
    }
}
