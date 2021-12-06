//
// Created by xkudla on 15/09/2021.
//

#include "Container.h"

Container::Container(std::string amount){
    m_amount = amount;
}

void Container::printInfo(){
    std::cout << "Amount container: " << m_amount << std::endl;
}