//
//  LatexDocumentBuilder.h
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Builder__LatexDocumentBuilder__
#define __Builder__LatexDocumentBuilder__

#include <iostream>
#include "DocumentBuilder.h"
using namespace std;

class LatexDocumentBuilder:public DocumentBuilder {
	string m_encoding;
	
public:
	LatexDocumentBuilder(string encoding);
	void buildHeader();
	void buildFooter();
	void buildPage(string content);
private:
	void buildEncoding();
};

#endif /* defined(__Builder__LatexDocumentBuilder__) */
