//
// Created by xkudla on 17/11/2021.
//

#ifndef SYSTEMHOME_ARRAYOWNER_H
#define SYSTEMHOME_ARRAYOWNER_H
#include <vector>
#include "Item.h"
#include "InvestItem.h"
#include "NotInvestItem.h"

class ArrayOwner {
    std::vector<Item*> m_item;
public:
    ArrayOwner();
    void addItem(Item* item);
    void printInfo(Item* item);
};


#endif //SYSTEMHOME_ARRAYOWNER_H
