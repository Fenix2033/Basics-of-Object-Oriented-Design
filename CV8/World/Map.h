//
//  Map.h
//  Projekt do ZOO ZS2013
//
//  Created by David Prochazka on 10/23/12.
//  Copyright (c) 2012 David Prochazka. All rights reserved.
//

#ifndef __zoo__ObjektovaHraciDeska__
#define __zoo__ObjektovaHraciDeska__

#include <iostream>
#include <fstream>
#include <vector>
#include "Location.h"

namespace world {
    /**
     * @brief Trida reprezentuji hraci desku skladajici se z hernich poli, ktere jsou objekty
     *
     * Toto je nejdulezitejsi cast prikladu. Tato deska je schopna do sebe zapouzdrit zakladni
     * chovani hraci desky. Vas herni engine by mohl tuto desku vyuzivat. Vyresite tim skladovani
     * informaci o hernich polich a ziskate jiz nachystanou kostru pro polymorfni chovani.
     * Budete si moci odvodit ruzne dalsi vlastni potomky tridy Location a udelat tak desku
     * plnou ruznych hernich "kamenu". Samozrejme si libovolne doplnujte funkcionalitu zejmena
     * do trody HerniPole, aby hra fungovala jak potrebujete.
     */
    class Map{
    private:
        /// Hraci deska, ktera obsahuje jednotliva herni pole
        std::vector<std::vector<Location*> > m_map;
        /// Pomocna promenna s poctem radku hraci desky
        unsigned int m_numOfRows;
        /// Pomocna promenna s poctem sloupcu hraci desky
        unsigned int m_numOfCols;
    public:
        /// Konstruktor, ketry vytvori prazdne pole o predane velikosti
        Map(const unsigned int numOfRows, const unsigned int numOfCols);
        /// Pokud je to mozne, vrati objekt, ktery je na dane pozici v herni desce
        Location* getLocationFromMap(const unsigned int row, const unsigned int col);
        /// Vlozi novy objekt, ktery je potomkem tridy Location na pozici v desce
        void insertLocationIntoMap(const unsigned int row, const unsigned int col, Location* location);
        /// Vrati pocet radek matice (maximalni index je o jedno mensi)
        int getNumOfRows();
        /// Vrati pocet sloupcu matice (maximalni index je o jedno mensi)
        int getNumOfCols();
        /// Vypise popisy jednotlivych hracich poli na obrazovku
        void printMap();
        /**
         * @brief Metoda mazajici jednotliva herni pole
         *
         * Tato metoda je trochu zvlastni. Obvykle maze objekty ten, kdo je vytvari
         * Ale v tomto pripade by to bylo komplikovane, proto vznikla tato specialni
         * cistici metoda.
         */
        void deleteMap();
    };
}

#endif