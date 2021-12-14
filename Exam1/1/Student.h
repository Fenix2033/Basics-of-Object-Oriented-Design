//
// Created by xkudla on 14.12.2021.
//

#ifndef INC_1_STUDENT_H
#define INC_1_STUDENT_H
#include <iostream>


class Student {
    std::string m_jmeno;
    int m_pocetKreditu;
    int m_minimalniPocetKreditu;
    std::string m_stupenStudia;
public:
    Student(std::string jmeno, int pocetkreditu, int minimalniPocetKreditu, std::string stupenStudia);
    void printInfo();
};


#endif //INC_1_STUDENT_H
