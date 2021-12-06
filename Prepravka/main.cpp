#include <iostream>
using namespace std;

struct Pozice{
    int x;
    int y;
};

// i pokud structy obsahuji stejne hodnoty
// vyplati se je rozlisovat, prave jejich
// rozliseni kontroluje spravne pouziti metod
struct Posun{
    int x;
    int y;
};


class GrafickyObjekt{
private:
    Pozice m_aktualniPozice;
    
public:
    GrafickyObjekt(Pozice pozice){
        m_aktualniPozice = pozice;
    }
    
    // posun o vzdalenost
    void provedPosunuti(Posun oKolik){
        // jsou to jine structy, musim prepsat
        m_aktualniPozice.x += oKolik.x;
        m_aktualniPozice.y += oKolik.y;
    }
    // posun na pozici - kdybych jen pouzival x a y, tak to nerozlisim
    // a pri hre to pak mohu spatne pouzit
    void provedPosunuti(Pozice kam){
        m_aktualniPozice = kam;
    }
    
    Pozice getAktualniPozice(){
        return m_aktualniPozice;
    }
};


int main()
{
    // Pokud vytvarite instanci structu, nepotrebujete konstruktor
    // muzete pouze vypsat do slozenych zavorek hodnoty pro atributy
    // v tom poradi, v jakem jsou napsany v tride.
    // Vice: uniformni inicializace v C++
    Pozice souradnicePocatku{10, 20};
	
    // vytvorim prvni objekt a pomoci nepojmenovane instance vlozim pozici
    GrafickyObjekt* prvni = new GrafickyObjekt(souradnicePocatku);
    GrafickyObjekt* druhy = new GrafickyObjekt(Pozice{1, 11});
    // posun druhy na pozici prvniho
    druhy->provedPosunuti(prvni->getAktualniPozice());
    // uloz pozici do pom. promenne
    // pozdeji ji muzu pouzit...
    Pozice tmpPozice = druhy->getAktualniPozice();
    cout << "Pozice: " << tmpPozice.x << ", " << tmpPozice.y << endl;
    
    delete prvni;
    delete druhy;
    return 0;
}
