//
//  LatexDocumentBuilder.cpp
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "LatexDocumentBuilder.h"

LatexDocumentBuilder::LatexDocumentBuilder(string encoding){
	m_encoding = encoding;
}

void LatexDocumentBuilder::buildHeader(){
	m_document->addContent("\\documentclass{article}\n");
	buildEncoding();
	m_document->addContent("\\begin{document}\n");
}

void LatexDocumentBuilder::buildFooter(){
	m_document->addContent("\\end{document}\n");
}

void LatexDocumentBuilder::buildPage(string content){
	m_document->addContent("\\section{Content}\n"+content+"\n");
}

void LatexDocumentBuilder::buildEncoding(){
	m_document->addContent("\\usepackage["+m_encoding+"]{inputenc}\n");
}