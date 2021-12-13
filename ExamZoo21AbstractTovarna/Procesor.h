//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_PROCESOR_H
#define EXAMZOO21ABSTRACTTOVARNA_PROCESOR_H


class Procesor {
public:
    virtual int getVykon() = 0;

    Procesor(){};

    virtual ~Procesor(){};



};

#endif //EXAMZOO21ABSTRACTTOVARNA_PROCESOR_H
