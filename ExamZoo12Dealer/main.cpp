#include <iostream>
#include "UzitkoveAuto.h"
#include "OsobniAuto.h"
#include "Car.h"
#include "Sklad.h"

int main() {
    Sklad* sklad = new Sklad(2);
    Car* uzitko = new UzitkoveAuto("Uzitko", 4.5, 50, 4500, 1500);
    Car* osobni = new OsobniAuto("Osobni", 1.5, 50, 4, 200);
    Car* testObzaseno = new OsobniAuto("Test", 1.5, 50, 4, 200);
    sklad->pridej(uzitko);
    sklad->pridej(osobni);
    sklad->pridej(testObzaseno);
    sklad->printInfo();
    return 0;
}
