//
//  DocumentBuilder.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "DocumentBuilder.h"

DocumentBuilder::DocumentBuilder(){
	m_document = nullptr;
}

void DocumentBuilder::createNewDocument(){
	m_document = new Document;
}

Document* DocumentBuilder::getDocument(){
	return m_document;
}