//
// Created by xkudla on 06/09/2021.
//

#ifndef ISSHOOL_RECORD_H
#define ISSHOOL_RECORD_H


class Record {
    Student* m_student;
    Course* m_course;
    int m_grade;
public:
    Record(Student* student, Course* course);
    void setGrade(int grade);
    void printInfo();
private:
    void setStudent(Student* student);
    void setCourse(Course* course);
};


#endif //ISSHOOL_RECORD_H
