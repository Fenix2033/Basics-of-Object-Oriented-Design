//
// Created by xkudla on 17/11/2021.
//

#ifndef SYSTEMHOME_NOTINVESTITEM_H
#define SYSTEMHOME_NOTINVESTITEM_H
#include "Item.h"

class NotInvestItem : public Item{
    std::string m_owner;
    float m_startPrice;
public:
    NotInvestItem(std::string describe, int price, std::string data, std::string owner);
    float getActualyPrice();
    void printInfoNot();
};


#endif //SYSTEMHOME_NOTINVESTITEM_H
