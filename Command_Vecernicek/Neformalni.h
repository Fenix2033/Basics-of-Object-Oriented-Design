#ifndef NEFORMALNI_POZDRAV_H
#define NEFORMALNI_POZDRAV_H

#include <iostream>
#include "Pozdrav.h"
using namespace std;

class Neformalni : public Pozdrav {
public:
	void privitani();
	void rozlouceniSe();
};

#endif