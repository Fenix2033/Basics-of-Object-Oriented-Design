//
//  Bojuj.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Bojuj.h"

Bojuj::Bojuj(string popis):Interakce(popis){

}

void Bojuj::provedInterakci(Osoba* kdo, Osoba* skym){
	if (kdo->getSila() > skym->getSila()){
		skym->uberZdravi(kdo->getSila()-skym->getSila());
	} else {
		kdo->uberZdravi(skym->getSila()-kdo->getSila());
	}
}