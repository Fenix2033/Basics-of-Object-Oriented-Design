//
//  Interakce.cpp
//  Command_Interaction
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Interakce.h"

Interakce::Interakce(string popis){
	m_popis = popis;
}

string Interakce::getPopis(){
	return m_popis;
}