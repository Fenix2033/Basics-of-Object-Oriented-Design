//
//  XhtmlDocumentBuilder.cpp
//  Builder
//
//  Created by David on 30.11.2020.
//  Copyright © 2020 David Prochazka. All rights reserved.
//

#include "XhtmlDocumentBuilder.hpp"

XhtmlDocumentBuilder::XhtmlDocumentBuilder(string encoding, float version){
    m_version = version;
    m_encoding = encoding;
}

void XhtmlDocumentBuilder::buildHeader(){
    m_document->addContent("<xhtml>\n");
    m_document->addContent("<header version=\""+to_string(m_version)+"\" encoding=\""+m_encoding+"\">\n");
    m_document->addContent("<body>\n");
}

void XhtmlDocumentBuilder::buildFooter(){
    m_document->addContent("</body>\n");
    m_document->addContent("</xhtml>\n");
}

void XhtmlDocumentBuilder::buildPage(string content){
    m_document->addContent("<p>"+content+"</p>");
}
