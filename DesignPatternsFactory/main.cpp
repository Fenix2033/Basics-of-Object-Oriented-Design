#include <iostream>
#include "Hero.h"

int main() {

    Hero* artur = Hero::createHero(Class::Knight, 0, "Artur");
    artur->printInfo();
    delete artur;

    Hero* david = Hero::createHero(Class::Frontier, 1, "");
    artur->printInfo();
    delete david;

    ErrorLog* errorLog = ErrorLog::getErrorLog();
    errorLog->print();

    return 0;
}
