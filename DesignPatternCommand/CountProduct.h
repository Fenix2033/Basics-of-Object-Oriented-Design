//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_COUNTPRODUCT_H
#define DESIGNPATTERNS2_COUNTPRODUCT_H
#include "Action.h"

class CountProduct: public Action {
public:
    CountProduct();
    void doTheAction(Product* product);
};


#endif //DESIGNPATTERNS2_COUNTPRODUCT_H
