//
//  XmlDocumentBuilder.h
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Builder__XmlDocumentBuilder__
#define __Builder__XmlDocumentBuilder__

#include <iostream>
#include "DocumentBuilder.h"
using namespace std;

class XmlDocumentBuilder :public DocumentBuilder{
public:
	XmlDocumentBuilder();
	void buildHeader();
	void buildFooter();
	void buildPage(string content);
	//string getSiteMap();
};

#endif /* defined(__Builder__XmlDocumentBuilder__) */
