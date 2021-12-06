//
//  XmlDocumentBuilder.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "XmlDocumentBuilder.h"

void XmlDocumentBuilder::buildHeader(){
	m_document->addContent("<xml>\n");
}

void XmlDocumentBuilder::buildFooter(){
	m_document->addContent("</xml>\n");
}

void XmlDocumentBuilder::buildPage(string content){
	m_document->addContent("<content>\n"+content+"\n<content>\n");
}
