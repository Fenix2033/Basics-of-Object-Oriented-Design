//
// Created by xzejda on 02.12.2021.
//

#ifndef CV10_FORESTSTATE_H
#define CV10_FORESTSTATE_H


#include <string>
#include <vector>
#include "../Forest/Item.h"
#include "../Forest/Npc.h"

class ForestState {
public:
    virtual std::string getDescription() = 0;
    virtual std::vector<Item*> getItems() = 0;
    virtual std::vector<Npc*> getNpc() = 0;
    virtual std::vector<std::string> getPossibilities() = 0;
};


#endif //CV10_FORESTSTATE_H
