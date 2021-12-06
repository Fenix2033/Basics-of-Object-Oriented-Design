//
// Created by xkudla on 17/11/2021.
//

#include "NotInvestItem.h"

NotInvestItem::NotInvestItem(std::string describe, int price, std::string data, std::string owner)
: Item(describe, price, data){
    m_owner = owner;
    m_startPrice = price;
}

float NotInvestItem::getActualyPrice(){
    float minus = m_startPrice * 0.7;
    m_price -= minus;
}

void NotInvestItem::printInfoNot(){
    printInfo();
    std::cout << "Owner: " << m_owner << std::endl;
}