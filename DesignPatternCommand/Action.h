//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_ACTION_H
#define DESIGNPATTERNS2_ACTION_H
#include "Product.h"

class Action {
    std::string m_description;
public:
    Action(std::string description);
    std::string getDescription();
    virtual void doTheAction(Product* product) = 0;
};


#endif //DESIGNPATTERNS2_ACTION_H
