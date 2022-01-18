//
// Created by xkudla on 17.01.2022.
//

#include "Zarazeni.h"

Zarazeni::Zarazeni(){

}

void Zarazeni::addCertifikace(Certifikace* certifikace){
    m_certifikace.push_back(certifikace);
}

void Zarazeni::zarazeniSkoleni(Certifikace* certifikace, Skoleni* skoleni){
    for (int i = 0; i < m_certifikace.size(); i++){
        if (m_certifikace.at(i)->getJmeno() == certifikace->getJmeno()){
            m_certifikace.at(i)->addSkoleni(skoleni);
        }
    }
}

bool Zarazeni::dostSkoleni(Certifikace *certifikace){
   for (int i = 0; i < m_certifikace.size(); i++){
       if (m_certifikace.at(i)->getJmeno() == certifikace->getJmeno()){
           if (m_certifikace.at(i)->getPocetSkoleni() <= m_certifikace.at(i)->getSkoleni().size() - 1){
               std::cout << "Ma dost bodu" << std::endl;
           } else {
               std::cout << "Nema dost bodu" << std::endl;
           }
       }
   }
}

void Zarazeni::printInfo(Skoleni* skoleni) {
    for (int i = 0; i < m_certifikace.size(); i++) {
        for (int j = 0; j < m_certifikace.at(i)->getSkoleni().size(); j++) {
            if (m_certifikace.at(i)->getSkoleni().at(j)->getNazev() == skoleni->getNazev()) {
                std::cout << "Skoleni je: " << skoleni->getNazev()
                          << " V certifikatu" << m_certifikace.at(i)->getJmeno() << std::endl;
            }
        }
    }
}