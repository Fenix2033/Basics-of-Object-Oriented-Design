//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_ADDPRODUCT_H
#define DESIGNPATTERNS2_ADDPRODUCT_H
#include "Action.h"

class AddProduct: public Action {
public:
    AddProduct();
    void doTheAction(Product* product);
};


#endif //DESIGNPATTERNS2_ADDPRODUCT_H
