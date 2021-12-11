//
// Created by xkudla on 10/12/2021.
//

#include "UzitkoveAuto.h"

UzitkoveAuto::UzitkoveAuto(std::string nazev, int objemMotoru, int spotreba, int hmotnost, int objemNadrze):
    Car(nazev, objemMotoru, spotreba){
    m_hmotnost = hmotnost;
    m_objemNadrze = objemNadrze;
    m_dojezd = objemNadrze / spotreba;
}

void UzitkoveAuto::printInfo(){
    std::cout << "Hazev: " << getNazev() << std::endl;
    std::cout << "Objem motoro: " << getObjemMotoru() << std::endl;
    std::cout << "Spotreba: " << getSpotreba() << std::endl;
    std::cout << "Hmotnost: " << m_hmotnost << std::endl;
    std::cout << "Objem nadrze: " << m_objemNadrze << std::endl;
    std::cout << "Dojezd: " << m_dojezd << std::endl;
}