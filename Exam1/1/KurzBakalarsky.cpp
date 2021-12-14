//
// Created by xkudla on 14.12.2021.
//

#include "KurzBakalarsky.h"


KurzBakalarsky::KurzBakalarsky(){
    m_minimalniPocetKreditu = 300;
    m_typStudia = "Bakalarsky";
}

Student* KurzBakalarsky::vytvorStudent(std::string jmeno, int pocetKreditu){
    return new Student(jmeno, pocetKreditu, m_minimalniPocetKreditu, m_typStudia);
}
