//
// Created by xkudla on 06/09/2021.
//

#include "Record.h"

Record::Record(Student* student, Course* course) {
    setStudent(student);
    setCourse(course);
    m_grade = 0;
};

void Record::setGrade(int grade) {
    if ((grade > 5) or (grade < 1)) {
        std::cout << "Record: Grade must be > 5 and < 1" << std::endl;
    } else {
        m_grade = grade;
    }
};

void Record::printInfo() {
    std::cout << "Student " << m_student->getFirstName() << " from the " << m_course->getName()
    << " course has " << m_grade << " grade." << std::endl;
};

void Record::setStudent(Student* student) {
    if (student != nullptr) {
        m_student = student;
    } else {
        std::cout << "Record: Must be record student" << std::endl;
        m_student = nullptr;
    }
};

void Record::setCourse(Course* course) {
    if (course != nullptr) {
        m_course = course;
    } else {
        std::cout << "Record: Must be record course" << std::endl;
        m_course = nullptr;
    }
};
