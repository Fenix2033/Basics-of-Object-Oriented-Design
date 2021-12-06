#include "Vecernicek.h"

Vecernicek::Vecernicek() {
	m_pozdrav = nullptr;
}

void Vecernicek::naucPozdrav(Pozdrav* novyPozdrav) {
	m_pozdrav = novyPozdrav;
}

void Vecernicek::privitej() {
	if (m_pozdrav != nullptr){
		m_pozdrav->privitani();
	}
}

void Vecernicek::rozlucSe() {
	if (m_pozdrav != nullptr){
		m_pozdrav->rozlouceniSe();
	}
}
