//
// Created by xkudla on 06/11/2021.
//

#ifndef DESIGNPATTERNS1_ERRORLOG_H
#define DESIGNPATTERNS1_ERRORLOG_H
#include <vector>
#include "Error.h"

class ErrorLog {
    static ErrorLog* s_errorLog; //Singleton
    std::vector<Error> m_error;
    ErrorLog();
    ~ErrorLog();
public:
    void addError(Error error);
    void print();

    static ErrorLog* getErrorLog();
};


#endif //DESIGNPATTERNS1_ERRORLOG_H
