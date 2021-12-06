#include <iostream>
#include "Morfin.h"
#include "Ambule.h"
#include "NanitChripkovy.h"
#include "AmbuleDirection.h"

int main() {
    AmbuleDirection* morfin
        = new AmbuleDirection(new Morfin(15));
    NanitChripkovy* vymitac = morfin->constructAmbule("Vymitac");

    vymitac->printInfo();

    delete morfin;
    delete vymitac;
    return 0;
}
