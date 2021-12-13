//
// Created by xkudla on 13/12/2021.
//

#ifndef EXAMZOO21ABSTRACTTOVARNA_PLOTNOVYDISK_H
#define EXAMZOO21ABSTRACTTOVARNA_PLOTNOVYDISK_H


class PlotnovyDisk {
    int m_zapisRychlost;
    int m_zapisHloubka;
public:
    PlotnovyDisk(int zapisRychlost, int zapisHloubka);
    float getRychlost() const;
};


#endif //EXAMZOO21ABSTRACTTOVARNA_PLOTNOVYDISK_H
