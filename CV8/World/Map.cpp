//
//  Map.cpp
//  Projekt do ZOO ZS2013
//
//  Created by David Prochazka on 10/23/12.
//  Copyright (c) 2012 David Prochazka. All rights reserved.
//

#include "Map.h"

world::Map::Map(const unsigned int numOfRows, const unsigned int numOfCols){
    
    std::vector<Location*> helpRow(numOfCols, 0);
    // lze samozrejme i jinak
    m_map.resize(numOfRows);
    for(int i=0; i < numOfRows; i++){
        m_map[i] = helpRow;
    }
    m_numOfCols = numOfCols;
    m_numOfRows = numOfRows;
}

world::Location* world::Map::getLocationFromMap(const unsigned int row, const unsigned int col){
    // kontroluji, zda nepristupujeme mimo rozsah pole
    if ((row < m_numOfRows) and (col < m_numOfCols)){
        // kontroluji, zda je na pozici objekt
        if (m_map[row][col] != 0){
            return m_map[row][col];
        } else {
            std::cerr << "world::Map::getLocationFromMap - Pokus o pristup do pole bez objektu" << std::endl;
            std::cerr << "Pozadadovana pozice [" << row << ", " << col << "]." << std::endl;
            return 0;
        }
    } else {
        std::cerr << "world::Map::getLocationFromMap - Pokus o pristup mimo rozsah desky!" << std::endl;
        std::cerr << "Pozadadovana pozice [" << row << ", " << col << "]." << std::endl;
        std::cerr << "Maximalni pozice [" << m_numOfRows - 1 << ", " << m_numOfCols - 1 << "]." << std::endl;
        return 0;
    }
}

void world::Map::insertLocationIntoMap(const unsigned int row, const unsigned int col, world::Location* location){
    // kontrola, zda nepristupuji mimo rozsah location
    if ((row < m_numOfRows) and (col < m_numOfCols)){
        m_map[row][col] = location;
    } else {
        std::cerr << "world::Map::insertLocationIntoMap - Pokus o pristup mimo rozsah desky!";
        std::cerr << "Pozadadovana pozice [" << row << ", " << col << "]." << std::endl;
        std::cerr << "Maximalni pozice [" << m_numOfRows - 1 << ", " << m_numOfCols - 1 << "]." << std::endl;
    }
}

int world::Map::getNumOfRows(){
    return m_numOfRows;
}

int world::Map::getNumOfCols(){
    return m_numOfCols;
}

void world::Map::printMap(){
    std::cout << "**** Map ****" << std::endl;
    for(int row=0; row < m_numOfRows; row++){
        for(int col=0; col < m_numOfCols; col++){
            std::cout << m_map[row][col]->getDescription() << "\t \t ";
        }
        std::cout << std::endl;
    }
}

void world::Map::deleteMap(){
    for (int row=0; row < m_numOfRows; row++) {
        for (int col=0; col < m_numOfCols; col++) {
            // vzdy vymazu objekt a nastavim ukazatel na 0
            // tak je mozne testovat, zda tam nic neni
            delete m_map[row][col];
            m_map[row][col] = 0;
        }
    }
}
