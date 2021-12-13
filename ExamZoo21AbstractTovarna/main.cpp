#include <iostream>
#include "AmdFactory.h"
#include "IntelFactory.h"
#include "PlotnovyDisk.h"
#include "PocitacFactory.h"
#include "Procesor.h"

int main() {
    PocitacFactory* pocitacIntel;
    pocitacIntel = new IntelFactory(2000, 7200, 10);
    Procesor* intel = pocitacIntel->getProcesor();
    PlotnovyDisk* ssdI = pocitacIntel->getDisk();

    std::cout << "Intel vykon: " << intel->getVykon() << std::endl;
    std::cout << "Intel vykon disku: " << ssdI->getRychlost() << std::endl;

    PocitacFactory* pocitacAmd;
    pocitacAmd = new AmdFactory(1000, 8, 5400, 10);
    Procesor* amd = pocitacAmd->getProcesor();
    PlotnovyDisk* ssdA = pocitacAmd->getDisk();

    std::cout << "Intel vykon: " << amd->getVykon() << std::endl;
    std::cout << "Intel vykon disku: " << ssdA->getRychlost() << std::endl;

    delete pocitacIntel;
    delete intel;
    delete ssdI;
    delete pocitacAmd;
    delete amd;
    delete ssdA;
    return 0;


}
