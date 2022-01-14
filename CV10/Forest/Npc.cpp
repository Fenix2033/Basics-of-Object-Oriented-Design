//
// Created by xzejda on 02.12.2021.
//

#include <iostream>
#include "Npc.h"

Npc::Npc(std::string greeting, std::string name) {
    m_greeting = greeting;
    m_name = name;
}

void Npc::printGreeting() {
    std::cout << "Npc " << m_name << ": " << m_greeting << std::endl;
}
