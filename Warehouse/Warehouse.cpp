//
// Created by xkudla on 15/09/2021.
//

#include "Warehouse.h"

Warehouse::Warehouse(int amountFloor){
    std::vector<Floor*> floor(amountFloor, new Floor());
    m_floor = floor;
}

void Warehouse::setContainer(Container* container, int floor, int position){
    if ((floor >= 0) and (floor < m_floor.size())){
        m_floor.at(floor)->setContainer(container, position);
    } else {
        std::cout << "Floor must be > 0 and < " << m_floor.size() - 1 << std::endl;
    }
}

void Warehouse::deleteContainer(int floor, int position){
    if ((floor >= 0) and (floor < m_floor.size())) {
        m_floor.at(floor)->deleteContainer(position);
    } else {
        std::cout << "Floor must be > 0 and < " << m_floor.size() - 1 << std::endl;
    }
}

void Warehouse::printInfo(){
    for(int i = 0; i < m_floor.size(); i++){
        std::cout<< "Floor: " << i << " ";
        m_floor.at(i)->printInfo();
        std::cout << std::endl;
    }
}

Warehouse::~Warehouse(){
    for (int i = 0; i < m_floor.size(); i++){
        delete m_floor.at(i);
    }
}