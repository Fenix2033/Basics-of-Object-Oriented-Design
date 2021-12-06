#include <iostream>
#include "Student.cpp"
#include "Course.cpp"
#include "Record.cpp"

int main() {
    Student* tomas = new Student("Tomas", 1998, "London");
    Student* anna = new Student("Anna", 1996);
    Course* english = new Course("English", 500);
    Course* russian = new Course("Russian", 750);
    Record* tomasEnglish = new Record(tomas, english);
    tomasEnglish->setGrade(2);
    tomasEnglish->printInfo();
    Record* annaRussian = new Record(anna, russian);
    annaRussian->setGrade(1);
    annaRussian->printInfo();

    delete tomas;
    delete anna;
    delete english;
    delete russian;
    return 0;
}
