//
// Created by xzejda on 02.12.2021.
//

#include <iostream>
#include "Forest.h"
#include "../ForestState/ForestStatePresent.h"
#include "../ForestState/ForestStatePast.h"
#include "../ForestState/ForestStateFuture.h"

Forest::Forest() {
    m_time = EnumTime::Present;
    m_description = "No description";
    m_forestState = nullptr;
    m_items = {};
    m_npcs = {};
    m_options = {};
    setTime(m_time);
}

void Forest::setTime(EnumTime time) {
    m_time = time;
    if (m_forestState != nullptr){
        delete m_forestState;
    }
    switch (m_time) {
        case EnumTime::Present:
            m_forestState = new ForestStatePresent();
            makeChanges();
            break;
        case EnumTime::Past:
            m_forestState = new ForestStatePast();
            makeChanges();
            break;
        case EnumTime::Future:
            m_forestState = new ForestStateFuture();
            makeChanges();
            break;
        default:
            m_forestState = new ForestStatePresent();
            makeChanges();
            break;
    }
}

void Forest::printDescription() {
    std::cout << "Les: " << m_description << std::endl;
}

void Forest::printOptions() {
    std::cout << "Options: "<< std::endl;
    for (int i = 0; i < m_options.size(); ++i) {
        std::cout << "[" << i << "]" << m_options.at(i) << std::endl;
    }
}

void Forest::printItems() {
    std::cout << "Items: " << std::endl;
    for (int i = 0; i < m_items.size(); ++i) {
        std::cout << "[" << i << "] - ";
        m_items.at(i)->printDescription();
    }
}

void Forest::printNpcs() {
    std::cout << "Npc:" << std::endl;
    for (int i = 0; i < m_npcs.size(); ++i) {
        std::cout << "[" << i << "] - ";
        m_npcs.at(i)->printGreeting();
    }
}

void Forest::setDescription(std::string description) {
    m_description = description;
}

void Forest::setNpcs(std::vector<Npc *> npcs) {
    m_npcs = npcs;
}

void Forest::setItems(std::vector<Item *> items) {
    m_items = items;
}

void Forest::setPossibilities(std::vector<std::string> possibilities) {
    m_options = possibilities;
}

void Forest::makeChanges() {
    setDescription(m_forestState->getDescription());
    setItems(m_forestState->getItems());
    setNpcs(m_forestState->getNpc());
    setPossibilities(m_forestState->getPossibilities());
}
