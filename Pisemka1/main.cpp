#include <iostream>

class Dokument {
    std::string m_nazev;
    std::string m_obsah;
    int m_id;
    std::string m_heslo;

public:
    Dokument(std::string nazev, std::string obsah, int id, std::string heslo){
        m_nazev = nazev;
        m_obsah = obsah;
        m_id = id;
        m_heslo = heslo;
    }

    Dokument(std::string nazev, std::string obsah, int id): Dokument(nazev, obsah, id, ""){};

    void printInfro() const{
        std::cout << "Nazev: " << m_nazev << std::endl;
        std::cout << "Obsah: " << m_obsah << std::endl;
    }

    int getId() const{
        return m_id;
    }

    std::string getHeslo() const{
        return m_heslo;
    }
};

class Vlastnik {
    std::string m_jmeno;
    int m_id;

public:
    Vlastnik(std::string jmeno, int id){
        m_jmeno = jmeno;
        m_id = id;
    }

    int getId() const{
        return m_id;
    }

    void zobrazObsah(const Dokument* dokument, const std::string heslo) const{
        if(heslo == dokument->getHeslo()){
            if(getId() == dokument->getId()){
                dokument->printInfro();
            } else {
                std::cerr << "Chyba: Heshoda id" << std::endl;
            }

        } else {
            std::cerr << "Chyba: Heshoda hesla" << std::endl;
        }
    }


};

int main() {

    Dokument* one = new Dokument("One", "Evidujeme soukromé dokument", 2, "1234");
    Dokument* two = new Dokument("Two", "Ke kterým má přístup pouze majitel dokume", 2);
    Vlastnik* vitalii = new Vlastnik("Vitalii", 1);
    Vlastnik* anna = new Vlastnik("Anna", 2);

    anna->zobrazObsah(two, "4321");
    vitalii->zobrazObsah(two, "");
    anna->zobrazObsah(one, "1234");

    delete one;
    delete two;
    delete vitalii;
    delete anna;

    return 0;
}
