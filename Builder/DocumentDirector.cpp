//
//  DocumentDirector.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "DocumentDirector.h"

DocumentDirector::DocumentDirector(DocumentBuilder* builder){
	m_builder = builder;
}

void DocumentDirector::setDocumentBuilder(DocumentBuilder* builder) {
	m_builder = builder;
}

Document* DocumentDirector::constructDocument(string text){
	m_builder->createNewDocument();
	m_builder->buildHeader();
	m_builder->buildPage(text);
	m_builder->buildFooter();
	
	return m_builder->getDocument();
}