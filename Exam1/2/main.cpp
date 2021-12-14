#include <iostream>
#include "System.h"

int main() {
    System* system = new System();
    system->pridejLekar("Anna", "1", "19982011");
    system->pridejZaznam("21.12.2020", "Co", "asf", system->getLekar("Anna"));
    system->printInfo("19982011");
    delete system;
    return 0;
}
