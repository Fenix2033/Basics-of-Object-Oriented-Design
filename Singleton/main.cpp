//
//  main.cpp
//  Singleton
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Logger.h"

int main(int argc, const char * argv[])
{
	Logger* chybky = Logger::getLogger();
	
	chybky->addError("Prave se mi pokazila nalada");
	
	chybky->storeErrors();
	// jak ho smazat?
    return 0;
}

