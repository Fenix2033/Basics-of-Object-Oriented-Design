//
// Created by xkudla on 14.12.2021.
//

#include "KurzMagistersky.h"

KurzMagistersky::KurzMagistersky(){
    m_minimalniPocetKreditu = 200;
    m_typStudia = "Magistersky";
}

Student* KurzMagistersky::vytvorStudent(std::string jmeno, int pocetKreditu){
    return new Student(jmeno, pocetKreditu, m_minimalniPocetKreditu, m_typStudia);
}
