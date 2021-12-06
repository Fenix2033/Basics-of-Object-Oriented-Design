//
// Created by xkudla on 15/09/2021.
//

#ifndef WAREHOUSE_WAREHOUSE_H
#define WAREHOUSE_WAREHOUSE_H
#include "Floor.h"
#include <vector>

class Warehouse {
    std::vector<Floor*> m_floor;
public:
    Warehouse(int amountFloor);
    void setContainer(Container* container, int floor, int position);
    void deleteContainer(int floor, int position);
    void printInfo();
    ~Warehouse();
};




#endif //WAREHOUSE_WAREHOUSE_H
