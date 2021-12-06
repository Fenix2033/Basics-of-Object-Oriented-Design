#include <iostream>
using namespace std;

#include "Mutant.h"

int main()
{
	int rozhodnuti;
	
	cout << "Zvol si obtiznost: ";
	cin >> rozhodnuti;
	
	Mutant* nepritel = nullptr;
	
	nepritel = Mutant::getMutant(rozhodnuti);
	
	cout << "Sila: " << nepritel->getUtok() << endl;
	
	delete nepritel;
    return 0;
}

