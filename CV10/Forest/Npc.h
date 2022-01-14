//
// Created by xzejda on 02.12.2021.
//

#ifndef CV10_NPC_H
#define CV10_NPC_H


#include <string>

class Npc {
    std::string m_greeting;
    std::string m_name;
public:
    Npc(std::string greeting, std::string name);
    void printGreeting();
};


#endif //CV10_NPC_H
