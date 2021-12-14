#include <iostream>
#include "Svet.h"
#include "Hrdina.h"
#include "Cestuj.h"
#include "IpolozkaMenu.h"
#include "PolozkaMenu.h"

int main() {
    Svet* svet = new Svet();
    svet->vypisAkce();
    PolozkaMenu* cestuj = new Cestuj("Cestuj");
    svet->getMenu()->pridejPolozku(cestuj);
    svet->akce();
    svet->vypisAkce();
    delete svet;
    return 0;
}
