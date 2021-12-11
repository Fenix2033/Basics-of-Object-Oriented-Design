//
// Created by xkudla on 11/12/2021.
//

#include "OsobniAuto.h"

OsobniAuto::OsobniAuto(std::string nazev, int objemMotoru, int spotreba,
int pocetSedadel, int objemProstoru): Car(nazev, objemMotoru, spotreba){
    m_pocetSedadel = pocetSedadel;
    m_objemProstoru = objemProstoru;
    m_euroNorma = objemProstoru / objemMotoru;
}


void OsobniAuto::printInfo(){
    std::cout << "Hazev: " << getNazev() << std::endl;
    std::cout << "Objem motoro: " << getObjemMotoru() << std::endl;
    std::cout << "Spotreba: " << getSpotreba() << std::endl;
    std::cout << "Pocet sedadel: " << m_pocetSedadel << std::endl;
    std::cout << "Objem prostoru: " << m_objemProstoru << std::endl;
    std::cout << "Euro norma: " << m_euroNorma << std::endl;
}
