//
// Created by xkudla on 17/11/2021.
//

#ifndef SYSTEMHOME_INVESTITEM_H
#define SYSTEMHOME_INVESTITEM_H
#include "Item.h"

class InvestItem : public Item{
    std::string m_space;
    float m_startPrice;
public:
    InvestItem(std::string describe, int price, std::string data, std::string m_space);
    float getActualyPrice();
    void printInfoI();
};


#endif //SYSTEMHOME_INVESTITEM_H
