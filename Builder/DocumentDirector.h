//
//  DocumentDirector.h
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Builder__DocumentDirector__
#define __Builder__DocumentDirector__

#include <iostream>
#include "DocumentBuilder.h"
#include "Document.h"
using namespace std;

class DocumentDirector{
	DocumentBuilder* m_builder;
public:
	DocumentDirector(DocumentBuilder* builder);
	void setDocumentBuilder(DocumentBuilder* builder);
	Document* constructDocument(string text);
};

#endif /* defined(__Builder__DocumentDirector__) */
