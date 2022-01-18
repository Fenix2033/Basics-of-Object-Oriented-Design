//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_2_MACBUILDER_H
#define INC_2_MACBUILDER_H
#include <string>
#include "Mac.h"

class MacBuilder {
protected:
    Mac* m_mac;
public:
    MacBuilder();
    void creatMac(int unikatneCislo, int pamet);
    virtual void setProcesor() = 0;
    Mac* getMac();
};


#endif //INC_2_MACBUILDER_H
