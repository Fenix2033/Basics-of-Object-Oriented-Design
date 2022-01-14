//
// Created by xzejda on 02.12.2021.
//

#include <iostream>
#include "Item.h"

Item::Item(std::string description, std::string name) {
    m_description = description;
    m_name = name;
}

void Item::printDescription() {
    std::cout << "Item " << m_name << ": " << m_description << std::endl;
}
