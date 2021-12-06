//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_DESCRIPTIONPRODUCT_H
#define DESIGNPATTERNS2_DESCRIPTIONPRODUCT_H
#include "Action.h"

class DescriptionProduct: public Action{
public:
    DescriptionProduct();
    void doTheAction(Product* product);
};


#endif //DESIGNPATTERNS2_DESCRIPTIONPRODUCT_H
