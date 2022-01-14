//
// Created by xzejda on 02.12.2021.
//

#ifndef CV10_ITEM_H
#define CV10_ITEM_H


#include <string>

class Item {
    std::string m_description;
    std::string m_name;
public:
    Item(std::string description, std::string name);
    void printDescription();
};


#endif //CV10_ITEM_H
