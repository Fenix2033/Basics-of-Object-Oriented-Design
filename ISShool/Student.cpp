//
// Created by xkudla on 06/09/2021.
//

#include "Student.h"

Student::Student(std::string firstName, int yearOfBirth, std::string adres) {
    setFirstName(firstName);
    setYearOfBirth(yearOfBirth);
    setAdres(adres);
}

Student::Student(std::string firstName, int yearOfBirth) {
    setFirstName(firstName);
    setYearOfBirth(yearOfBirth);
    m_adres = "Unknown";
}

void Student::setFirstName(std::string firstName) {
    if (firstName != "") {
        m_firstName = firstName;
    } else {
        std::cout << "Student: Must be the first name of student" << std::endl;
        m_firstName = "Unknown";
    }
};

void Student::setYearOfBirth(int yearOfBirth) {
    if (yearOfBirth > 1900) {
        m_yearOfBirth = yearOfBirth;
    } else {
        std::cout << "Student: Must be the year of birth student > 1900" << std::endl;
        m_yearOfBirth = 1900;
    }
};

void Student::setAdres(std::string adres) {
    if (adres != "") {
        m_adres = adres;
    } else {
        std::cout << "Student: Must be the adres of student" << std::endl;
        m_adres = "Unknown";
    }
};