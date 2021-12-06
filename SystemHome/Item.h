//
// Created by xkudla on 17/11/2021.
//

#ifndef SYSTEMHOME_ITEM_H
#define SYSTEMHOME_ITEM_H
#include <iostream>

class Item {
protected:
    std::string m_describe;
    float m_price;
    std::string m_data;
public:
    Item(std::string describe, float price, std::string data);
    float getPrice();
    void printInfo();
};


#endif //SYSTEMHOME_ITEM_H
