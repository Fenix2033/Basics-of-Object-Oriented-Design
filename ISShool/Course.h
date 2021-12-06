//
// Created by xkudla on 06/09/2021.
//

#ifndef ISSHOOL_COURSE_H
#define ISSHOOL_COURSE_H


class Course {
    std::string m_name;
    int m_price;
public:
    Course(std::string name, int price);
    std::string getName() {return m_name;}
private:
    void setName(std::string name);
    void setPrice(int price);
};


#endif //ISSHOOL_COURSE_H
