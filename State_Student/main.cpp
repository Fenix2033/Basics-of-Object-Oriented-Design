//
//  main.cpp
//  State_Student
//
//  Created by David Prochazka on 06.12.13.
//  Copyright (c) 2013 David Prochazka. All rights reserved.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main(int argc, const char * argv[])
{
	Student* karel = new Student(true);
	karel->setPrumer(1.5);
	karel->zvysSemestrStudia();
	
	cout << "Pocet semestru zdarma: " << karel->getPocetSemestruZdarma() << endl;
	cout << "Stipendium: " << karel->getStipendium() << endl;

    karel->prejdiNaDalkoveStudium();
    
    cout << "Pocet semestru zdarma: " << karel->getPocetSemestruZdarma() << endl;
    cout << "Stipendium: " << karel->getStipendium() << endl;

    
	delete karel;
}

