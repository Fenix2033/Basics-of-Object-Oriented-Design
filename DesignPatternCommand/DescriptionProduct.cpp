//
// Created by xkudla on 07/11/2021.
//

#include "DescriptionProduct.h"

DescriptionProduct::DescriptionProduct():Action("Description Product"){}

void DescriptionProduct::doTheAction(Product* product){
    int count = product->getCountCargo();

    for (int i = 0; i < count; i++){
        std::cout << "Description: " << product->getCargo(i).description << std::endl;
    }

}