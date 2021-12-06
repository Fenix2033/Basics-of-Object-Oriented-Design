//
// Created by xkudla on 06/09/2021.
//

#include "Course.h"

Course::Course(std::string name, int price) {
    setName(name);
    setPrice(price);
}

void Course::setName(std::string name) {
    if (name != "") {
        m_name = name;
    } else {
        std::cout << "Course: Must be the name of course" << std::endl;
        m_name = "Unknown";
    }
};

void Course::setPrice(int price) {
    if (price > 0) {
        m_price = price;
    } else {
        std::cout << "Course: Must be the price of course > 0" << std::endl;
        m_price = 0;
    }
};