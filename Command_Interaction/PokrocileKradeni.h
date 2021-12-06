//
//  PokrocileKradeni.hpp
//  Command_Interaction
//
//  Created by David on 07.12.2020.
//  Copyright © 2020 David Prochazka. All rights reserved.
//

#ifndef PokrocileKradeni_hpp
#define PokrocileKradeni_hpp

#include "Osoba.h"
#include "Interakce.h"
#include "Predmet.h"

class PokrocileKradeni:public Interakce{
public:
    PokrocileKradeni(string popis);
    void interaguj(Osoba* kdo, Osoba* skym);
private:
    int vypisPredmetyAVratPocet(Osoba* skym);
    int getIndexKradenehoPredmetu(int pocetPredmetu);

};

#endif /* PokrocileKradeni_hpp */
