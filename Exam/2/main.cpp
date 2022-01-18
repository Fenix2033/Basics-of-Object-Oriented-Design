#include <iostream>
#include "MacBook.h"
#include "MacBookPro.h"
#include "MacDirector.h"
#include "MacBookMax.h"

int main() {

    MacDirector* macDirecot = new MacDirector(new MacBook());
    Mac* macBook = macDirecot->constructMac(1, 256);
    macBook->printInfo();

    macDirecot->setMacBuilder(new MacBookPro());
    Mac* macBookPro = macDirecot->constructMac(2, 512);
    macBookPro->printInfo();

    macDirecot->setMacBuilder((new MacBookMax));
    Mac* macBookMax = macDirecot->constructMac(3, 1024);
    macBookMax->printInfo();

    delete macBookMax;
    delete macDirecot;
    delete macBookPro;
    delete macBook;
    return 0;
}
