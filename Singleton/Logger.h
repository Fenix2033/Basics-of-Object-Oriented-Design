//
//  Logger.h
//  Singleton
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#ifndef __Singleton__Logger__
#define __Singleton__Logger__

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Logger{
	static Logger* s_instance;
    
	vector<string> m_errors;
public:
	static Logger* getLogger();
	void addError(string error);
	void storeErrors();

private:
	Logger();
	void loadErrors();
};


#endif /* defined(__Singleton__Logger__) */
