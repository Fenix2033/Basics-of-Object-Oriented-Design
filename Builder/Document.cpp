//
//  Document.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Document.h"

Document::Document(){
	m_content = "";
}

void Document::addContent(string newContent){
	m_content += newContent;
}

string Document::getContent(){
	return m_content;
};