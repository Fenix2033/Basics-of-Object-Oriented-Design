//
// Created by xkudla on 14/12/2021.
//

#include "Hrdina.h"

Hrdina::Hrdina(){
    m_sila = 5;
    m_obrana = 5;
    m_zivot = 100;
    m_penize = 500;
    m_zkusenosti = 0;
}
int Hrdina::getSila(){
    return  m_sila;
}

int Hrdina::getObrana(){
    return  m_obrana;
}

int Hrdina::getZivot(){
    return m_zivot;
}

int Hrdina::getPenize(){
    return m_penize;
}

int Hrdina::getZkusenosti(){
    return m_zkusenosti;
}

void Hrdina::setSila(int sila){
    m_sila += sila;
}

void Hrdina::setObrana(int obrana){
    m_obrana += obrana;
}

void Hrdina::setZivot(int zivot){
    m_zivot += zivot;
}

void Hrdina::setPenize(int penize){
    m_penize += penize;
}

void Hrdina::setZkusenosti(int zkusenosti){
    m_zkusenosti += zkusenosti;
}