//
// Created by xkudla on 14.12.2021.
//

#include "Student.h"

Student::Student(std::string jmeno, int pocetkreditu, int minimalniPocetKreditu, std::string stupenStudia){
    m_jmeno = jmeno;
    m_pocetKreditu = pocetkreditu;
    m_minimalniPocetKreditu = minimalniPocetKreditu;
    m_stupenStudia = stupenStudia;
}

void Student::printInfo(){
    std::cout << "Jmeno: " << m_jmeno << std::endl;
    std::cout << "Pocet kreditu: " << m_pocetKreditu << std::endl;
    std::cout << "Minimalni pocet kreditu: " << m_minimalniPocetKreditu << std::endl;
    std::cout << "Typ studia: " << m_stupenStudia << std::endl;
}