#ifndef ZAKAZNIK_H
#define ZAKAZNIK_H

#include <iostream>
using namespace std;

class Zakaznik {

private:
	string m_jmeno;
	int m_id;

public:
	Zakaznik(string jmeno, int id);

	string getJmeno();

	int getId();
};

#endif
