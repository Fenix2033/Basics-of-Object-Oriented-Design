//
// Created by xzejda on 02.12.2021.
//

#ifndef CV10_FORESTSTATEPRESENT_H
#define CV10_FORESTSTATEPRESENT_H


#include "ForestState.h"

class ForestStatePresent: public ForestState {
public:
    std::string getDescription() override;
    std::vector<Item *> getItems() override;
    std::vector<Npc *> getNpc() override;
    std::vector<std::string> getPossibilities() override;
};


#endif //CV10_FORESTSTATEPRESENT_H
