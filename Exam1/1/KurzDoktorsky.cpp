//
// Created by xkudla on 14.12.2021.
//

#include "KurzDoktorsky.h"

KurzDoktorsky::KurzDoktorsky(){
    m_minimalniPocetKreditu = 100;
    m_typStudia = "Doktorsky";
}

Student* KurzDoktorsky::vytvorStudent(std::string jmeno, int pocetKreditu){
    return new Student(jmeno, pocetKreditu, m_minimalniPocetKreditu, m_typStudia);
}
