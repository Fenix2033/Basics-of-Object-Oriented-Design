//
// Created by xkudla on 15/09/2021.
//

#ifndef WAREHOUSE_CONTAINER_H
#define WAREHOUSE_CONTAINER_H
#include <iostream>

class Container {
    std::string m_amount;
public:
    Container(std::string amount);
    void printInfo();
};


#endif //WAREHOUSE_CONTAINER_H
