//
// Created by xkudla on 07/11/2021.
//

#include "AddProduct.h"

AddProduct::AddProduct():Action("Add Product"){}

void AddProduct::doTheAction(Product* product){

    std::string description = "";
    std::cout << "Input weight: " << std::endl;
    getline(std::cin, description);

    int value = 0;
    std::cout << "Input weight: " << std::endl;
    std::cin >> value;

    int weight = 0;
    std::cout << "Input weight: " << std::endl;
    std::cin >> weight;

    std::string destination = "";
    std::cout << "Input weight: " << std::endl;
    getline(std::cin, destination);

    product->addCargo(Cargo{description, value, weight,  destination});
}
