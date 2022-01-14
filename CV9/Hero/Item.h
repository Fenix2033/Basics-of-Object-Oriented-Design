//
// Created by xzejda on 25.11.2021.
//

#ifndef CV9_ITEM_H
#define CV9_ITEM_H


#include <string>

class Item {
    std::string m_name;
    int m_bonusType;
    int m_bonusValue;
public:
    Item(std::string name, int type, int value);
    std::string getName();
    int getBonusType();
    int getBonusValue();
};


#endif //CV9_ITEM_H
