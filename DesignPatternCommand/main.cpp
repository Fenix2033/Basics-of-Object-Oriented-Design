#include <iostream>
#include "Action.h"
#include "CountProduct.h"
#include "StarShip.h"
#include "DescriptionProduct.h"
#include "AddProduct.h"


int main() {
    StarShip* nor = new StarShip();
    nor->newAction(new DescriptionProduct);
    nor->newAction(new AddProduct);
    nor->newAction(new CountProduct);

    while(true){
        nor->doTheAction();
    }


    delete nor;

    return 0;
}
