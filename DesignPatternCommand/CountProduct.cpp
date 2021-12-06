//
// Created by xkudla on 07/11/2021.
//

#include "CountProduct.h"

CountProduct::CountProduct():Action("Count Product"){}

void CountProduct::doTheAction(Product* product){
    product->getCountCargo();
}