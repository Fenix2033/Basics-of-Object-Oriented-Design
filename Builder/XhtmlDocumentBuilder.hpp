//
//  XhtmlDocumentBuilder.hpp
//  Builder
//
//  Created by David on 30.11.2020.
//  Copyright © 2020 David Prochazka. All rights reserved.
//

#ifndef XhtmlDocumentBuilder_hpp
#define XhtmlDocumentBuilder_hpp

#include <iostream>
#include "DocumentBuilder.h"
using namespace std;

class XhtmlDocumentBuilder:public DocumentBuilder {
    string m_encoding;
    float m_version;
    
public:
    XhtmlDocumentBuilder(string encoding, float version);
    void buildHeader();
    void buildFooter();
    void buildPage(string content);

};

#endif /* XhtmlDocumentBuilder_hpp */
