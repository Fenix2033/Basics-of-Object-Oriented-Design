//
//  Location.h
//  Projekt do ZOO ZS2013
//
//  Created by David Prochazka on 12/6/12.
//  Copyright (c) 2012 David Prochazka. All rights reserved.
//

#ifndef __zoo__HraciPole__
#define __zoo__HraciPole__

#include <iostream>

namespace world {
    /**
     * @brief Abstraktni trida predstavujici obecne herni pole 
     *
     * Tato trida predstavuje obecne hraci pole. Toto pole se pouziva pouze pro
     * dedeni ruznych konkretnich typu hracich poli. Slouzi hlavne k tomu, abychom
     * mohli mit univerzalni ukazatel na libovolne hraci pole, dosadili si za nej
     * co uzname za vhodne a pak provolavali ruzne implementace metod (polym.).
     * Vytvarejte si vlastni potomky a doplnujte atributy a metody podle potreby.
     */
    class Location{
    private:
        /// Testovaci atribut, ktery se dedi do vsech potomku
        std::string m_description;
    public:
        Location(std::string description);
        /// Testovaci metoda, ktera se dedi do vsech potomku
        std::string getDescription();
        /** 
         * @brief Metoda vracejici kolik rudy lze z lokace vytezit
         *
         * Ilustruje polymorfni chovani poli na hraci desce - kazde pole nyni musi 
		 * vracet obr. hodnotu vypoctenou podle nejakeho kriteria - pro planetu se
		 * pocita jinak, pro asteroid jinak atp.
         * Pokud by existovala nejaka univerzalni metoda vypoctu, kterou by pouzivala
         * vetsina poli, tak bychom ji udelali pouze virtualni a pouze v nekterem
         * potomkovi prekryli.
         */
        virtual int mineUnitOfOre() = 0;
        /// Tridy, ktere budou mit potomky by mely mit virt. dest., pak se zavola vzdy destruktor spravneho potomka
        virtual ~Location(){};
};
}

#endif
