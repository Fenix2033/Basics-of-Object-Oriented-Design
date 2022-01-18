#include <iostream>
#include "Zarazeni.h"

int main() {
    Certifikace* one = new Certifikace("One", 5);
    Certifikace* two = new Certifikace("Two", 2);
    Skoleni* zoo = new Skoleni("ZOO", 180);
    Skoleni* java = new Skoleni("JAVA", 250);

    Zarazeni* zarazeni;
    zarazeni->addCertifikace(one);
    zarazeni->addCertifikace(two);

    zarazeni->zarazeniSkoleni(one, zoo);
    zarazeni->zarazeniSkoleni(two, zoo);
    zarazeni->zarazeniSkoleni(two, java);

    zarazeni->dostSkoleni(one);
    zarazeni->dostSkoleni(two);

    zarazeni->printInfo(zoo);

    delete one;
    delete two;
    delete zoo;
    delete java;
    delete zarazeni;
    return 0;
}
