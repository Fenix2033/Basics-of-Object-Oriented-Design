//
// Created by xkudla on 14/12/2021.
//

#ifndef EXAMZOO31COMMAND_IPOLOZKAMENU_H
#define EXAMZOO31COMMAND_IPOLOZKAMENU_H
#include "PolozkaMenu.h"
#include <vector>
#include <algorithm>

class IpolozkaMenu {
    std::vector<PolozkaMenu*> m_polozkyMenu;
public:
    void pridejPolozku(PolozkaMenu* polozka);
    void vypisAkce();
    void akce(Hrdina* hrdina);
    int input();
};


#endif //EXAMZOO31COMMAND_IPOLOZKAMENU_H
