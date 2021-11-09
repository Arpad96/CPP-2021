#include"Konyv.h"
#include <stdexcept>
#include"Szerzo.h"
/*
Konyv::Konyv(string cim, int kiadasi_ev)
{
    this->cim = cim;
    this->kiadasi_ev = kiadasi_ev;
}
*/
Konyv::Konyv()//Implicit konstruktor
{
    this->cim = "Noname";
    this->kiadasi_ev = 1809;     
}

void Konyv::addSzerzo(Szerzo& szerzo)//uj-szerzo
{
    this->szerzok.push_back(szerzo);
}

ostream& operator<<(ostream& os, const Konyv& konyv)
{
    os << "Cim: " << konyv.cim << endl;
    os << "Kiadasi ev: " << konyv.kiadasi_ev << endl;
    os << "Szerzok:\n";
    for (auto a : konyv.szerzok)
    {
        os << "\t" << a;
    }
    return os;
}

int Konyv::szerzokSzama()
{
    return this->szerzok.size();
}

Szerzo Konyv :: operator[](int index)const
{
    if (index < szerzok.size())
    {
        return szerzok[index];        
    }
    else
    {
        throw out_of_range("Nincs ilyen indexu szerzo!");
    }
}

