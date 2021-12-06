//
//  main.cpp
//  Dekorator_Logovani
//
//  Created by David Prochazka on 04.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Hrdina.h"
#include "Had.h"
#include "VypisujiciPostava.h"
#include "LogujiciPostava.h"

int main(int argc, const char * argv[])
{
	//--------------
	// puvodni kod
	Hrdina* artus = new Hrdina("Artus", 30);
	Had* macek = new Had(20);
	
	artus->vypocitejZraneni(macek);
	macek->vypocitejZraneni(artus);
	
	//--------------
	// obaleny kod
	VypisujiciPostava* obalenyArtus = new VypisujiciPostava(artus);
	VypisujiciPostava* obalenyMacek = new VypisujiciPostava(macek);
	
	LogujiciPostava* logujiciArtus = new LogujiciPostava(obalenyArtus);
	
	obalenyArtus->vypocitejZraneni(macek);
	obalenyMacek->vypocitejZraneni(artus);
	
	delete obalenyArtus;
	delete obalenyMacek;
	// a muzeme obalovat dale do logovani...
	//--------------
	
	delete macek;
	delete artus;
    return 0;
}

