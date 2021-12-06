//
//  Logger.cpp
//  Singleton
//
//  Created by David Prochazka on 01.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include "Logger.h"

// volim lazy inicializaci, mozna ani zadna chyba nebude
Logger* Logger::s_instance = nullptr;

Logger* Logger::getLogger(){
	if (s_instance == nullptr){
		s_instance = new Logger();
	}
	return s_instance;
}

void Logger::addError(string error){
	m_errors.push_back(error);
}

void Logger::storeErrors(){
	ofstream os("errors.txt");
	if (os.is_open()){
		for (string errror:m_errors){
			os << errror << endl;
		}
		os.close();
	}
}

Logger::Logger(){
	loadErrors();
}

void Logger::loadErrors(){
	string error = "";
	
	ifstream is("errors.txt");
	if (is.is_open()){
		while (is >> error){
			m_errors.push_back(error);
		}
		is.close();
	}
}