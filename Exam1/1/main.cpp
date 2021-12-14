#include <iostream>
#include "KurzBakalarsky.h"
#include "KurzDoktorsky.h"
#include "KurzMagistersky.h"
#include "Kurz.h"
#include "Student.h"


int main() {
    Kurz* bakalarsky = new KurzBakalarsky();
    Kurz* magistersky = new KurzMagistersky();
    Kurz* doktorsky = new KurzDoktorsky();
    Student* anna = bakalarsky->vytvorStudent("Anna", 20);
    Student* vova = magistersky->vytvorStudent("Vova", 70);
    Student* oleg = doktorsky->vytvorStudent("Anna", 0);
    anna->printInfo();
    vova->printInfo();
    oleg->printInfo();

    delete bakalarsky;
    delete magistersky;
    delete doktorsky;
    delete anna;
    delete vova;
    delete oleg;

    return 0;
}
