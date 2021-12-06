//
//  main.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "DocumentDirector.h"
#include "LatexDocumentBuilder.h"
#include "XmlDocumentBuilder.h"
#include "XhtmlDocumentBuilder.hpp"

int main(int argc, const char * argv[])
{
	DocumentDirector* director
		= new DocumentDirector(new XhtmlDocumentBuilder("utf8", 1.2));
    //director->setDocumentBuilder(new ...)
	Document* helloPage = director->constructDocument("Hello World");

	cout << helloPage->getContent() << endl;
	
	delete director;
	delete helloPage;
    return 0;
}

