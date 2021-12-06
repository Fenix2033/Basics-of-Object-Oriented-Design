//
// Created by xkudla on 17/11/2021.
//

#include "ArrayOwner.h"

ArrayOwner::ArrayOwner(){}

void ArrayOwner::addItem(Item* item){
    m_item.push_back(item);
}

void ArrayOwner::printInfo(Item* item){
        item->printInfo();
}
