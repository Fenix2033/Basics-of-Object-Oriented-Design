#include <iostream>
#include "Morfin.h"
#include "Ambule.h"
#include "NanitChripkovy.h"
#include "NanitBuilder.h"
#include "NanitDirector.h"

int main() {

    Morfin* m = new Morfin(10);
    NanitDirector* morfin
            = new NanitDirector(new Morfin(10));
    NanitChripkovy* ranhojic = morfin->constructNanit("Morfin", m);
    ranhojic->printInfo();

    delete morfin;
    delete ranhojic;
    return 0;
}
