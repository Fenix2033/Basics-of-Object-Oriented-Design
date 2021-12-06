//
// Created by xkudla on 07/11/2021.
//

#include "StarShip.h"

StarShip::StarShip(){
    m_product = new Product();
}

StarShip::~StarShip(){
    delete m_product;
}

void StarShip::newAction(Action* action){
    if (action != nullptr){
        m_action.push_back(action);
    } else {
        std::cout << "Wrong action" << std::endl;
    }
}

void StarShip::viewAction(){
    for (int i = 0; i < m_action.size(); i++){
        std::cout << i << " Desctiption: " << m_action.at(i)->getDescription() << std::endl;
    }
}

int StarShip::inputUser(){
    std::cout << "Input number: " << std::endl;
    int input = 0;
    std::cin >> input;
}

void StarShip::doTheAction(){
    viewAction();
    std::cout << m_action.size();
    int input = inputUser();
    if (input == 10){
        exit(0);
    }
    m_action.at(input)->doTheAction(m_product);
}
