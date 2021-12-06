#include <iostream>
#include "Warehouse.h"
#include "Container.h"

int main() {
    Warehouse* one = new Warehouse(3);
    Container* apple = new Container("Apple");
    Container* orange = new Container("Orange");
    one->setContainer(orange, 0, 0);
    one->setContainer(apple, 1, 1);
    one->printInfo();

    delete apple;
    delete orange;
    delete one;

    return 0;
}
