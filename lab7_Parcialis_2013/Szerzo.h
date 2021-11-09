#ifndef SZERZO_H_INCLUDE
#define SZERZO_H_INCLUDE
#include<iostream>

using namespace std;
class Szerzo {
private:
	string vezetekNev;
	string keresztNev;
public:
	Szerzo(string vezetekNev, string keresztNev);//konstruktor amely innicializalja a 2 attributumot
	string getVezetekNev() const { return this->vezetekNev; }//egy egy GET metodus az attributumok lekerdezesehez
	string getKeresztNev() const { return this->keresztNev; }//-||-
	friend ostream& operator<<(ostream& os, const Szerzo& szerzo);//INSERTER OPERATOR 
};



#endif SZERZO_H_INCLUDE

