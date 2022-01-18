//
// Created by xkudla on 17.01.2022.
//

#ifndef INC_2_PROCESOR_H
#define INC_2_PROCESOR_H
#include "string"

class Procesor {
    std::string m_jmeno;
    int m_pocetJader;
    int m_pocetGJader;
    int m_pocetEJader;
public:
    Procesor(std::string jmeno, int pocetJader, int pocetGJader, int pocetEJader);
    std::string getJmeno();
    int getPocetJader();
    int getPocetGJader();
    int getPocetEJader();
};


#endif //INC_2_PROCESOR_H
