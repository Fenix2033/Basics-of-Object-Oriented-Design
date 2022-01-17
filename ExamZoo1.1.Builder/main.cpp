#include <iostream>
#include "Morfin.h"
#include "Ampule.h"
#include "NanitChripkovy.h"
#include "AmpuleDirector.h"
#include "Morfin.h"
#include "Kapsicin.h"

int main() {

    AmpuleDirector* director = new AmpuleDirector(new Morfin(10));
    NanitChripkovy* ranhojic = new NanitChripkovy("Ranhojic");
    NanitChripkovy* vymitac = new NanitChripkovy("Vymitac");
    ranhojic->setAmpule(director->getAmpule());

    director->setNanitBuilder(new Kapsicin(1, 10));
    vymitac->setAmpule(director->getAmpule());

    ranhojic->printInfo();
    vymitac->printInfo();
    
    delete ranhojic;
    delete vymitac;
    delete director;
    return 0;
}
