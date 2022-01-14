#include <iostream>
#include "Forest/Forest.h"

int main() {
    Forest* forest = new Forest();
    forest->setTime(EnumTime::Past);
    forest->printDescription();
    forest->printItems();
    forest->printNpcs();
    forest->printOptions();

    delete forest;
    return 0;
}
