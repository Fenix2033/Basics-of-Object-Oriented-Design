#include <iostream>
using namespace std;

#include "Mutant.h"
#include "Skeleton.h"
#include "EnemyFactory.h"
#include "EasyEnemyFactory.h"
#include "HardEnemyFactory.h"

int main()
{
	int rozhodnuti;
	
	cout << "Zvol si obtiznost: ";
	cin >> rozhodnuti;
	
	EnemyFactory* ef = nullptr;
	
	if (rozhodnuti == 1) {
		ef = new EasyEnemyFactory();
	} else {
		ef = new HardEnemyFactory();
	}
	
	Mutant* mutak = ef->getMutant();
	Skeleton* kostak = ef->getSkeleton();
	
	cout << "Sila utoku: " << kostak->getAttack() << endl;
	
	delete mutak;
	delete kostak;
    return 0;
}

