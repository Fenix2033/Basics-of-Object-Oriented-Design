//
// Created by xkudla on 06/11/2021.
//

#include "ErrorLog.h"

ErrorLog* ErrorLog::s_errorLog = nullptr;

ErrorLog::ErrorLog(){

}

ErrorLog::~ErrorLog(){

}

void ErrorLog::addError(Error error){
    m_error.push_back(error);
}

void ErrorLog::print(){
    for (auto error:m_error){
        std::cout << "Class: " << error.nameClass << std::endl;
        std::cout << "Function: " << error.nameFunction << std::endl;
        std::cout << "Error: " << error.description << std::endl;
    }
}

ErrorLog* ErrorLog::getErrorLog(){
    if(s_errorLog == nullptr){
        s_errorLog = new ErrorLog();
    }

    return s_errorLog;
}