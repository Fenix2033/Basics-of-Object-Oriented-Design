//
//  DocumentBuilder.h
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Builder__DocumentBuilder__
#define __Builder__DocumentBuilder__

#include <iostream>
#include "Document.h"
using namespace std;

class DocumentBuilder {
protected:
	Document* m_document;
public:
	DocumentBuilder()
	void createNewDocument();
	virtual void buildHeader() = 0;
	virtual void buildFooter() = 0;
	virtual void buildPage(string content) = 0;
	Document* getDocument();
};

#endif /* defined(__Builder__DocumentBuilder__) */
