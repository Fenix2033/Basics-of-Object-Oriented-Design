#ifndef VECERNICEK_H
#define VECERNICEK_H

#include "Pozdrav.h"

class Vecernicek {

private:
	Pozdrav* m_pozdrav;

public:
	Vecernicek();
	void naucPozdrav(Pozdrav* novyPozdrav);
	void privitej();
	void rozlucSe();
};

#endif