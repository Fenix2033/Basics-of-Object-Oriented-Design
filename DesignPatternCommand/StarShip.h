//
// Created by xkudla on 07/11/2021.
//

#ifndef DESIGNPATTERNS2_STARSHIP_H
#define DESIGNPATTERNS2_STARSHIP_H
#include "Product.h"
#include "Action.h"

class StarShip {
    Product* m_product;
    std::vector<Action*> m_action;
public:
    StarShip();
    ~StarShip();
    void newAction(Action* action);
    void doTheAction();
private:

    void viewAction();
    int inputUser();
};


#endif //DESIGNPATTERNS2_STARSHIP_H
