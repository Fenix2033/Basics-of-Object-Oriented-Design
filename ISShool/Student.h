//
// Created by xkudla on 06/09/2021.
//

#ifndef ISSHOOL_STUDENT_H
#define ISSHOOL_STUDENT_H

class Student {
    std::string m_firstName;
    int m_yearOfBirth;
    std::string m_adres;
public:
    Student(std::string firstName, int yearOfBirth, std::string adres);
    Student(std::string firstName, int yearOfBirth);
    std::string getFirstName(){return m_firstName;}
public:
    void setFirstName(std::string firstName);
    void setYearOfBirth(int yearOfBirth);
    void setAdres(std::string adres);
};


#endif //ISSHOOL_STUDENT_H
