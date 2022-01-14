//
// Created by xzejda on 02.12.2021.
//

#ifndef CV10_FOREST_H
#define CV10_FOREST_H


#include <string>
#include <vector>
#include "../EnumTime.h"
#include "../ForestState/ForestState.h"
#include "Npc.h"
#include "Item.h"

class Forest {
    EnumTime m_time;
    ForestState* m_forestState;
    std::string m_description;
    std::vector<std::string> m_options;
    std::vector<Item*> m_items;
    std::vector<Npc*> m_npcs;
public:
    Forest();
    void setTime(EnumTime time);
    void printDescription();
    void printOptions();
    void printItems();
    void printNpcs();
    void setDescription(std::string description);
    void setNpcs(std::vector<Npc*> npcs);
    void setItems(std::vector<Item*> items);
    void setPossibilities(std::vector<std::string> possibilities);
    void makeChanges();
};


#endif //CV10_FOREST_H
