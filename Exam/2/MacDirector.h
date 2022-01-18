//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_2_MACDIRECTOR_H
#define INC_2_MACDIRECTOR_H
#include "MacBuilder.h"
#include "Mac.h"

class MacDirector {
    MacBuilder* m_builder;
public:
    MacDirector(MacBuilder* builder);
    void setMacBuilder(MacBuilder* builder);
    Mac* constructMac(int unikatneCislo, int pamet);
};


#endif //INC_2_MACDIRECTOR_H
