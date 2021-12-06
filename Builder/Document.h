//
//  Document.h
//  Builder
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Builder__Document__
#define __Builder__Document__

#include <iostream>
using namespace std;

class Document{
	string m_content;
public:
	Document();
	void addContent(string newContent);
	string getContent();
};

#endif /* defined(__Builder__Document__) */
