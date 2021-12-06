//
//  Predmet.h
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Command_Interaction__Predmet__
#define __Command_Interaction__Predmet__

#include <iostream>
using namespace std;

struct Predmet{
	string jmeno;
	
	Predmet(){
		jmeno = "";
	}
	
	Predmet(string jmeno){
		this->jmeno = jmeno;
	}
};

#endif /* defined(__Command_Interaction__Predmet__) */
