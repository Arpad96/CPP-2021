#ifndef KONYV_H_INCLUDED
#define KONYV_H_INCLUDED
#include<iostream>
#include<vector>
#include"Szerzo.h"

using namespace std;

class Konyv {
public:
   // Konyv(string cim, int kiadasi_ev);
   Konyv();

    string getCim()const { return this->cim; }
    int getKiadasiEv()const { return this->kiadasi_ev; }
    void setCim(string cim) { this->cim = cim; }
    void setKiadasiEv(int kiadasi_ev) { this->kiadasi_ev = kiadasi_ev; }
    void addSzerzo(Szerzo& szerzo);
    friend ostream& operator<<(ostream& os, const Konyv& konyv);
    int szerzokSzama();
    Szerzo operator[](int index)const;
private:
    string cim;
    int kiadasi_ev;
    vector<Szerzo> szerzok;
    Szerzo* szerzok1;//

};


#endif // KONYV_H_INCLUDED