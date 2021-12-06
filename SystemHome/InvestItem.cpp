//
// Created by xkudla on 17/11/2021.
//

#include "InvestItem.h"

InvestItem::InvestItem(std::string describe, int price, std::string data, std::string space)
        : Item(describe, price, data){
    m_space = space;
    m_startPrice = price;
}

float InvestItem::getActualyPrice(){
    float minus = m_startPrice * 0.9;
    m_price -= minus;
}

void InvestItem::printInfoI(){
    printInfo();
    std::cout << "Space: " << m_space << std::endl;
}