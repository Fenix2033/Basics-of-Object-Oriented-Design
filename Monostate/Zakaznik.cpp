#include "Zakaznik.h"

Zakaznik::Zakaznik(string jmeno, int id) {
	m_id = id;
    m_jmeno = jmeno;
}

string Zakaznik::getJmeno() {
	return this->m_jmeno;
}

int Zakaznik::getId() {
	return this->m_id;
}
