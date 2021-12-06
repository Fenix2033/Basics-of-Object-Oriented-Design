#include <iostream>
#include "Item.h"
#include "InvestItem.h"
#include "NotInvestItem.h"
#include "ArrayOwner.h"

int main() {
    ArrayOwner* array = new ArrayOwner();
    InvestItem* home = new InvestItem("Home", 150000, "21.05.2010", "Brno");
    InvestItem* home2 = new InvestItem("Home", 250000, "21.05.2015", "Praha");
    NotInvestItem* laptop = new NotInvestItem("Laptop", 25000, "17.11.2021", "Tomas");
    NotInvestItem* bed = new NotInvestItem("Bed", 15000, "11.12.2020", "Dan");
    array->addItem(home);
    array->addItem(home2);
    array->addItem(laptop);
    array->addItem(bed);

    array->printInfo(home);


    delete home;
    delete home2;
    delete laptop;
    delete bed;
    delete array;
    return 0;
}
