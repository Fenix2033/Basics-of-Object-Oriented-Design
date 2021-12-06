//
// Created by xkudla on 17/11/2021.
//

#include "Item.h"

Item::Item(std::string describe, float price, std::string data){
    m_price = price;
    m_describe = describe;
    m_data = data;
}

float Item::getPrice(){
    return m_price;
}

void Item::printInfo(){
    std::cout << "Describe: " << m_describe << std::endl;
    std::cout << "Price: " << m_price << std::endl;
    std::cout << "Data: " << m_data << std::endl;
}