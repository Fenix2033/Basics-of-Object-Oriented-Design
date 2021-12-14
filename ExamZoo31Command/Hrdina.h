//
// Created by xkudla on 14/12/2021.
//

#ifndef EXAMZOO31COMMAND_HRDINA_H
#define EXAMZOO31COMMAND_HRDINA_H


class Hrdina {
    int m_sila;
    int m_obrana;
    int m_zivot;
    int m_penize;
    int m_zkusenosti;
public:
    Hrdina();
    int getSila();
    int getObrana();
    int getZivot();
    int getPenize();
    int getZkusenosti();
    void setSila(int sila);
    void setObrana(int obrana);
    void setZivot(int zivot);
    void setPenize(int penize);
    void setZkusenosti(int zkusenosti);
};


#endif //EXAMZOO31COMMAND_HRDINA_H
