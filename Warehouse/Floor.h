//
// Created by xkudla on 15/09/2021.
//

#ifndef WAREHOUSE_FLOOR_H
#define WAREHOUSE_FLOOR_H
#include "Container.h"
#include "array"

class Floor {
    std::array<Container*, 10> m_position;
public:
    Floor();
    void setContainer(Container* container, int position);
    void deleteContainer(int position);
    void printInfo();
    ~Floor();
};


#endif //WAREHOUSE_FLOOR_H
