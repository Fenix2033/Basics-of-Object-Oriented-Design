//
// Created by xkudla on 15/09/2021.
//

#include "Floor.h"

Floor::Floor(){
    for (int i = 0; i < m_position.size(); i++){
        m_position.at(i) = nullptr;
    }

//    for(Container* &position:m_position){
//        position = nullptr;
//    }
}

void Floor::setContainer(Container* container, int position){
    if ((position >= 0) and (position < m_position.size())){
        if (m_position.at(position) == nullptr){
            m_position.at(position) = container;
        } else {
            std::cout << "Postion is not empty" << std::endl;
        }
    } else {
        std::cout << "Floor must be > 0 and < " << m_position.size() - 1 << std::endl;
    }
}

void Floor::deleteContainer(int position){
    if ((position >= 0) and (position < m_position.size())){
        if (m_position.at(position) != nullptr){
            m_position.at(position) = nullptr;
        } else {
            std::cout << "Position is empty" << std::endl;
        }
    } else {
        std::cout << "Position must be > 0 and < " << m_position.size() - 1 << std::endl;
    }
}

void Floor::printInfo(){
    for (int i = 0; i < m_position.size(); i++){
        std::cout << "Postion: " << i << " ";
        m_position.at(i)->printInfo();
        std::cout << std::endl;
    }
}

Floor::~Floor(){
    for (int i = 0; i < m_position.size(); i++){
        delete m_position.at(i);
    }
}