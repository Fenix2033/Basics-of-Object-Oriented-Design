#ifndef FORMALNI_POZDRAV_H
#define FORMALNI_POZDRAV_H

#include <iostream>
#include "Pozdrav.h"
using namespace std;

class Formalni : public Pozdrav {
public:
	void privitani();
	void rozlouceniSe();
};

#endif
